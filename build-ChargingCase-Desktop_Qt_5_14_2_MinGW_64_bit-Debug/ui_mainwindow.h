/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget_logo;
    QLabel *labelLogoText;
    QPushButton *pushButton_close;
    QPushButton *pushButton_min;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *labelLogoPic;
    QTabWidget *tabWidget;
    QWidget *tab1;
    QLabel *label_8;
    QComboBox *cbxLedNum;
    QWidget *ledWidget2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_12;
    QComboBox *cbxLed2Mode;
    QLabel *label_13;
    QLineEdit *led2OnTime;
    QLabel *label_20;
    QLabel *label_14;
    QLineEdit *led2OffTime;
    QLabel *label_21;
    QWidget *ledWidget3;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_15;
    QComboBox *cbxLed3Mode;
    QLabel *label_16;
    QLineEdit *led3OnTime;
    QLabel *label_22;
    QLabel *label_17;
    QLineEdit *led3OffTime;
    QLabel *label_23;
    QWidget *ledWidget1;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_34;
    QComboBox *cbxLed1Mode;
    QLabel *label_35;
    QLineEdit *led1OnTime;
    QLabel *label_36;
    QLabel *label_37;
    QLineEdit *led1OffTime;
    QLabel *label_38;
    QWidget *tab2;
    QLabel *label_24;
    QLabel *label_png1;
    QPushButton *btnPng1;
    QPushButton *pushButton_3;
    QLabel *label_png1_2;
    QPushButton *btnPng1_2;
    QPushButton *pushButton_6;
    QLabel *label_png1_3;
    QLabel *label_png1_4;
    QPushButton *btnPng1_3;
    QPushButton *pushButton_7;
    QPushButton *btnPng1_4;
    QPushButton *pushButton_8;
    QLabel *label_png1_5;
    QLabel *label_png1_6;
    QPushButton *btnPng1_5;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *btnPng1_6;
    QWidget *tab3;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit_9;
    QPushButton *pushButton_5;
    QLabel *label_26;
    QLabel *label_27;
    QWidget *tab4;
    QGroupBox *groupBoxSerial;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QComboBox *boxBaudRate;
    QLabel *labelStopBits;
    QComboBox *boxStopBits;
    QLabel *labelPortName;
    QComboBox *boxPortName;
    QLabel *labelDataBits;
    QComboBox *boxParity;
    QComboBox *boxDataBits;
    QLabel *labelParity;
    QLabel *labelBaudRate;
    QLabel *labelFlowControl;
    QComboBox *boxFlowControl;
    QPushButton *btnSerialOpen;
    QPushButton *btnSerialRefresh;
    QLabel *label_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(640, 400);
        MainWindow->setMinimumSize(QSize(640, 400));
        MainWindow->setMaximumSize(QSize(640, 400));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget_logo = new QWidget(centralwidget);
        widget_logo->setObjectName(QString::fromUtf8("widget_logo"));
        widget_logo->setGeometry(QRect(0, 0, 640, 35));
        widget_logo->setMaximumSize(QSize(640, 60));
        labelLogoText = new QLabel(widget_logo);
        labelLogoText->setObjectName(QString::fromUtf8("labelLogoText"));
        labelLogoText->setGeometry(QRect(80, 2, 341, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("MV Boli"));
        font.setPointSize(14);
        labelLogoText->setFont(font);
        pushButton_close = new QPushButton(widget_logo);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setGeometry(QRect(610, 10, 21, 20));
        pushButton_min = new QPushButton(widget_logo);
        pushButton_min->setObjectName(QString::fromUtf8("pushButton_min"));
        pushButton_min->setGeometry(QRect(580, 10, 21, 20));
        label_28 = new QLabel(widget_logo);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(380, 0, 31, 41));
        label_28->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        label_29 = new QLabel(widget_logo);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(410, 10, 41, 21));
        label_29->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        label_30 = new QLabel(widget_logo);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(460, 0, 31, 41));
        label_30->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        label_31 = new QLabel(widget_logo);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(490, 10, 41, 21));
        label_31->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        labelLogoPic = new QLabel(widget_logo);
        labelLogoPic->setObjectName(QString::fromUtf8("labelLogoPic"));
        labelLogoPic->setGeometry(QRect(10, 2, 61, 31));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(170, 50, 460, 321));
        tabWidget->setMaximumSize(QSize(16777215, 16777215));
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        label_8 = new QLabel(tab1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 10, 51, 20));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        cbxLedNum = new QComboBox(tab1);
        cbxLedNum->addItem(QString());
        cbxLedNum->addItem(QString());
        cbxLedNum->addItem(QString());
        cbxLedNum->setObjectName(QString::fromUtf8("cbxLedNum"));
        cbxLedNum->setGeometry(QRect(70, 10, 41, 21));
        cbxLedNum->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        ledWidget2 = new QWidget(tab1);
        ledWidget2->setObjectName(QString::fromUtf8("ledWidget2"));
        ledWidget2->setGeometry(QRect(10, 110, 451, 41));
        horizontalLayoutWidget_2 = new QWidget(ledWidget2);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 0, 451, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(horizontalLayoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);\n"
