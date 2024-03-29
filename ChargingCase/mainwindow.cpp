#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "myserialport.h"

MySerialPort *mySerialPort;
MyLed *myLed;
MyBtn *myBtn;
MyPic *myPic;
MyUpgrade *myUpgrade;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    setWindowFlag(Qt::FramelessWindowHint);

    setFixedSize(this->width(),this->height());

    ui->setupUi(this);

    setTabWidget();

    mySerialPort = new MySerialPort(this);
    myLed = new MyLed(this);
    myPic = new MyPic(this);
    myUpgrade = new MyUpgrade(this);

    myPic->Pic_Init(ui, mySerialPort);
    myLed->Led_Init(ui, mySerialPort);
    myUpgrade->Upgrade_Init(ui, mySerialPort);

    mySerialPort->Serial_Port_Init(ui);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setTabWidget()
{
    ui->tabWidget->setTabText(0, tr("灯光设置"));
    ui->tabWidget->setTabText(1, tr("图片设置"));
    ui->tabWidget->setTabText(2, tr("固件升级"));
}

void MainWindow::paintEvent(QPaintEvent *event)
{

}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    //获取title widget 的高度，这里固定为60px
    int titleHeight = ui->widget_logo->height();
    if(event->y() <titleHeight)
    {
        last = event->globalPos(); //获取到按压的位置
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    int titleHeight = ui->widget_logo->height();
    if(event->y() <titleHeight)
    {
        int dx = event->globalX() - last.x();
        int dy = event->globalY() - last.y();
        last = event->globalPos();
        this->move(this->x()+dx,this->y()+dy);
    }
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    int titleHeight = ui->widget_logo->height();
    if(event->y() <titleHeight)
    {
        int dx = event->globalX() - last.x();
        int dy = event->globalY() - last.y();
        this->move(this->x()+dx,this->y()+dy);
    }
}




void MainWindow::on_btnSerialOpen_clicked()
{
    if(ui->btnSerialOpen->text()=="打开")
    {
        mySerialPort->Serial_Port_Open(ui);
    }
    else
    {
        mySerialPort->Serial_Port_Close(ui);
    }
}

void MainWindow::on_btnSerialRefresh_clicked()
{
    mySerialPort->Serial_Port_Refresh(ui);
}





