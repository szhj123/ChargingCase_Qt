#include "mypic.h"

#define PIC_INTERVAL_TIME           5 //ms
#define PIC_DATA_MAX_LENGTH         64

MyPic::MyPic(QWidget *parent) : QWidget(parent)
{
    Pic_Queue_Clr();

    this->picSendState = GET_IMAGE;

    this->movie = nullptr;

    this->ack = 0;
}

MyPic::~MyPic()
{

}

void MyPic::Pic_Init(Ui::MainWindow *ui ,MySerialPort *serialPort)
{
    this->ui = ui;
    this->serialPort = serialPort;

    connect(ui->btnPng1, SIGNAL(clicked()), this, SLOT(on_btnPng1_clicked()));
    connect(ui->btnPng2, SIGNAL(clicked()), this, SLOT(on_btnPng2_clicked()));
    connect(ui->btnPng3, SIGNAL(clicked()), this, SLOT(on_btnPng3_clicked()));
    connect(ui->btnPng4, SIGNAL(clicked()), this, SLOT(on_btnPng4_clicked()));
    connect(ui->btnPng5, SIGNAL(clicked()), this, SLOT(on_btnPng5_clicked()));
    connect(ui->btnPng6, SIGNAL(clicked()), this, SLOT(on_btnPng6_clicked()));

    connect(ui->btnDownload1, SIGNAL(clicked()), this, SLOT(on_btnDownload1_clicked()));
    connect(ui->btnDownload2, SIGNAL(clicked()), this, SLOT(on_btnDownload2_clicked()));
    connect(ui->btnDownload3, SIGNAL(clicked()), this, SLOT(on_btnDownload3_clicked()));
    connect(ui->btnDownload4, SIGNAL(clicked()), this, SLOT(on_btnDownload4_clicked()));
    connect(ui->btnDownload5, SIGNAL(clicked()), this, SLOT(on_btnDownload5_clicked()));
    connect(ui->btnDownload6, SIGNAL(clicked()), this, SLOT(on_btnDownload6_clkcked()));

    connect(ui->btnCancelDownload, SIGNAL(clicked()), this, SLOT(on_btnCancelDownload_clicked()));

    timer = new QTimer(this);
    timer->setInterval(5);
    connect(timer, SIGNAL(timeout()), this, SLOT(Pic_Send_Handler()));
}

void MyPic::on_btnPng1_clicked()
{
    static QString saveFileName = nullptr;
    QString filename=QFileDialog::getOpenFileName(this,tr("Open Image"),QDir::homePath(),tr("(*.jpeg)\n(*.jpg)\n(*.bmp)\n(*.png)"));

    if(saveFileName == nullptr && filename != nullptr)
    {
        saveFileName = filename;
    }
    else
    {
        if(filename == saveFileName)
        {
            return ;
        }
        else
        {
            saveFileName = filename;
        }
    }

    if(filename == nullptr)
    {
        return ;
    }

    image1Src = new QImage(filename);

    Pic_Show(image1Src, ui->labelPng1);

}

void MyPic::on_btnPng2_clicked()
{
    static QString saveFileName = nullptr;

    QString filename=QFileDialog::getOpenFileName(this,tr("Open Image"),QDir::homePath(),tr("(*.jpeg)\n(*.jpg)\n(*.bmp)\n(*.png)"));

    if(saveFileName == nullptr && filename != nullptr)
    {
        saveFileName = filename;
    }
    else
    {
        if(filename == saveFileName)
        {
            return ;
        }
        else
        {
            saveFileName = filename;
        }
    }

    if(filename == nullptr)
    {
        return ;
    }

    image2Src = new QImage(filename);

    Pic_Show(image2Src, ui->labelPng2);
}

void MyPic::on_btnPng3_clicked()
{
    static QString saveFileName = nullptr;

    QString filename=QFileDialog::getOpenFileName(this,tr("Open Image"),QDir::homePath(),tr("(*.jpeg)\n(*.jpg)\n(*.bmp)\n(*.png)"));

    if(saveFileName == nullptr && filename != nullptr)
    {
        saveFileName = filename;
    }
    else
    {
        if(filename == saveFileName)
        {
            return ;
        }
        else
        {
            saveFileName = filename;
        }
    }

    if(filename == nullptr)
    {
        return ;
    }

    image3Src = new QImage(filename);

    Pic_Show(image3Src, ui->labelPng3);

}