"font: 8pt \"Microsoft YaHei UI\";"));

        horizontalLayout_2->addWidget(label_12);

        cbxLed2Mode = new QComboBox(horizontalLayoutWidget_2);
        cbxLed2Mode->addItem(QString());
        cbxLed2Mode->addItem(QString());
        cbxLed2Mode->addItem(QString());
        cbxLed2Mode->addItem(QString());
        cbxLed2Mode->setObjectName(QString::fromUtf8("cbxLed2Mode"));
        cbxLed2Mode->setMinimumSize(QSize(60, 0));
        cbxLed2Mode->setMaximumSize(QSize(60, 16777215));
        cbxLed2Mode->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Microsoft YaHei UI\";"));

        horizontalLayout_2->addWidget(cbxLed2Mode);

        label_13 = new QLabel(horizontalLayoutWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);\n"
"font: 8pt \"Microsoft YaHei UI\";"));

        horizontalLayout_2->addWidget(label_13);

        led2OnTime = new QLineEdit(horizontalLayoutWidget_2);
        led2OnTime->setObjectName(QString::fromUtf8("led2OnTime"));
        led2OnTime->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(led2OnTime);

        label_20 = new QLabel(horizontalLayoutWidget_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);\n"
"font: 8pt \"Microsoft YaHei UI\";"));

        horizontalLayout_2->addWidget(label_20);

        label_14 = new QLabel(horizontalLayoutWidget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);\n"
"font: 8pt \"Microsoft YaHei UI\";"));

        horizontalLayout_2->addWidget(label_14);

        led2OffTime = new QLineEdit(horizontalLayoutWidget_2);
        led2OffTime->setObjectName(QString::fromUtf8("led2OffTime"));
        led2OffTime->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(led2OffTime);

        label_21 = new QLabel(horizontalLayoutWidget_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);\n"
"font: 8pt \"Microsoft YaHei UI\";"));

        horizontalLayout_2->addWidget(label_21);

        ledWidget3 = new QWidget(tab1);
        ledWidget3->setObjectName(QString::fromUtf8("ledWidget3"));
        ledWidget3->setGeometry(QRect(10, 180, 451, 41));
        horizontalLayoutWidget_3 = new QWidget(ledWidget3);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(0, 0, 451, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(horizontalLayoutWidget_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);\n"
"font: 8pt \"Microsoft YaHei UI\";"));

        horizontalLayout_3->addWidget(label_15);

        cbxLed3Mode = new QComboBox(horizontalLayoutWidget_3);
        cbxLed3Mode->addItem(QString());
        cbxLed3Mode->addItem(QString());
        cbxLed3Mode->addItem(QString());
        cbxLed3Mode->addItem(QString());
        cbxLed3Mode->setObjectName(QString::fromUtf8("cbxLed3Mode"));
        cbxLed3Mode->setMinimumSize(QSize(60, 0));
        cbxLed3Mode->setMaximumSize(QSize(75, 16777215));
        cbxLed3Mode->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Microsoft YaHei UI\";"));

        horizontalLayout_3->addWidget(cbxLed3Mode);

        label_16 = new QLabel(horizontalLayoutWidget_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);\n"
