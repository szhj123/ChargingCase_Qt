#include "myled.h"
#include "mybtn.h"


MyLed::MyLed(QObject *parent) : QObject(parent)
{

}

void MyLed::Led_Init(Ui::MainWindow *ui, MySerialPort *serialPort)
{
    this->ui = ui;
    this->serialPort = serialPort;

    QDoubleValidator* lineDouble = new QDoubleValidator(0, 100000, 3, nullptr);

    connect(ui->led1Btn, SIGNAL(checkedChanged(bool)), this, SLOT(on_led1Btn_checked(bool)));
    connect(ui->led1StyleOn, SIGNAL(clicked(bool)), this, SLOT(on_led1StyleOn_checked(bool)));
    connect(ui->led1StyleBreath, SIGNAL(clicked(bool)), this, SLOT(on_led1StyleBreath_checked(bool)));

    connect(ui->led2Btn, SIGNAL(checkedChanged(bool)), this, SLOT(on_led2Btn_checked(bool)));
    connect(ui->led2StyleOn, SIGNAL(clicked(bool)), this, SLOT(on_led2StyleOn_checked(bool)));
    connect(ui->led2StyleBreath, SIGNAL(clicked(bool)), this, SLOT(on_led2StyleBreath_checked(bool)));

    connect(ui->led3Btn, SIGNAL(checkedChanged(bool)), this, SLOT(on_led3Btn_checked(bool)));
    connect(ui->led3StyleOn, SIGNAL(clicked(bool)), this, SLOT(on_led3StyleOn_checked(bool)));
    connect(ui->led3StyleBreath, SIGNAL(clicked(bool)), this, SLOT(on_led3StyleBreath_checked(bool)));
}

void MyLed::Led_Set_Enabled(Ui::MainWindow *ui, int index)
{
    switch(index)
    {
        case 0:
        {
            ui->led1Group->show();
            ui->led2Group->hide();
            ui->led3Group->hide();

            break;
        }
        case 1:
        {
            ui->led1Group->hide();
            ui->led1Group->show();
            ui->led2Group->show();
            break;
        }
         case 2:
        {
            ui->led1Group->show();
            ui->led2Group->show();
            ui->led3Group->show();
            break;
        }
        default:
            break;
    }
}

void MyLed::Led_Send(led_typedef *led)
{
    //static char buf[];

    //buf[0] = 0x5a;
    //buf[1] = 0x5a;
    //buf[2] =
}

void MyLed::on_cbxLedNum_currentIndexChanged(int index)
{
    Led_Set_Enabled(ui, index);
}

void MyLed::on_led1Btn_checked(bool checked)
{
    if(checked)
    {
        bool led1BtnChecked = ui->led1StyleOn->isChecked() | ui->led1StyleBreath->isChecked();

        if(led1BtnChecked == false)
        {
            ui->led1StyleOn->setChecked(true);

            led1.ledName = LED1;
            led1.ledStyle = LED_SOLID_ON;
            led1.ledOnTime = 0;
            led1.ledOffTime = 0;
            led1.ledBreathTime = 0;
        }
        else
        {
            if(ui->led1StyleOn->isChecked())
            {
                led1.ledName = LED1;
                led1.ledStyle = LED_SOLID_ON;
                led1.ledOnTime = 0;
                led1.ledOffTime = 0;
                led1.ledBreathTime = 0;
            }
        }
    }
    else
    {
        led1.ledName = LED1;
        led1.ledStyle = LED_SOLID_OFF;
        led1.ledOnTime = 0;
        led1.ledOffTime = 0;
        led1.ledBreathTime = 0;
    }

    Led_Send(&led1);

}

void MyLed::on_led1StyleOn_checked(bool checked)
{
    qDebug() << "radiobutton pressed on";
}


void MyLed::on_led1StyleFlash_checked(bool checked)
{

}

void MyLed::on_led1StyleBreath_checked(bool checked)
{

}

void MyLed::on_led1Slider_Changed(int value)
{
    QString text = QString::number(value, 10);
    text += "s";
}

void MyLed::on_led2Btn_checked(bool checked)
{
    if(checked)
    {
        bool led1BtnChecked = ui->led2StyleOn->isChecked() | ui->led2StyleBreath->isChecked();

        if(led1BtnChecked == false)
        {
            ui->led2StyleOn->setChecked(true);

            led2.ledName = LED1;
            led2.ledStyle = LED_SOLID_ON;
            led2.ledOnTime = 0;
            led2.ledOffTime = 0;
            led2.ledBreathTime = 0;
        }
        else
        {
            if(ui->led1StyleOn->isChecked())
            {
                led2.ledName = LED1;
                led2.ledStyle = LED_SOLID_ON;
                led2.ledOnTime = 0;
                led2.ledOffTime = 0;
                led2.ledBreathTime = 0;
            }

        }
    }
    else
    {

    }
}

void MyLed::on_led2StyleOn_checked(bool checked)
{

}

void MyLed::on_led2StyleFlash_checked(bool checked)
{

}

void MyLed::on_led2StyleBreath_checked(bool checked)
{

}

void MyLed::on_led2Slider_Changed(int value)
{
    QString text = QString::number(value, 10);
    text += "s";
}

void MyLed::on_led3Btn_checked(bool checked)
{
    if(checked)
    {
        bool led1BtnChecked = ui->led3StyleOn->isChecked() | ui->led3StyleBreath->isChecked();

        if(led1BtnChecked == false)
        {
            ui->led3StyleOn->setChecked(true);

            led3.ledName = LED1;
            led3.ledStyle = LED_SOLID_ON;
            led3.ledOnTime = 0;
            led3.ledOffTime = 0;
            led3.ledBreathTime = 0;
        }
        else
        {
            if(ui->led1StyleOn->isChecked())
            {
                led3.ledName = LED1;
                led3.ledStyle = LED_SOLID_ON;
                led3.ledOnTime = 0;
                led3.ledOffTime = 0;
                led3.ledBreathTime = 0;
            }

        }
    }
    else
    {

    }
}

void MyLed::on_led3StyleOn_checked(bool checked)
{

}

void MyLed::on_led3StyleFlash_checked(bool checked)
{

}

void MyLed::on_led3StyleBreath_checked(bool checked)
{

}

void MyLed::on_led3Slider_Changed(int value)
{
    QString text = QString::number(value, 10);
    text += "s";
}






