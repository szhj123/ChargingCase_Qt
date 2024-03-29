#include "myupgrade.h"

#define UPG_INTERVAL_TIME                10 //ms
#define UPG_ERASE_TIMEOUT                1000 //ms

static fw_info_t   fwInfo;
static upg_state_t upgState;

MyUpgrade::MyUpgrade(QWidget *parent) : QWidget(parent)
{

}

void MyUpgrade::Upgrade_Init(Ui::MainWindow *ui, MySerialPort *serialPort)
{
    this->ui = ui;

    this->serialPort = serialPort;

    connect(ui->btn_addFw, SIGNAL(clicked()), this, SLOT(on_btnAddFw_Clicked()));

    connect(ui->btn_upgEn, SIGNAL(clicked()), this, SLOT(on_btnUpgEn_Clicked()));

    connect(ui->tabWidget, SIGNAL(tabBarClicked(int)), this, SLOT(on_tabWidget_Clicked(int)));

    timer = new QTimer(this);
    timer->setInterval(UPG_INTERVAL_TIME);
    connect(timer, SIGNAL(timeout()), this, SLOT(Upg_Handler()));
}

void MyUpgrade::Upgrade_Set_Version(uchar fwBuildVer, uchar fwMinorVer, uchar fwMajorVer)
{
    QString str = "0.0.0";

    Upgrade_Set_Fw_Version_Flag(true);

    str[0] = fwBuildVer + 0x30;
    str[2] = fwMinorVer + 0x30;
    str[4] = fwMajorVer + 0x30;

    ui->label_fwVersion->setText(str);
}

void MyUpgrade::Upgrade_Set_Ack(uchar ack)
{
    this->ack = ack;
}

void MyUpgrade::Upgrade_Clr_Ack()
{
    this->ack = 0 ;
}

uchar MyUpgrade::Upgrade_Get_Ack()
{
    return this->ack;
}

void MyUpgrade::Upgrade_Set_Fw_Version_Flag(bool flag)
{
    this->fwVerRecvFlag = flag;
}

void MyUpgrade::Upgrade_Clr_Fw_Version_Flag()
{
    this->fwVerRecvFlag = false;
}

bool MyUpgrade::Upgrade_Get_Fw_Version_Flag()
{
    return this->fwVerRecvFlag;
}

void InvertUint16(uint16_t *poly )
{
    uint8_t i;
    uint16_t tmp = 0;
    uint16_t polyVal = *poly;

    for(i=0;i<16;i++)
    {
        if(polyVal & (1 << i))
            tmp |= 1 << (15-i);
    }
    *poly = tmp;
}

uint16_t MyUpgrade::UPgrade_Cal_Checksum(uint8_t *data, uint32_t length)
{
    uint16_t wCRCin = 0x0000;
    uint16_t wCPoly = 0x8005;
    uint8_t i;

    InvertUint16(&wCPoly);

    while(length--)
    {
        wCRCin ^= *(data++);
        for(i=0;i<8;i++)
        {

            if(wCRCin & 0x0001)
                wCRCin = (wCRCin >> 1) ^ wCPoly;
            else
                wCRCin >>= 1;
        }
    }
    return wCRCin;
}

void MyUpgrade::on_btnAddFw_Clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this,tr("Open Upgrade Firmware"),QDir::homePath(),tr("(*.bin)"));

    ui->lineEdit_fwPath->setText(filePath);

    QFile readFile(ui->lineEdit_fwPath->text());

    QFileInfo readFileInfo(readFile);

    if(!readFile.open(QIODevice::ReadOnly))
    {
        QMessageBox::warning(this, tr("Read File)"), tr("Cannot open file:\n%1").arg(ui->lineEdit_fwPath->text()));

        return ;
    }

    QDataStream binFileData(&readFile);

    fwInfo.fwSize = readFileInfo.size();

    static char *pBuf = new char[fwInfo.fwSize];

    binFileData.readRawData(pBuf, static_cast<int>(fwInfo.fwSize));

    fwInfo.fwArray = QByteArray(pBuf, static_cast<int>(fwInfo.fwSize));

    fwInfo.fwBuf = (char *)fwInfo.fwArray.data();
}

void MyUpgrade::on_btnUpgEn_Clicked()
{
    upgState = UPG_STATE_ERASE_FLASH;

    ui->upgradeBar->Update_Val(0);

    timer->start();
}

void MyUpgrade::on_tabWidget_Clicked(int index)
{
    Upgrade_Clr_Fw_Version_Flag();

    if(index == 2)
    {
        if(serialPort->Serial_Port_Get_Opened() == true)
        {
            serialPort->Serial_Send_Cmd_Get_Version();
        }
    }
}