"font: 8pt \"Microsoft YaHei UI\";"));

        horizontalLayout_3->addWidget(label_16);

        led3OnTime = new QLineEdit(horizontalLayoutWidget_3);
        led3OnTime->setObjectName(QString::fromUtf8("led3OnTime"));
        led3OnTime->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(led3OnTime);

        label_22 = new QLabel(horizontalLayoutWidget_3);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);\n"
"font: 8pt \"Microsoft YaHei UI\";"));

        horizontalLayout_3->addWidget(label_22);

        label_17 = new QLabel(horizontalLayoutWidget_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);\n"
"font: 8pt \"Microsoft YaHei UI\";"));

        horizontalLayout_3->addWidget(label_17);

        led3OffTime = new QLineEdit(horizontalLayoutWidget_3);
        led3OffTime->setObjectName(QString::fromUtf8("led3OffTime"));
        led3OffTime->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(led3OffTime);

        label_23 = new QLabel(horizontalLayoutWidget_3);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);\n"
"font: 8pt \"Microsoft YaHei UI\";"));

        horizontalLayout_3->addWidget(label_23);

        ledWidget1 = new QWidget(tab1);
        ledWidget1->setObjectName(QString::fromUtf8("ledWidget1"));
        ledWidget1->setGeometry(QRect(10, 40, 451, 41));
        horizontalLayoutWidget_4 = new QWidget(ledWidget1);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(0, 0, 451, 41));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_34 = new QLabel(horizontalLayoutWidget_4);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);\n"
"font: 8pt \"Microsoft YaHei UI\";"));

        horizontalLayout_5->addWidget(label_34);

        cbxLed1Mode = new QComboBox(horizontalLayoutWidget_4);
        cbxLed1Mode->addItem(QString());
        cbxLed1Mode->addItem(QString());
        cbxLed1Mode->addItem(QString());
        cbxLed1Mode->addItem(QString());
        cbxLed1Mode->setObjectName(QString::fromUtf8("cbxLed1Mode"));
        cbxLed1Mode->setMinimumSize(QSize(60, 0));
        cbxLed1Mode->setMaximumSize(QSize(75, 16777215));
        cbxLed1Mode->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Microsoft YaHei UI\";"));

        horizontalLayout_5->addWidget(cbxLed1Mode);

        label_35 = new QLabel(horizontalLayoutWidget_4);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);\n"
"font: 8pt \"Microsoft YaHei UI\";"));

        horizontalLayout_5->addWidget(label_35);

        led1OnTime = new QLineEdit(horizontalLayoutWidget_4);
        led1OnTime->setObjectName(QString::fromUtf8("led1OnTime"));
        led1OnTime->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(led1OnTime);

        label_36 = new QLabel(horizontalLayoutWidget_4);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);\n"
"font: 8pt \"Microsoft YaHei UI\";"));

        horizontalLayout_5->addWidget(label_36);

        label_37 = new QLabel(horizontalLayoutWidget_4);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);\n"
"font: 8pt \"Microsoft YaHei UI\";"));

        horizontalLayout_5->addWidget(label_37);

        led1OffTime = new QLineEdit(horizontalLayoutWidget_4);
        led1OffTime->setObjectName(QString::fromUtf8("led1OffTime"));
        led1OffTime->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(led1OffTime);

        label_38 = new QLabel(horizontalLayoutWidget_4);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);\n"