void MyPic::on_btnPng4_clicked()
{
    static QString saveFileName = nullptr;

    QString filename=QFileDialog::getOpenFileName(this,tr("Open Image"),QDir::homePath(),tr("(*.jpeg)\n(*.jpg)\n(*.bmp)\n(*.png)"));

    if(saveFileName == nullptr && filename != nullptr)
    {
        saveFileName = filename;
    }
    else
    {
        if(filename == saveFileName)
        {
            return ;
        }
        else
        {
            saveFileName = filename;
        }
    }

    if(filename == nullptr)
    {
        return ;
    }

    image4Src = new QImage(filename);

    Pic_Show(image4Src, ui->labelPng4);

}

void MyPic::on_btnPng5_clicked()
{
    static QString saveFileName = nullptr;

    QString filename=QFileDialog::getOpenFileName(this,tr("Open Image"),QDir::homePath(),tr("(*.jpeg)\n(*.jpg)\n(*.bmp)\n(*.png)"));

    if(saveFileName == nullptr && filename != nullptr)
    {
        saveFileName = filename;
    }
    else
    {
        if(filename == saveFileName)
        {
            return ;
        }
        else
        {
            saveFileName = filename;
        }
    }

    if(filename == nullptr)
    {
        return ;
    }

    image5Src = new QImage(filename);

    Pic_Show(image5Src, ui->labelPng5);
}

void MyPic::on_btnPng6_clicked()
{
    QMovie *tmpMovie = nullptr;

    QString filename=QFileDialog::getOpenFileName(this,tr("Open Image"),QDir::homePath(),tr("(*.gif)"));

    if(filename != nullptr)
    {
        return ;
    }

    movie = new QMovie(filename);

    movie->setFileName(filename);

    movie->setCacheMode(QMovie::CacheAll);

    tmpMovie = new QMovie(filename);

    QSize si(ui->labelPng6->width(),ui->labelPng6->height());

    ui->labelPng6->setMovie(tmpMovie);

    tmpMovie->setScaledSize(si);

    tmpMovie->start();
}

void MyPic::on_btnDownload1_clicked()
{
    if(serialPort->Serial_Port_Get_Opened() == true)
    {
        Pic_Queue_Set(image1Src, 0);

        timer->start();
    }
}

void MyPic::on_btnDownload2_clicked()
{
    if(serialPort->Serial_Port_Get_Opened() == true)
    {
        Pic_Queue_Set(image2Src, 1);

        timer->start();
    }
}

void MyPic::on_btnDownload3_clicked()
{
    if(serialPort->Serial_Port_Get_Opened() == true)
    {
        Pic_Queue_Set(image3Src, 2);

        timer->start();
    }
}

void MyPic::on_btnDownload4_clicked()
{
    if(serialPort->Serial_Port_Get_Opened() == true)
    {
        Pic_Queue_Set(image4Src, 3);

        timer->start();
    }
}

void MyPic::on_btnDownload5_clicked()
{
    if(serialPort->Serial_Port_Get_Opened() == true)
    {
        Pic_Queue_Set(image5Src, 4);

        timer->start();
    }
}

void MyPic::on_btnDownload6_clkcked()
{
    static QImage image;

    if(movie == nullptr || serialPort->Serial_Port_Get_Opened() == false)
    {
        return ;
    }

    int gifFrameNum = movie->frameCount() > GIF_FRAME_NUM ? GIF_FRAME_NUM : movie->frameCount();

    qDebug() << QString().sprintf("gif frame count:%d", gifFrameNum);

    for(int i=0;i<gifFrameNum;i++)
    {
        movie->jumpToFrame(0);

        image = movie->currentImage();

        Pic_Queue_Set(&image, 5+i);
    }

    timer->start();
}

void MyPic::on_btnCancelDownload_clicked()
{
    Pic_Queue_Clr();

    picSendState = GET_IMAGE;
}