void MyUpgrade::Upg_Handler()
{
    switch(upgState)
    {
        case UPG_STATE_ERASE_FLASH:
        {
            serialPort->Serial_Send_Cmd_Fw_Erase(fwInfo.fwSize);

            fwInfo.fwTxTimeoutCnt = 0;

            qDebug() << QString().sprintf("firmware size:%d", fwInfo.fwSize);

            upgState = UPG_STATE_WAIT_ACK_FOR_ERASE;

            break;
        }
        case UPG_STATE_WAIT_ACK_FOR_ERASE:
        {
            if(Upgrade_Get_Ack() == 0x01)
            {
                Upgrade_Clr_Ack();

                fwInfo.fwTxTimeoutCnt = 0;

                fwInfo.fwOffset = 0;

                upgState = UPG_STATE_TX_FW_DATA;
            }
            else
            {
                if(++fwInfo.fwTxTimeoutCnt >= (UPG_ERASE_TIMEOUT / UPG_INTERVAL_TIME))
                {
                    fwInfo.fwTxTimeoutCnt = 0;

                    upgState = UPG_STATE_ERASE_FLASH;

                    timer->stop();
                }
            }
            break;
        }
        case UPG_STATE_TX_FW_DATA:
        {
            if(fwInfo.fwSize > FW_MAX_DATA_LENGTH)
            {
                serialPort->Serial_Send_Cmd_Tx_Data(fwInfo.fwOffset, fwInfo.fwBuf, FW_MAX_DATA_LENGTH);
            }
            else
            {
                serialPort->Serial_Send_Cmd_Tx_Data(fwInfo.fwOffset, fwInfo.fwBuf, fwInfo.fwSize);
            }

            upgState = UPG_STATE_WAIT_ACK_FOR_TX;
            break;
        }
        case UPG_STATE_WAIT_ACK_FOR_TX:
        {
            if(Upgrade_Get_Ack() == 0x01)
            {
                Upgrade_Clr_Ack();

                fwInfo.fwTxTimeoutCnt = 0;
                fwInfo.fwTxErrCnt = 0;

                if(fwInfo.fwSize > FW_MAX_DATA_LENGTH)
                {
                    fwInfo.fwSize -= FW_MAX_DATA_LENGTH;
                    fwInfo.fwOffset += FW_MAX_DATA_LENGTH;
                    fwInfo.fwBuf += FW_MAX_DATA_LENGTH;

                    upgState = UPG_STATE_TX_FW_DATA;
                }
                else
                {
                    fwInfo.fwOffset += fwInfo.fwSize;
                    fwInfo.fwSize = 0;
                    fwInfo.fwBuf = nullptr;

                    upgState = UPG_STATE_TX_FW_CHECKSUM;
                }

                uint8_t progressVal = fwInfo.fwOffset *100 / fwInfo.fwArray.length();

                if(progressVal >= 100)
                {
                    progressVal = 99;
                }

                qDebug() << QString().sprintf("firmware data offset:%d", fwInfo.fwOffset);

                ui->upgradeBar->Update_Val(progressVal);
            }
            else
            {
                if(++fwInfo.fwTxTimeoutCnt >= (50 / UPG_INTERVAL_TIME))
                {
                    fwInfo.fwTxTimeoutCnt = 0;

                    upgState = UPG_STATE_TX_FW_DATA;

                    if(++fwInfo.fwTxErrCnt >= 10)
                    {
                        upgState = UPG_STATE_ERASE_FLASH;

                        QMessageBox::warning(this, tr("Upgrade State"),tr("Upgrade Error, it's timeout for transmiting data"));

                        timer->stop();
                    }
                }
            }
            break;
        }
        case UPG_STATE_TX_FW_CHECKSUM:
        {
            fwInfo.fwBuf = (char *)fwInfo.fwArray.data();

            fwInfo.fwSize = fwInfo.fwArray.length();

            uint16_t checksum = UPgrade_Cal_Checksum((uint8_t *)fwInfo.fwBuf, fwInfo.fwSize);

            serialPort->Serial_Send_Cmd_Tx_Checksum((int )checksum);

            upgState = UPG_STATE_WATI_ACK_FOR_CHECKSUM;

            break;
        }
        case UPG_STATE_WATI_ACK_FOR_CHECKSUM:
        {
            if(Upgrade_Get_Ack() == 0x01)
            {
                fwInfo.fwTxTimeoutCnt = 0;

                fwInfo.fwTxErrCnt = 0;

                serialPort->Serial_Send_Cmd_Tx_Reset();

                upgState = UPG_STATE_TX_GET_VERSION;
            }
            else
            {
                if(++fwInfo.fwTxTimeoutCnt >= (500 / UPG_INTERVAL_TIME))
                {
                    fwInfo.fwTxTimeoutCnt = 0;

                    upgState = UPG_STATE_TX_FW_CHECKSUM;

                    if(++fwInfo.fwTxErrCnt >= 10)
                    {
                        upgState = UPG_STATE_ERASE_FLASH;

                        QMessageBox::warning(this, tr("Upgrade State"),tr("Upgrade Error, it's timeout for getting correct checksum"));

                        timer->stop();
                    }
                }
            }
            break;
        }
        case UPG_STATE_TX_GET_VERSION:
        {
            Upgrade_Clr_Fw_Version_Flag();

            serialPort->Serial_Send_Cmd_Get_Version();

            upgState = UPG_STATE_WAIT_FW_VERSION;

            break;
        }
        case UPG_STATE_WAIT_FW_VERSION:
        {

            if(Upgrade_Get_Fw_Version_Flag())
            {
                upgState = UPG_STATE_IDLE;

                ui->upgradeBar->Update_Val(100);

                QMessageBox::warning(this,tr("Upgrade State"), tr("Upgrade Successful!"));

                timer->stop();
            }
            else
            {
                if(++fwInfo.fwTxTimeoutCnt >= (1000 / UPG_INTERVAL_TIME))
                {
                    fwInfo.fwTxTimeoutCnt = 0;

                    upgState = UPG_STATE_TX_GET_VERSION;

                    if(++fwInfo.fwTxErrCnt >= 10)
                    {
                        upgState = UPG_STATE_ERASE_FLASH;

                        QMessageBox::warning(this, tr("Upgrade State"),tr("Upgrade Error, it's timeout for getting correct checksum"));

                        timer->stop();
                    }
                }
            }
            break;
        }
        default: break;
    }
}