"font: 8pt \"Microsoft YaHei UI\";"));

        horizontalLayout_5->addWidget(label_38);

        tabWidget->addTab(tab1, QString());
        tab2 = new QWidget();
        tab2->setObjectName(QString::fromUtf8("tab2"));
        label_24 = new QLabel(tab2);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(10, 5, 101, 16));
        label_24->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        label_24->setAlignment(Qt::AlignCenter);
        label_png1 = new QLabel(tab2);
        label_png1->setObjectName(QString::fromUtf8("label_png1"));
        label_png1->setGeometry(QRect(10, 30, 121, 91));
        label_png1->setStyleSheet(QString::fromUtf8("border-image: url(:/images/add_pic.png);"));
        btnPng1 = new QPushButton(tab2);
        btnPng1->setObjectName(QString::fromUtf8("btnPng1"));
        btnPng1->setGeometry(QRect(10, 125, 41, 24));
        btnPng1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        pushButton_3 = new QPushButton(tab2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(90, 125, 41, 24));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        label_png1_2 = new QLabel(tab2);
        label_png1_2->setObjectName(QString::fromUtf8("label_png1_2"));
        label_png1_2->setGeometry(QRect(10, 160, 121, 91));
        label_png1_2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/add_pic.png);"));
        btnPng1_2 = new QPushButton(tab2);
        btnPng1_2->setObjectName(QString::fromUtf8("btnPng1_2"));
        btnPng1_2->setGeometry(QRect(10, 255, 41, 24));
        btnPng1_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        pushButton_6 = new QPushButton(tab2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(90, 255, 41, 24));
        pushButton_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        label_png1_3 = new QLabel(tab2);
        label_png1_3->setObjectName(QString::fromUtf8("label_png1_3"));
        label_png1_3->setGeometry(QRect(170, 30, 121, 91));
        label_png1_3->setStyleSheet(QString::fromUtf8("border-image: url(:/images/add_pic.png);"));
        label_png1_4 = new QLabel(tab2);
        label_png1_4->setObjectName(QString::fromUtf8("label_png1_4"));
        label_png1_4->setGeometry(QRect(330, 30, 121, 91));
        label_png1_4->setStyleSheet(QString::fromUtf8("border-image: url(:/images/add_pic.png);"));
        btnPng1_3 = new QPushButton(tab2);
        btnPng1_3->setObjectName(QString::fromUtf8("btnPng1_3"));
        btnPng1_3->setGeometry(QRect(180, 125, 41, 24));
        btnPng1_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        pushButton_7 = new QPushButton(tab2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(250, 125, 41, 24));
        pushButton_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        btnPng1_4 = new QPushButton(tab2);
        btnPng1_4->setObjectName(QString::fromUtf8("btnPng1_4"));
        btnPng1_4->setGeometry(QRect(330, 125, 41, 24));
        btnPng1_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        pushButton_8 = new QPushButton(tab2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(410, 125, 41, 24));
        pushButton_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        label_png1_5 = new QLabel(tab2);
        label_png1_5->setObjectName(QString::fromUtf8("label_png1_5"));
        label_png1_5->setGeometry(QRect(170, 160, 121, 91));
        label_png1_5->setStyleSheet(QString::fromUtf8("border-image: url(:/images/add_pic.png);"));
        label_png1_6 = new QLabel(tab2);
        label_png1_6->setObjectName(QString::fromUtf8("label_png1_6"));
        label_png1_6->setGeometry(QRect(330, 160, 121, 91));
        label_png1_6->setStyleSheet(QString::fromUtf8("border-image: url(:/images/add_pic.png);"));
        btnPng1_5 = new QPushButton(tab2);
        btnPng1_5->setObjectName(QString::fromUtf8("btnPng1_5"));
        btnPng1_5->setGeometry(QRect(170, 255, 41, 24));
        btnPng1_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        pushButton_9 = new QPushButton(tab2);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(250, 255, 41, 24));
        pushButton_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        pushButton_10 = new QPushButton(tab2);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(410, 255, 41, 24));
        pushButton_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        btnPng1_6 = new QPushButton(tab2);
        btnPng1_6->setObjectName(QString::fromUtf8("btnPng1_6"));
        btnPng1_6->setGeometry(QRect(330, 255, 41, 24));
        btnPng1_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        tabWidget->addTab(tab2, QString());
        tab3 = new QWidget();
        tab3->setObjectName(QString::fromUtf8("tab3"));
        pushButton_4 = new QPushButton(tab3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(19, 30, 71, 31));
        pushButton_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        lineEdit_9 = new QLineEdit(tab3);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(100, 29, 231, 31));
        pushButton_5 = new QPushButton(tab3);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(20, 189, 71, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        label_26 = new QLabel(tab3);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(330, 90, 101, 16));
        label_26->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);\n"