void MyPic::Pic_Send_Handler()
{
    static image_data_s imageData;

    switch(picSendState)
    {
        case GET_IMAGE:
        {
            if(Pic_Queue_Get(&imageData) == true)
            {
                QPixmap pixmap = QPixmap::fromImage(*imageData.pImage);

                if(imageData.pImage == nullptr)
                    return ;

                int width = pixmap.width();
                int height = pixmap.height();

                if(width > IMAGE_MAX_WIDTH)
                {
                    width = IMAGE_MAX_WIDTH;
                }

                if(height > IMAGE_MAX_HEIGHT)
                {
                    height = IMAGE_MAX_HEIGHT;
                }

                QPixmap fitpixmap = pixmap.scaled(width, height, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);  // 饱满填充
                imageData.scalingImage = fitpixmap.toImage().convertToFormat(QImage::Format_RGB16);

                Pic_Send_Enable(imageData.imageIndex, width, height);

                imageData.imageTotalLength = width * height * 2;
                imageData.imageHeightCnt = 0;
                imageData.imageDataCnt = 0;
                imageData.timeout = 0;

                qDebug() << QString().sprintf("gif frame index:%d", imageData.imageIndex);


                picSendState = WAIT_RECV_ENABLE_ACK;
            }
            else
            {
                Pic_Queue_Clr();

                timer->stop();
            }
            break;
        }
        case WAIT_RECV_ENABLE_ACK:
        {
            if(Pic_Get_Ack() == 0x01)
            {
                Pic_Clr_Ack();
                picSendState = GET_ROW_DATA;
            }

            if(++imageData.timeout >= 1000/PIC_INTERVAL_TIME)
            {
                imageData.timeout = 0;

                Pic_Queue_Clr();

                timer->stop();

                picSendState = GET_IMAGE;
            }

            break;
        }
        case GET_ROW_DATA:
        {
            if(imageData.imageHeightCnt < imageData.scalingImage.height())
            {
                imageData.pData = imageData.scalingImage.scanLine(imageData.imageHeightCnt);
                imageData.imageHeightCnt++;
                imageData.imageWidth = imageData.scalingImage.width();
                picSendState = SEND_COL_DATA;
            }
            else
            {
                picSendState = GET_IMAGE;
            }
            break;
        }
        case SEND_COL_DATA:
        {
            int i;
            char tmpBuf[PIC_DATA_MAX_LENGTH];

            if(imageData.imageWidth > PIC_DATA_MAX_LENGTH/2)
            {
                for(i=0;i<PIC_DATA_MAX_LENGTH/2;i++)
                {
                    tmpBuf[i*2] = imageData.pData[i*2+1];
                    tmpBuf[i*2+1] = imageData.pData[i*2];
                }

                Pic_Send_Data(tmpBuf, PIC_DATA_MAX_LENGTH);
                //serialPort->Serial_Port_Send_Data(tmpBuf, 64);

                imageData.imageWidth -= PIC_DATA_MAX_LENGTH/2;
                imageData.pData += PIC_DATA_MAX_LENGTH;
                imageData.imageDataCnt += PIC_DATA_MAX_LENGTH;
            }
            else
            {
                for(i=0;i<imageData.imageWidth*2;i++)
                {
                    tmpBuf[i*2] = imageData.pData[i*2+1];
                    tmpBuf[i*2+1] = imageData.pData[i*2];
                }

                Pic_Send_Data(tmpBuf, imageData.imageWidth*2);
                //serialPort->Serial_Port_Send_Data(tmpBuf, imageData.imageWidth*2);

                imageData.imageDataCnt += imageData.imageWidth*2;
                imageData.pData += imageData.imageWidth*2;
                imageData.imageWidth = 0;
            }

            qDebug() << QString().sprintf("send count:%d", imageData.imageDataCnt);

            switch(imageData.imageIndex)
            {
                case 0: ui->progressBarPng1->setValue(imageData.imageDataCnt * 100 / imageData.imageTotalLength); break;
                case 1: ui->progressBarPng2->setValue(imageData.imageDataCnt * 100 / imageData.imageTotalLength); break;
                case 2: ui->progressBarPng3->setValue(imageData.imageDataCnt * 100 / imageData.imageTotalLength); break;
                case 3: ui->progressBarPng4->setValue(imageData.imageDataCnt * 100 / imageData.imageTotalLength); break;
                case 4: ui->progressBarPng5->setValue(imageData.imageDataCnt * 100 / imageData.imageTotalLength); break;
                case 5: ui->progressBarPng6->setValue(imageData.imageDataCnt * 100 / imageData.imageTotalLength); break;
                default: break;
            }

            picSendState = WAIT_RECV_DATA_ACK;

            break;
        }
        case WAIT_RECV_DATA_ACK:
        {
            if(Pic_Get_Ack() == 0x01)
            {
                imageData.timeout = 0;

                Pic_Clr_Ack();

                picSendState = SEND_COL_DATA;

                if(imageData.imageWidth)
                {
                    picSendState = SEND_COL_DATA;
                }
                else
                {
                    picSendState = GET_ROW_DATA;
                }

                return ;
            }

            if(++imageData.timeout >= 50/PIC_INTERVAL_TIME)
            {
                static uint8_t terminateCnt;
                imageData.timeout = 0;

                picSendState = SEND_COL_DATA;

                if(++terminateCnt >= 100)
                {
                    terminateCnt = 0;

                    Pic_Queue_Clr();

                    timer->stop();

                    picSendState = GET_IMAGE;
                }
            }

            break;
        }
        default: break;
    }

}

void MyPic::Pic_Show(QImage *pImage, QLabel *pLabel )
{
    QPixmap pixmap = QPixmap::fromImage(*pImage);
    int with = pLabel->width();
    int height = pLabel->height();
    QPixmap fitpixmap = pixmap.scaled(with, height, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);  // 饱满填充
    pLabel->setPixmap(fitpixmap);
}

void MyPic::Pic_Read_Rgb565(QImage *pImage, QByteArray pImageDataBuf)
{
    QPixmap pixmap = QPixmap::fromImage(*pImage);

    if(pImage == nullptr)
        return ;

    int width = pImage->width();
    int height = pImage->height();

    if(width > IMAGE_MAX_WIDTH)
    {
        width = IMAGE_MAX_WIDTH;
    }

    if(height > IMAGE_MAX_HEIGHT)
    {
        height = IMAGE_MAX_HEIGHT;
    }

    QPixmap fitpixmap = pixmap.scaled(width, height, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);  // 饱满填充

    QImage tempImage = fitpixmap.toImage().convertToFormat(QImage::Format_RGB16);

    uchar *pData;

    for(int i=0;i<tempImage.height();i++)
    {
        pData = tempImage.scanLine(i);

        for(int j=0;j<tempImage.width();j++)
        {
            qDebug() << QString().sprintf("%x", pData[2*j]);
            qDebug() << QString().sprintf("%x", pData[2*j+1]);
        }
    }
}

void MyPic::Pic_Queue_Set(QImage *imageSrc, int imageIndex )
{
    if(imageSrc == nullptr)
        return ;

    imageQueue.imageDataBuf[imageQueue.rear].pImage = imageSrc;
    imageQueue.imageDataBuf[imageQueue.rear].imageIndex = imageIndex;

    imageQueue.rear = (imageQueue.rear + 1) % GIF_FRAME_NUM;

}

bool MyPic::Pic_Queue_Get(image_data_s *imageData)
{
    if(imageQueue.head != imageQueue.rear)
    {
        imageData->pImage = imageQueue.imageDataBuf[imageQueue.head].pImage;
        imageData->imageIndex = imageQueue.head;
        imageQueue.head = (imageQueue.head + 1) % GIF_FRAME_NUM;

        return true;
    }
    else
        return false;
}

void MyPic::Pic_Queue_Clr()
{
    memset((void*)&imageQueue, 0, sizeof(image_queue_typedef));
}

void MyPic::Pic_Send_Enable(int imageIndex, uint16_t width, uint16_t height)
{
    static char buf[10] = {0};
    char checksum = 0;

    buf[0] = 0x5a;
    buf[1] = 0x5a;
    buf[2] = 0x7;
    buf[3] = 0x2;
    buf[4] = imageIndex;
    buf[5] = (char )width;
    buf[6] = (char )(width >> 8);
    buf[7] = (char )height;
    buf[8] = (char )(height >> 8);

    for(int i = 0;i<buf[2];i++)
    {
        checksum += buf[i+2];
    }

    buf[9] = (char)checksum;

    serialPort->Serial_Port_Send_Data(buf, sizeof(buf));
}

void MyPic::Pic_Send_Data(char *pBuf, int length)
{
    static char buf[69] = {0};
    int i;
    char checksum = 0;

    buf[0] = 0x5a;
    buf[1] = 0x5a;
    buf[2] = length+2;
    buf[3] = 0x3;

    for(i=0;i<length;i++)
    {
        buf[4+i] = pBuf[i];
    }

    for(int i = 0;i<buf[2];i++)
    {
        checksum += buf[i+2];
    }

    buf[length+4] = (char)checksum;

    serialPort->Serial_Port_Send_Data(buf, length+5);
}

void MyPic::Pic_Set_Ack(unsigned char ack)
{
    this->ack = ack;
}

void MyPic::Pic_Clr_Ack()
{
    this->ack = 0;
}

unsigned char MyPic::Pic_Get_Ack()
{
    return this->ack;
}