"font: 10pt \"Microsoft YaHei UI\";"));
        label_27 = new QLabel(tab3);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(330, 120, 54, 12));
        tabWidget->addTab(tab3, QString());
        tab4 = new QWidget();
        tab4->setObjectName(QString::fromUtf8("tab4"));
        tabWidget->addTab(tab4, QString());
        groupBoxSerial = new QGroupBox(centralwidget);
        groupBoxSerial->setObjectName(QString::fromUtf8("groupBoxSerial"));
        groupBoxSerial->setGeometry(QRect(9, 80, 151, 291));
        groupBoxSerial->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        groupBoxSerial->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBoxSerial->setFlat(false);
        groupBoxSerial->setCheckable(false);
        gridLayoutWidget = new QWidget(groupBoxSerial);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 133, 171));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        boxBaudRate = new QComboBox(gridLayoutWidget);
        boxBaudRate->addItem(QString());
        boxBaudRate->addItem(QString());
        boxBaudRate->addItem(QString());
        boxBaudRate->addItem(QString());
        boxBaudRate->addItem(QString());
        boxBaudRate->addItem(QString());
        boxBaudRate->addItem(QString());
        boxBaudRate->addItem(QString());
        boxBaudRate->addItem(QString());
        boxBaudRate->addItem(QString());
        boxBaudRate->setObjectName(QString::fromUtf8("boxBaudRate"));
        boxBaudRate->setMaximumSize(QSize(75, 16777215));
        boxBaudRate->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(boxBaudRate, 1, 1, 1, 1);

        labelStopBits = new QLabel(gridLayoutWidget);
        labelStopBits->setObjectName(QString::fromUtf8("labelStopBits"));
        labelStopBits->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        labelStopBits->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelStopBits, 4, 0, 1, 1);

        boxStopBits = new QComboBox(gridLayoutWidget);
        boxStopBits->addItem(QString());
        boxStopBits->addItem(QString());
        boxStopBits->addItem(QString());
        boxStopBits->setObjectName(QString::fromUtf8("boxStopBits"));
        boxStopBits->setMaximumSize(QSize(75, 16777215));
        boxStopBits->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(boxStopBits, 4, 1, 1, 1);

        labelPortName = new QLabel(gridLayoutWidget);
        labelPortName->setObjectName(QString::fromUtf8("labelPortName"));
        labelPortName->setMinimumSize(QSize(50, 0));
        labelPortName->setMaximumSize(QSize(50, 16777215));
        labelPortName->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        labelPortName->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelPortName, 0, 0, 1, 1);

        boxPortName = new QComboBox(gridLayoutWidget);
        boxPortName->setObjectName(QString::fromUtf8("boxPortName"));
        boxPortName->setMaximumSize(QSize(75, 16777215));
        boxPortName->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(boxPortName, 0, 1, 1, 1);

        labelDataBits = new QLabel(gridLayoutWidget);
        labelDataBits->setObjectName(QString::fromUtf8("labelDataBits"));
        labelDataBits->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        labelDataBits->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelDataBits, 2, 0, 1, 1);

        boxParity = new QComboBox(gridLayoutWidget);
        boxParity->addItem(QString());
        boxParity->addItem(QString());
        boxParity->addItem(QString());
        boxParity->addItem(QString());
        boxParity->addItem(QString());
        boxParity->setObjectName(QString::fromUtf8("boxParity"));
        boxParity->setMaximumSize(QSize(75, 16777215));
        boxParity->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(boxParity, 2, 1, 1, 1);

        boxDataBits = new QComboBox(gridLayoutWidget);
        boxDataBits->addItem(QString());
        boxDataBits->addItem(QString());
        boxDataBits->addItem(QString());
        boxDataBits->addItem(QString());
        boxDataBits->setObjectName(QString::fromUtf8("boxDataBits"));
        boxDataBits->setMaximumSize(QSize(75, 16777215));
        boxDataBits->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(boxDataBits, 3, 1, 1, 1);

        labelParity = new QLabel(gridLayoutWidget);
        labelParity->setObjectName(QString::fromUtf8("labelParity"));
        labelParity->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        labelParity->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelParity, 3, 0, 1, 1);

        labelBaudRate = new QLabel(gridLayoutWidget);
        labelBaudRate->setObjectName(QString::fromUtf8("labelBaudRate"));
        labelBaudRate->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        labelBaudRate->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelBaudRate, 1, 0, 1, 1);

        labelFlowControl = new QLabel(gridLayoutWidget);
        labelFlowControl->setObjectName(QString::fromUtf8("labelFlowControl"));
        labelFlowControl->setMinimumSize(QSize(0, 22));
        labelFlowControl->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        labelFlowControl->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelFlowControl, 5, 0, 1, 1);

        boxFlowControl = new QComboBox(gridLayoutWidget);
        boxFlowControl->addItem(QString());
        boxFlowControl->addItem(QString());
        boxFlowControl->addItem(QString());
        boxFlowControl->setObjectName(QString::fromUtf8("boxFlowControl"));
        boxFlowControl->setMaximumSize(QSize(75, 16777215));
        boxFlowControl->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(boxFlowControl, 5, 1, 1, 1);

        btnSerialOpen = new QPushButton(groupBoxSerial);
        btnSerialOpen->setObjectName(QString::fromUtf8("btnSerialOpen"));
        btnSerialOpen->setGeometry(QRect(70, 200, 58, 30));
        btnSerialOpen->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        btnSerialRefresh = new QPushButton(groupBoxSerial);
        btnSerialRefresh->setObjectName(QString::fromUtf8("btnSerialRefresh"));
        btnSerialRefresh->setGeometry(QRect(10, 200, 58, 30));
        btnSerialRefresh->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 50, 111, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft JhengHei UI"));
        font1.setPointSize(12);
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_7->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 640, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setToolTipDuration(1);
        statusbar->setSizeGripEnabled(false);
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);
        cbxLed2Mode->setCurrentIndex(2);
        cbxLed3Mode->setCurrentIndex(2);
        cbxLed1Mode->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelLogoText->setText(QCoreApplication::translate("MainWindow", "TWS Charging Case", nullptr));
        pushButton_close->setText(QString());
        pushButton_min->setText(QString());
        label_28->setText(QCoreApplication::translate("MainWindow", "\346\270\251\345\272\246:", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "\347\224\265\351\207\217:", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        labelLogoPic->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "LED\346\225\260\351\207\217", nullptr));
        cbxLedNum->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        cbxLedNum->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));
        cbxLedNum->setItemText(2, QCoreApplication::translate("MainWindow", "3", nullptr));

        cbxLedNum->setCurrentText(QCoreApplication::translate("MainWindow", "3", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "LED2:", nullptr));
        cbxLed2Mode->setItemText(0, QCoreApplication::translate("MainWindow", "\345\270\270\347\201\255", nullptr));
        cbxLed2Mode->setItemText(1, QCoreApplication::translate("MainWindow", "\345\270\270\344\272\256", nullptr));
        cbxLed2Mode->setItemText(2, QCoreApplication::translate("MainWindow", "\351\227\252\347\203\201", nullptr));
        cbxLed2Mode->setItemText(3, QCoreApplication::translate("MainWindow", "\345\221\274\345\220\270", nullptr));

        label_13->setText(QCoreApplication::translate("MainWindow", "\351\227\252\347\203\201\344\272\256\346\227\266\351\227\264:", nullptr));
        led2OnTime->setText(QCoreApplication::translate("MainWindow", "500", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "\346\257\253\347\247\222", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\351\227\252\347\203\201\347\201\255\346\227\266\351\227\264", nullptr));
        led2OffTime->setText(QCoreApplication::translate("MainWindow", "500", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "\346\257\253\347\247\222", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "LED3:", nullptr));
        cbxLed3Mode->setItemText(0, QCoreApplication::translate("MainWindow", "\345\270\270\347\201\255", nullptr));
        cbxLed3Mode->setItemText(1, QCoreApplication::translate("MainWindow", "\345\270\270\344\272\256", nullptr));
        cbxLed3Mode->setItemText(2, QCoreApplication::translate("MainWindow", "\351\227\252\347\203\201", nullptr));
        cbxLed3Mode->setItemText(3, QCoreApplication::translate("MainWindow", "\345\221\274\345\220\270", nullptr));

        label_16->setText(QCoreApplication::translate("MainWindow", "\351\227\252\347\203\201\344\272\256\346\227\266\351\227\264:", nullptr));
        led3OnTime->setText(QCoreApplication::translate("MainWindow", "500", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "\346\257\253\347\247\222", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\351\227\252\347\203\201\347\201\255\346\227\266\351\227\264", nullptr));
        led3OffTime->setText(QCoreApplication::translate("MainWindow", "500", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "\346\257\253\347\247\222", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "LED1:", nullptr));
        cbxLed1Mode->setItemText(0, QCoreApplication::translate("MainWindow", "\345\270\270\347\201\255", nullptr));
        cbxLed1Mode->setItemText(1, QCoreApplication::translate("MainWindow", "\345\270\270\344\272\256", nullptr));
        cbxLed1Mode->setItemText(2, QCoreApplication::translate("MainWindow", "\351\227\252\347\203\201", nullptr));
        cbxLed1Mode->setItemText(3, QCoreApplication::translate("MainWindow", "\345\221\274\345\220\270", nullptr));

        label_35->setText(QCoreApplication::translate("MainWindow", "\351\227\252\347\203\201\344\272\256\346\227\266\351\227\264:", nullptr));
        led1OnTime->setText(QCoreApplication::translate("MainWindow", "500", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "\346\257\253\347\247\222", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "\351\227\252\347\203\201\347\201\255\346\227\266\351\227\264:", nullptr));
        led1OffTime->setText(QCoreApplication::translate("MainWindow", "500", nullptr));
        label_38->setText(QCoreApplication::translate("MainWindow", "\346\257\253\347\247\222", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QCoreApplication::translate("MainWindow", "\351\241\265", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "\345\233\276\347\211\207\345\257\274\345\205\245", nullptr));
        label_png1->setText(QString());
        btnPng1->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\344\270\213\350\275\275", nullptr));
        label_png1_2->setText(QString());
        btnPng1_2->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\344\270\213\350\275\275", nullptr));
        label_png1_3->setText(QString());
        label_png1_4->setText(QString());
        btnPng1_3->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "\344\270\213\350\275\275", nullptr));
        btnPng1_4->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "\344\270\213\350\275\275", nullptr));
        label_png1_5->setText(QString());
        label_png1_6->setText(QString());
        btnPng1_5->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "\344\270\213\350\275\275", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "\344\270\213\350\275\275", nullptr));
        btnPng1_6->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab2), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\345\233\272\344\273\266", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\346\233\264\346\226\260\345\233\272\344\273\266", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\345\233\272\344\273\266\347\211\210\346\234\254\345\217\267\357\274\232", nullptr));
        label_27->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab3), QCoreApplication::translate("MainWindow", "\351\241\265", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab4), QCoreApplication::translate("MainWindow", "\351\241\265", nullptr));
        groupBoxSerial->setTitle(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\350\256\276\347\275\256", nullptr));
        boxBaudRate->setItemText(0, QCoreApplication::translate("MainWindow", "1200", nullptr));
        boxBaudRate->setItemText(1, QCoreApplication::translate("MainWindow", "2400", nullptr));
        boxBaudRate->setItemText(2, QCoreApplication::translate("MainWindow", "4800", nullptr));
        boxBaudRate->setItemText(3, QCoreApplication::translate("MainWindow", "9600", nullptr));
        boxBaudRate->setItemText(4, QCoreApplication::translate("MainWindow", "19200", nullptr));
        boxBaudRate->setItemText(5, QCoreApplication::translate("MainWindow", "38400", nullptr));
        boxBaudRate->setItemText(6, QCoreApplication::translate("MainWindow", "57600", nullptr));
        boxBaudRate->setItemText(7, QCoreApplication::translate("MainWindow", "115200", nullptr));
        boxBaudRate->setItemText(8, QCoreApplication::translate("MainWindow", "128000", nullptr));
        boxBaudRate->setItemText(9, QCoreApplication::translate("MainWindow", "230400", nullptr));

        boxBaudRate->setCurrentText(QCoreApplication::translate("MainWindow", "115200", nullptr));
        labelStopBits->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215", nullptr));
        boxStopBits->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        boxStopBits->setItemText(1, QCoreApplication::translate("MainWindow", "1.5", nullptr));
        boxStopBits->setItemText(2, QCoreApplication::translate("MainWindow", "2", nullptr));

        labelPortName->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\345\217\267", nullptr));
        boxPortName->setCurrentText(QString());
        labelDataBits->setText(QCoreApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215", nullptr));
        boxParity->setItemText(0, QCoreApplication::translate("MainWindow", "NONE", nullptr));
        boxParity->setItemText(1, QCoreApplication::translate("MainWindow", "Even\345\201\266", nullptr));
        boxParity->setItemText(2, QCoreApplication::translate("MainWindow", "Odd\345\245\207", nullptr));
        boxParity->setItemText(3, QCoreApplication::translate("MainWindow", "Space", nullptr));
        boxParity->setItemText(4, QCoreApplication::translate("MainWindow", "Mark", nullptr));

        boxDataBits->setItemText(0, QCoreApplication::translate("MainWindow", "5", nullptr));
        boxDataBits->setItemText(1, QCoreApplication::translate("MainWindow", "6", nullptr));
        boxDataBits->setItemText(2, QCoreApplication::translate("MainWindow", "7", nullptr));
        boxDataBits->setItemText(3, QCoreApplication::translate("MainWindow", "8", nullptr));

        boxDataBits->setCurrentText(QCoreApplication::translate("MainWindow", "8", nullptr));
        labelParity->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215", nullptr));
        labelBaudRate->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", nullptr));
        labelFlowControl->setText(QCoreApplication::translate("MainWindow", "\346\265\201\346\216\247\345\210\266", nullptr));
        boxFlowControl->setItemText(0, QCoreApplication::translate("MainWindow", "No", nullptr));
        boxFlowControl->setItemText(1, QCoreApplication::translate("MainWindow", "Hardware", nullptr));
        boxFlowControl->setItemText(2, QCoreApplication::translate("MainWindow", "Software", nullptr));

        btnSerialOpen->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        btnSerialRefresh->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\351\200\232\344\277\241\350\256\276\345\244\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H