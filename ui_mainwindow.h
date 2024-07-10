/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_password;
    QPushButton *button_EnterToProg;
    QPushButton *button_Registration;
    QWidget *page_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_regName;
    QLineEdit *lineEdit_regPass;
    QLineEdit *lineEdit_regConfirmPass;
    QLabel *label_7;
    QPushButton *pushButton_CreateNewAcc;
    QPushButton *pushButton_backFromNewAcc;
    QLabel *label_creationResult;
    QLabel *label_differentPasswords;
    QWidget *page_3;
    QLabel *label_GreetingsOnMain;
    QPushButton *pushButton_newAppointment_onMain;
    QPushButton *pushButton_allAppointments_onMain;
    QPushButton *pushButton_allPatients_onMain;
    QWidget *page_4;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEdit_userID_onNewAppoinmet;
    QLabel *label_10;
    QLabel *label_11;
    QComboBox *comboBox_chooseDoctor_onNewAppoinmet;
    QComboBox *comboBox_chooseTime_onNewAppoinmet;
    QPushButton *pushButton_backFromNewAppointment;
    QPushButton *pushButton_createAppointment;
    QLabel *label_15;
    QLineEdit *lineEdit_findIDFilter_onNewAppointment;
    QPushButton *pushButton_findIDByFilter_onNewAppointment;
    QTableView *tableView_onNewAppointment;
    QCalendarWidget *calendarWidget;
    QLabel *label_16;
    QLabel *label_chooseDate_onNewAppointment;
    QWidget *page_5;
    QLabel *label_12;
    QTableView *tableView_listOfPatients;
    QPushButton *pushButton_addNewPatient_onListOfPatients;
    QPushButton *pushButton_deletePatient_onListOfPatients;
    QLabel *label_13;
    QLineEdit *lineEdit_addName_onListOfPatients;
    QPushButton *pushButton_backFromAllPatients;
    QLabel *label_14;
    QLineEdit *lineEdit_filterName_onPatientsList;
    QPushButton *pushButton_findByFilter_onPatientsList;
    QPushButton *pushButton_clearFilter_onPatientsList;
    QPushButton *pushButton_toMedicalHistory_onListOfPatients;
    QWidget *page_6;
    QTableView *tableView_allAppointments;
    QPushButton *pushButton_deleteAppointment_onAllAppointments;
    QPushButton *pushButton_backFromAllAppointments;
    QLineEdit *lineEdit_filterByID_onAllAppointments;
    QLabel *label_18;
    QPushButton *pushButton_findByID_onAllAppointments;
    QPushButton *pushButton_clearFilter_onAllAppointments;
    QLabel *label_22;
    QWidget *page_7;
    QLabel *label_17;
    QLabel *label_19;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton_fromMedicalHistoryBack;
    QPushButton *pushButton_saveMedicalHistory_onMedicalHistory;
    QLabel *label_20;
    QLineEdit *lineEdit_diagnosisName_onMedicalHistory;
    QLabel *label_21;
    QLabel *label_patientName_onMedicalHistory;
    QLabel *label_patientID_onMedicalHistory;
    QWidget *page_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(905, 638);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 0, 891, 601));
        stackedWidget->setStyleSheet(QString::fromUtf8("font: 2000 10pt \"Rockwell Extra Bold\";\n"
"\n"
""));
        page = new QWidget();
        page->setObjectName("page");
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(350, 90, 481, 71));
        label->setStyleSheet(QString::fromUtf8("font: 2000 20pt \"Rockwell Extra Bold\";\n"
"font-color:white;"));
        label_2 = new QLabel(page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 210, 131, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 2000 15pt \"Rockwell Extra Bold\";"));
        label_3 = new QLabel(page);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 292, 131, 61));
        label_3->setStyleSheet(QString::fromUtf8("font: 2000 15pt \"Rockwell Extra Bold\";"));
        lineEdit_name = new QLineEdit(page);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setGeometry(QRect(250, 210, 451, 51));
        lineEdit_name->setStyleSheet(QString::fromUtf8("\n"
"QLineEdit{\n"
"	font: 2000 5pt \"Arial Black\";\n"
"	border: 3px solid rgb(170, 170, 255);\n"
"\n"
"	font-size: 20px;	\n"
"	border-radius: 10px;	\n"
"	color:black;\n"
"}\n"
"\n"
""));
        lineEdit_password = new QLineEdit(page);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(250, 300, 451, 51));
        lineEdit_password->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	font: 2000 5pt \"Arial Black\";\n"
"	border: 3px solid rgb(170, 170, 255);\n"
"\n"
"	font-size: 20px;	\n"
"	border-radius: 10px;	\n"
"	color:black;\n"
"}"));
        button_EnterToProg = new QPushButton(page);
        button_EnterToProg->setObjectName("button_EnterToProg");
        button_EnterToProg->setGeometry(QRect(350, 420, 211, 41));
        button_EnterToProg->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"	font: 2000 15pt \"Rockwell Extra Bold\";\n"
"	border: 2px solid black;\n"
"	background-color:rgb(170, 170, 255);\n"
"	font-size: 20px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}\n"
""));
        button_Registration = new QPushButton(page);
        button_Registration->setObjectName("button_Registration");
        button_Registration->setGeometry(QRect(300, 490, 311, 51));
        button_Registration->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"	font: 2000 15pt \"Rockwell Extra Bold\";\n"
"	border: 2px solid black;\n"
"	background-color:rgb(170, 170, 255);\n"
"	font-size: 25px;	\n"
"	border-radius: 25px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label_4 = new QLabel(page_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 0, 511, 51));
        label_4->setStyleSheet(QString::fromUtf8("font: 2000 20pt \"Rockwell Extra Bold\";"));
        label_5 = new QLabel(page_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(110, 125, 281, 51));
        label_5->setStyleSheet(QString::fromUtf8("font: 2000 15pt \"Rockwell Extra Bold\";"));
        label_6 = new QLabel(page_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(110, 200, 281, 51));
        label_6->setStyleSheet(QString::fromUtf8("font: 2000 15pt \"Rockwell Extra Bold\";"));
        lineEdit_regName = new QLineEdit(page_2);
        lineEdit_regName->setObjectName("lineEdit_regName");
        lineEdit_regName->setGeometry(QRect(430, 130, 271, 41));
        lineEdit_regName->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QLineEdit{\n"
"	font: 2000 5pt \"Arial Black\";\n"
"	border: 3px solid rgb(170, 170, 255);\n"
"\n"
"	font-size: 20px;	\n"
"	border-radius: 10px;	\n"
"	color:black;\n"
"}"));
        lineEdit_regPass = new QLineEdit(page_2);
        lineEdit_regPass->setObjectName("lineEdit_regPass");
        lineEdit_regPass->setGeometry(QRect(430, 210, 271, 41));
        lineEdit_regPass->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	font: 2000 5pt \"Arial Black\";\n"
"	border: 3px solid rgb(170, 170, 255);\n"
"\n"
"	font-size: 20px;	\n"
"	border-radius: 10px;	\n"
"	color:black;\n"
"}"));
        lineEdit_regConfirmPass = new QLineEdit(page_2);
        lineEdit_regConfirmPass->setObjectName("lineEdit_regConfirmPass");
        lineEdit_regConfirmPass->setGeometry(QRect(430, 290, 271, 41));
        lineEdit_regConfirmPass->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	font: 2000 5pt \"Arial Black\";\n"
"	border: 3px solid rgb(170, 170, 255);\n"
"\n"
"	font-size: 20px;	\n"
"	border-radius: 10px;	\n"
"	color:black;\n"
"}"));
        label_7 = new QLabel(page_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(110, 290, 321, 31));
        label_7->setStyleSheet(QString::fromUtf8("font: 2000 15pt \"Rockwell Extra Bold\";"));
        pushButton_CreateNewAcc = new QPushButton(page_2);
        pushButton_CreateNewAcc->setObjectName("pushButton_CreateNewAcc");
        pushButton_CreateNewAcc->setGeometry(QRect(290, 390, 321, 71));
        pushButton_CreateNewAcc->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"	font: 2000 15pt \"Rockwell Extra Bold\";\n"
"	border: 2px solid black;\n"
"	background-color:rgb(170, 170, 255);\n"
"	font-size: 27px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}"));
        pushButton_backFromNewAcc = new QPushButton(page_2);
        pushButton_backFromNewAcc->setObjectName("pushButton_backFromNewAcc");
        pushButton_backFromNewAcc->setGeometry(QRect(720, 510, 141, 41));
        pushButton_backFromNewAcc->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"	font: 2000 15pt \"Rockwell Extra Bold\";\n"
"	border: 2px solid black;\n"
"	background-color:rgb(170, 170, 255);\n"
"	font-size: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}"));
        label_creationResult = new QLabel(page_2);
        label_creationResult->setObjectName("label_creationResult");
        label_creationResult->setGeometry(QRect(10, 510, 701, 24));
        label_differentPasswords = new QLabel(page_2);
        label_differentPasswords->setObjectName("label_differentPasswords");
        label_differentPasswords->setGeometry(QRect(10, 560, 591, 24));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_GreetingsOnMain = new QLabel(page_3);
        label_GreetingsOnMain->setObjectName("label_GreetingsOnMain");
        label_GreetingsOnMain->setGeometry(QRect(0, -10, 461, 61));
        label_GreetingsOnMain->setStyleSheet(QString::fromUtf8("font: 2000 20pt \"Rockwell Extra Bold\";"));
        pushButton_newAppointment_onMain = new QPushButton(page_3);
        pushButton_newAppointment_onMain->setObjectName("pushButton_newAppointment_onMain");
        pushButton_newAppointment_onMain->setGeometry(QRect(230, 220, 431, 61));
        pushButton_newAppointment_onMain->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"	font: 2000 15pt \"Rockwell Extra Bold\";\n"
"	border: 2px solid black;\n"
"	background-color:rgb(170, 170, 255);\n"
"	font-size: 27px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}font: 2000 15pt \"Rockwell Extra Bold\";"));
        pushButton_allAppointments_onMain = new QPushButton(page_3);
        pushButton_allAppointments_onMain->setObjectName("pushButton_allAppointments_onMain");
        pushButton_allAppointments_onMain->setGeometry(QRect(230, 300, 431, 61));
        pushButton_allAppointments_onMain->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"	font: 2000 15pt \"Rockwell Extra Bold\";\n"
"	border: 2px solid black;\n"
"	background-color:rgb(170, 170, 255);\n"
"	font-size: 27px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}"));
        pushButton_allPatients_onMain = new QPushButton(page_3);
        pushButton_allPatients_onMain->setObjectName("pushButton_allPatients_onMain");
        pushButton_allPatients_onMain->setGeometry(QRect(230, 380, 431, 61));
        pushButton_allPatients_onMain->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"	font: 2000 15pt \"Rockwell Extra Bold\";\n"
"	border: 2px solid black;\n"
"	background-color:rgb(170, 170, 255);\n"
"	font-size: 27px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        label_8 = new QLabel(page_4);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(0, -20, 371, 81));
        label_8->setStyleSheet(QString::fromUtf8("font: 2000 20pt \"Rockwell Extra Bold\";"));
        label_9 = new QLabel(page_4);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 60, 191, 24));
        label_9->setStyleSheet(QString::fromUtf8("font: 2000 10pt \"Rockwell Extra Bold\";"));
        lineEdit_userID_onNewAppoinmet = new QLineEdit(page_4);
        lineEdit_userID_onNewAppoinmet->setObjectName("lineEdit_userID_onNewAppoinmet");
        lineEdit_userID_onNewAppoinmet->setGeometry(QRect(290, 58, 161, 31));
        lineEdit_userID_onNewAppoinmet->setStyleSheet(QString::fromUtf8("\n"
"QLineEdit{\n"
"	font: 2000 5pt \"Arial Black\";\n"
"	border: 3px solid rgb(170, 170, 255);\n"
"\n"
"	font-size: 15px;	\n"
"	border-radius: 10px;	\n"
"	color:black;\n"
"}"));
        label_10 = new QLabel(page_4);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 110, 271, 24));
        label_10->setStyleSheet(QString::fromUtf8("font: 2000 10pt \"Rockwell Extra Bold\";"));
        label_11 = new QLabel(page_4);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 160, 201, 24));
        label_11->setStyleSheet(QString::fromUtf8("font: 2000 10pt \"Rockwell Extra Bold\";"));
        comboBox_chooseDoctor_onNewAppoinmet = new QComboBox(page_4);
        comboBox_chooseDoctor_onNewAppoinmet->addItem(QString());
        comboBox_chooseDoctor_onNewAppoinmet->addItem(QString());
        comboBox_chooseDoctor_onNewAppoinmet->addItem(QString());
        comboBox_chooseDoctor_onNewAppoinmet->addItem(QString());
        comboBox_chooseDoctor_onNewAppoinmet->addItem(QString());
        comboBox_chooseDoctor_onNewAppoinmet->addItem(QString());
        comboBox_chooseDoctor_onNewAppoinmet->addItem(QString());
        comboBox_chooseDoctor_onNewAppoinmet->addItem(QString());
        comboBox_chooseDoctor_onNewAppoinmet->addItem(QString());
        comboBox_chooseDoctor_onNewAppoinmet->addItem(QString());
        comboBox_chooseDoctor_onNewAppoinmet->setObjectName("comboBox_chooseDoctor_onNewAppoinmet");
        comboBox_chooseDoctor_onNewAppoinmet->setGeometry(QRect(290, 108, 161, 31));
        comboBox_chooseDoctor_onNewAppoinmet->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"	font: 2000 15pt \"Rockwell Extra Bold\";\n"
"	border: 2px solid black;\n"
"\n"
"	font-size: 15px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
""));
        comboBox_chooseTime_onNewAppoinmet = new QComboBox(page_4);
        comboBox_chooseTime_onNewAppoinmet->addItem(QString());
        comboBox_chooseTime_onNewAppoinmet->addItem(QString());
        comboBox_chooseTime_onNewAppoinmet->addItem(QString());
        comboBox_chooseTime_onNewAppoinmet->addItem(QString());
        comboBox_chooseTime_onNewAppoinmet->addItem(QString());
        comboBox_chooseTime_onNewAppoinmet->addItem(QString());
        comboBox_chooseTime_onNewAppoinmet->addItem(QString());
        comboBox_chooseTime_onNewAppoinmet->addItem(QString());
        comboBox_chooseTime_onNewAppoinmet->addItem(QString());
        comboBox_chooseTime_onNewAppoinmet->addItem(QString());
        comboBox_chooseTime_onNewAppoinmet->addItem(QString());
        comboBox_chooseTime_onNewAppoinmet->addItem(QString());
        comboBox_chooseTime_onNewAppoinmet->addItem(QString());
        comboBox_chooseTime_onNewAppoinmet->addItem(QString());
        comboBox_chooseTime_onNewAppoinmet->addItem(QString());
        comboBox_chooseTime_onNewAppoinmet->addItem(QString());
        comboBox_chooseTime_onNewAppoinmet->addItem(QString());
        comboBox_chooseTime_onNewAppoinmet->addItem(QString());
        comboBox_chooseTime_onNewAppoinmet->addItem(QString());
        comboBox_chooseTime_onNewAppoinmet->addItem(QString());
        comboBox_chooseTime_onNewAppoinmet->addItem(QString());
        comboBox_chooseTime_onNewAppoinmet->setObjectName("comboBox_chooseTime_onNewAppoinmet");
        comboBox_chooseTime_onNewAppoinmet->setGeometry(QRect(290, 160, 161, 29));
        comboBox_chooseTime_onNewAppoinmet->setStyleSheet(QString::fromUtf8("\n"
"QComboBox{\n"
"	font: 600 9pt \"Segoe UI Variable Small Semibol\";\n"
"	border: 2px solid black;\n"
"\n"
"	font-size: 20px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
""));
        pushButton_backFromNewAppointment = new QPushButton(page_4);
        pushButton_backFromNewAppointment->setObjectName("pushButton_backFromNewAppointment");
        pushButton_backFromNewAppointment->setGeometry(QRect(780, 550, 111, 34));
        pushButton_backFromNewAppointment->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"	font: 2000 15pt \"Rockwell Extra Bold\";\n"
"	border: 2px solid black;\n"
"	background-color:rgb(170, 170, 255);\n"
"	font-size: 20px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}font: 2000 15pt \"Rockwell Extra Bold\";font: 2000 10pt \"Arial Black\";font: 2000 10pt \"Arial Black\";"));
        pushButton_createAppointment = new QPushButton(page_4);
        pushButton_createAppointment->setObjectName("pushButton_createAppointment");
        pushButton_createAppointment->setGeometry(QRect(330, 540, 221, 41));
        pushButton_createAppointment->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"	font: 2000 15pt \"Rockwell Extra Bold\";\n"
"	border: 2px solid black;\n"
"	background-color:rgb(170, 170, 255);\n"
"	font-size: 20px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}font: 2000 15pt \"Rockwell Extra Bold\";font: 2000 10pt \"Arial Black\";font: 2000 10pt \"Arial Black\";"));
        label_15 = new QLabel(page_4);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(470, 50, 251, 41));
        label_15->setStyleSheet(QString::fromUtf8("font: 2000 10pt \"Rockwell Extra Bold\";"));
        lineEdit_findIDFilter_onNewAppointment = new QLineEdit(page_4);
        lineEdit_findIDFilter_onNewAppointment->setObjectName("lineEdit_findIDFilter_onNewAppointment");
        lineEdit_findIDFilter_onNewAppointment->setGeometry(QRect(730, 58, 141, 31));
        lineEdit_findIDFilter_onNewAppointment->setStyleSheet(QString::fromUtf8("\n"
"QLineEdit{\n"
"	font: 1000 3pt \"Arial Black\";\n"
"	border: 3px solid rgb(170, 170, 255);\n"
"	font-size: 17px;\n"
"	\n"
"	border-radius: 10px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}"));
        pushButton_findIDByFilter_onNewAppointment = new QPushButton(page_4);
        pushButton_findIDByFilter_onNewAppointment->setObjectName("pushButton_findIDByFilter_onNewAppointment");
        pushButton_findIDByFilter_onNewAppointment->setGeometry(QRect(610, 110, 141, 41));
        pushButton_findIDByFilter_onNewAppointment->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"	font: 2000 15pt \"Rockwell Extra Bold\";\n"
"	border: 2px solid black;\n"
"	background-color:rgb(170, 170, 255);\n"
"	font-size: 20px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}font: 2000 15pt \"Rockwell Extra Bold\";font: 2000 10pt \"Arial Black\";"));
        tableView_onNewAppointment = new QTableView(page_4);
        tableView_onNewAppointment->setObjectName("tableView_onNewAppointment");
        tableView_onNewAppointment->setGeometry(QRect(470, 260, 411, 161));
        tableView_onNewAppointment->setStyleSheet(QString::fromUtf8("QTableView{\n"
"	font: 2000 15pt \"Rockwell Extra Bold\";\n"
"	border: 2px solid black;\n"
"	font-size: 15px;	\n"
"	color:black;\n"
"}\n"
""));
        calendarWidget = new QCalendarWidget(page_4);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(10, 260, 448, 271));
        calendarWidget->setStyleSheet(QString::fromUtf8("#qt_calendar_calendarview {\n"
"background: rgb(255, 255, 255);\n"
"font: 9pt \"Tahoma\";\n"
"font-size:17px;\n"
"color:rgb(255, 0, 255);\n"
"outline: 0;\n"
"}\n"
"#qt_calendar_navigationbar {\n"
"background: rgb(255, 255, 255);\n"
"font: 900 9pt \"Segoe UI\";\n"
"color:black;\n"
"outline: 0;\n"
"}\n"
"QToolButton {\n"
"	icon-size: 30px, 30px;\n"
"	width: 80px;\n"
"	height: 30px;\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	outline: 0;\n"
"}\n"
"QToolButton#qt_calendar_prevmonth {\n"
"background: rgb(255, 255, 255);\n"
"width: 40px;\n"
"font: 900 9pt \"Segoe UI\";\n"
"outline: 0;\n"
"}\n"
"QToolButton#qt_calendar_nextmonth {\n"
"background: rgb(255, 255, 255);\n"
"width: 40px;\n"
"font: 900 9pt \"Segoe UI\";\n"
"outline: 0;\n"
"}\n"
"QToolButton#qt_calendar_monthbutton {\n"
"background: rgb(255, 255, 255);\n"
"color: black;\n"
"padding-right: 20px;\n"
"font: 900 9pt \"Segoe UI\";\n"
"outline: 0;\n"
"}\n"
"QToolButton#qt_calendar_yearbutton {\n"
"background: rgb(255, 255, 255);\n"
"color: black;\n"
"font: 900 9pt \"Se"
                        "goe UI\";\n"
"outline: 0;\n"
"}\n"
"QToolButton#qt_calendar_monthbutton::menu-indicator{\n"
"	subcontrol-origin: padding;\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	subcontrol-position: center right;\n"
"	right: 3px;\n"
"	width: 10px;\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	color:black;\n"
"	outline: 0;\n"
"}\n"
"QAbstractItemView {\n"
"font: 900 9pt \"Segoe UI\";\n"
"color: black;\n"
"selection-color: white;\n"
"selection-background-color:rgb(85, 0, 255);\n"
"font: 15px;\n"
"outline: 0;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        label_16 = new QLabel(page_4);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(10, 210, 201, 24));
        label_16->setStyleSheet(QString::fromUtf8("font: 2000 10pt \"Rockwell Extra Bold\";"));
        label_chooseDate_onNewAppointment = new QLabel(page_4);
        label_chooseDate_onNewAppointment->setObjectName("label_chooseDate_onNewAppointment");
        label_chooseDate_onNewAppointment->setGeometry(QRect(290, 210, 161, 24));
        label_chooseDate_onNewAppointment->setStyleSheet(QString::fromUtf8("font: 2000 10pt \"Arial Black\";"));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        label_12 = new QLabel(page_5);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, 0, 491, 61));
        label_12->setStyleSheet(QString::fromUtf8("font: 2000 20pt \"Rockwell Extra Bold\";"));
        tableView_listOfPatients = new QTableView(page_5);
        tableView_listOfPatients->setObjectName("tableView_listOfPatients");
        tableView_listOfPatients->setGeometry(QRect(20, 100, 431, 311));
        tableView_listOfPatients->setStyleSheet(QString::fromUtf8("QTableView{\n"
"	font: 2000 15pt \"Rockwell Extra Bold\";\n"
"	border: 2px solid black;\n"
"	font-size: 15px;	\n"
"	color:black;\n"
"}\n"
""));
        pushButton_addNewPatient_onListOfPatients = new QPushButton(page_5);
        pushButton_addNewPatient_onListOfPatients->setObjectName("pushButton_addNewPatient_onListOfPatients");
        pushButton_addNewPatient_onListOfPatients->setGeometry(QRect(600, 330, 151, 41));
        pushButton_addNewPatient_onListOfPatients->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 2000 15pt \"Rockwell Extra Bold\";\n"
"	border: 2px solid black;\n"
"	background-color:rgb(170, 170, 255);\n"
"	font-size: 20px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}font: 2000 15pt \"Rockwell Extra Bold\";font: 2000 10pt \"Arial Black\";"));
        pushButton_deletePatient_onListOfPatients = new QPushButton(page_5);
        pushButton_deletePatient_onListOfPatients->setObjectName("pushButton_deletePatient_onListOfPatients");
        pushButton_deletePatient_onListOfPatients->setGeometry(QRect(160, 430, 141, 41));
        pushButton_deletePatient_onListOfPatients->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 2000 15pt \"Rockwell Extra Bold\";\n"
"	border: 2px solid black;\n"
"	background-color:rgb(170, 170, 255);\n"
"	font-size: 20px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(255, 67, 70);\n"
"}"));
        label_13 = new QLabel(page_5);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(460, 260, 181, 24));
        label_13->setStyleSheet(QString::fromUtf8("font: 2000 15pt \"Rockwell Extra Bold\";"));
        lineEdit_addName_onListOfPatients = new QLineEdit(page_5);
        lineEdit_addName_onListOfPatients->setObjectName("lineEdit_addName_onListOfPatients");
        lineEdit_addName_onListOfPatients->setGeometry(QRect(670, 258, 211, 31));
        lineEdit_addName_onListOfPatients->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	font: 2000 5pt \"Arial Black\";\n"
"	border: 3px solid rgb(170, 170, 255);\n"
"\n"
"	font-size: 15px;	\n"
"	border-radius: 10px;	\n"
"	color:black;\n"
"}"));
        pushButton_backFromAllPatients = new QPushButton(page_5);
        pushButton_backFromAllPatients->setObjectName("pushButton_backFromAllPatients");
        pushButton_backFromAllPatients->setGeometry(QRect(780, 550, 111, 34));
        pushButton_backFromAllPatients->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 2000 15pt \"Rockwell Extra Bold\";\n"
"	border: 2px solid black;\n"
"	background-color:rgb(170, 170, 255);\n"
"	font-size: 20px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}font: 2000 15pt \"Rockwell Extra Bold\";font: 2000 10pt \"Arial Black\";"));
        label_14 = new QLabel(page_5);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(460, 100, 231, 24));
        label_14->setStyleSheet(QString::fromUtf8("font: 2000 15pt \"Rockwell Extra Bold\";"));
        lineEdit_filterName_onPatientsList = new QLineEdit(page_5);
        lineEdit_filterName_onPatientsList->setObjectName("lineEdit_filterName_onPatientsList");
        lineEdit_filterName_onPatientsList->setGeometry(QRect(670, 98, 211, 31));
        lineEdit_filterName_onPatientsList->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	font: 2000 5pt \"Arial Black\";\n"
"	border: 3px solid rgb(170, 170, 255);\n"
"\n"
"	font-size: 15px;	\n"
"	border-radius: 10px;	\n"
"	color:black;\n"
"}"));
        pushButton_findByFilter_onPatientsList = new QPushButton(page_5);
        pushButton_findByFilter_onPatientsList->setObjectName("pushButton_findByFilter_onPatientsList");
        pushButton_findByFilter_onPatientsList->setGeometry(QRect(460, 150, 141, 41));
        pushButton_findByFilter_onPatientsList->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 2000 15pt \"Rockwell Extra Bold\";\n"
"	border: 2px solid black;\n"
"	background-color:rgb(170, 170, 255);\n"
"	font-size: 20px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}font: 2000 15pt \"Rockwell Extra Bold\";font: 2000 10pt \"Arial Black\";"));
        pushButton_clearFilter_onPatientsList = new QPushButton(page_5);
        pushButton_clearFilter_onPatientsList->setObjectName("pushButton_clearFilter_onPatientsList");
        pushButton_clearFilter_onPatientsList->setGeometry(QRect(670, 150, 211, 41));
        pushButton_clearFilter_onPatientsList->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 2000 15pt \"Rockwell Extra Bold\";\n"
"	border: 2px solid black;\n"
"	background-color:rgb(170, 170, 255);\n"
"	font-size: 20px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}font: 2000 15pt \"Rockwell Extra Bold\";font: 2000 10pt \"Arial Black\";"));
        pushButton_toMedicalHistory_onListOfPatients = new QPushButton(page_5);
        pushButton_toMedicalHistory_onListOfPatients->setObjectName("pushButton_toMedicalHistory_onListOfPatients");
        pushButton_toMedicalHistory_onListOfPatients->setGeometry(QRect(70, 500, 331, 41));
        pushButton_toMedicalHistory_onListOfPatients->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 2000 15pt \"Rockwell Extra Bold\";\n"
"	border: 2px solid black;\n"
"	background-color:rgb(170, 170, 255);\n"
"	font-size: 20px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}font: 2000 15pt \"Rockwell Extra Bold\";font: 2000 10pt \"Arial Black\";"));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        tableView_allAppointments = new QTableView(page_6);
        tableView_allAppointments->setObjectName("tableView_allAppointments");
        tableView_allAppointments->setGeometry(QRect(20, 90, 511, 341));
        tableView_allAppointments->setStyleSheet(QString::fromUtf8("QTableView{\n"
"	font: 2000 15pt \"Rockwell Extra Bold\";\n"
"	border: 2px solid black;\n"
"	font-size: 15px;	\n"
"	color:black;\n"
"}\n"
""));
        pushButton_deleteAppointment_onAllAppointments = new QPushButton(page_6);
        pushButton_deleteAppointment_onAllAppointments->setObjectName("pushButton_deleteAppointment_onAllAppointments");
        pushButton_deleteAppointment_onAllAppointments->setGeometry(QRect(330, 460, 241, 51));
        pushButton_deleteAppointment_onAllAppointments->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 2000 15pt \"Rockwell Extra Bold\";\n"
"	border: 2px solid black;\n"
"	background-color:rgb(170, 170, 255);\n"
"	font-size: 20px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(255, 67, 70);\n"
"}"));
        pushButton_backFromAllAppointments = new QPushButton(page_6);
        pushButton_backFromAllAppointments->setObjectName("pushButton_backFromAllAppointments");
        pushButton_backFromAllAppointments->setGeometry(QRect(760, 550, 111, 34));
        pushButton_backFromAllAppointments->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 2000 15pt \"Rockwell Extra Bold\";\n"
"	border: 2px solid black;\n"
"	background-color:rgb(170, 170, 255);\n"
"	font-size: 20px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}font: 2000 15pt \"Rockwell Extra Bold\";font: 2000 10pt \"Arial Black\";"));
        lineEdit_filterByID_onAllAppointments = new QLineEdit(page_6);
        lineEdit_filterByID_onAllAppointments->setObjectName("lineEdit_filterByID_onAllAppointments");
        lineEdit_filterByID_onAllAppointments->setGeometry(QRect(720, 88, 151, 31));
        lineEdit_filterByID_onAllAppointments->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	font: 2000 5pt \"Arial Black\";\n"
"	border: 3px solid rgb(170, 170, 255);\n"
"\n"
"	font-size: 15px;	\n"
"	border-radius: 10px;	\n"
"	color:black;\n"
"}"));
        label_18 = new QLabel(page_6);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(560, 90, 141, 24));
        pushButton_findByID_onAllAppointments = new QPushButton(page_6);
        pushButton_findByID_onAllAppointments->setObjectName("pushButton_findByID_onAllAppointments");
        pushButton_findByID_onAllAppointments->setGeometry(QRect(650, 160, 161, 41));
        pushButton_findByID_onAllAppointments->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 2000 15pt \"Rockwell Extra Bold\";\n"
"	border: 2px solid black;\n"
"	background-color:rgb(170, 170, 255);\n"
"	font-size: 20px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}font: 2000 15pt \"Rockwell Extra Bold\";font: 2000 10pt \"Arial Black\";"));
        pushButton_clearFilter_onAllAppointments = new QPushButton(page_6);
        pushButton_clearFilter_onAllAppointments->setObjectName("pushButton_clearFilter_onAllAppointments");
        pushButton_clearFilter_onAllAppointments->setGeometry(QRect(610, 220, 231, 41));
        pushButton_clearFilter_onAllAppointments->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 2000 15pt \"Rockwell Extra Bold\";\n"
"	border: 2px solid black;\n"
"	background-color:rgb(170, 170, 255);\n"
"	font-size: 20px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}font: 2000 15pt \"Rockwell Extra Bold\";font: 2000 10pt \"Arial Black\";"));
        label_22 = new QLabel(page_6);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(10, -10, 741, 81));
        label_22->setStyleSheet(QString::fromUtf8("font: 2000 20pt \"Rockwell Extra Bold\";"));
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        label_17 = new QLabel(page_7);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(10, 10, 171, 24));
        label_19 = new QLabel(page_7);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(10, 60, 121, 24));
        plainTextEdit = new QPlainTextEdit(page_7);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(10, 210, 871, 291));
        plainTextEdit->setStyleSheet(QString::fromUtf8("font: 2000 5pt \"Arial Black\";\n"
"font-size: 15px;"));
        pushButton_fromMedicalHistoryBack = new QPushButton(page_7);
        pushButton_fromMedicalHistoryBack->setObjectName("pushButton_fromMedicalHistoryBack");
        pushButton_fromMedicalHistoryBack->setGeometry(QRect(770, 540, 111, 34));
        pushButton_fromMedicalHistoryBack->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 2000 15pt \"Rockwell Extra Bold\";\n"
"	border: 2px solid black;\n"
"	background-color:rgb(170, 170, 255);\n"
"	font-size: 20px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}font: 2000 15pt \"Rockwell Extra Bold\";font: 2000 10pt \"Arial Black\";\n"
"\n"
""));
        pushButton_saveMedicalHistory_onMedicalHistory = new QPushButton(page_7);
        pushButton_saveMedicalHistory_onMedicalHistory->setObjectName("pushButton_saveMedicalHistory_onMedicalHistory");
        pushButton_saveMedicalHistory_onMedicalHistory->setGeometry(QRect(20, 533, 311, 41));
        pushButton_saveMedicalHistory_onMedicalHistory->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 2000 15pt \"Rockwell Extra Bold\";\n"
"	border: 2px solid black;\n"
"	background-color:rgb(170, 170, 255);\n"
"	font-size: 20px;	\n"
"	border-radius: 20px;	\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(14, 118, 255);\n"
"}font: 2000 15pt \"Rockwell Extra Bold\";font: 2000 10pt \"Arial Black\";"));
        label_20 = new QLabel(page_7);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(8, 110, 81, 24));
        lineEdit_diagnosisName_onMedicalHistory = new QLineEdit(page_7);
        lineEdit_diagnosisName_onMedicalHistory->setObjectName("lineEdit_diagnosisName_onMedicalHistory");
        lineEdit_diagnosisName_onMedicalHistory->setGeometry(QRect(90, 110, 141, 29));
        label_21 = new QLabel(page_7);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(10, 170, 111, 24));
        label_patientName_onMedicalHistory = new QLabel(page_7);
        label_patientName_onMedicalHistory->setObjectName("label_patientName_onMedicalHistory");
        label_patientName_onMedicalHistory->setGeometry(QRect(140, 60, 71, 24));
        label_patientID_onMedicalHistory = new QLabel(page_7);
        label_patientID_onMedicalHistory->setObjectName("label_patientID_onMedicalHistory");
        label_patientID_onMedicalHistory->setGeometry(QRect(180, 10, 131, 24));
        stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName("page_8");
        stackedWidget->addWidget(page_8);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 905, 30));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        statusbar->setStyleSheet(QString::fromUtf8("\n"
"	font: 2000 15pt \"Rockwell Extra Bold\";\n"
"	font-size: 16px;	\n"
"	color:black;\n"
"\n"
""));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\227\320\264\321\200\320\260\320\262\321\201\321\202\320\262\321\203\320\271\321\202\320\265!", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        button_EnterToProg->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        button_Registration->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        pushButton_CreateNewAcc->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
        pushButton_backFromNewAcc->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        label_creationResult->setText(QString());
        label_differentPasswords->setText(QString());
        label_GreetingsOnMain->setText(QString());
        pushButton_newAppointment_onMain->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\320\260\321\217 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        pushButton_allAppointments_onMain->setText(QCoreApplication::translate("MainWindow", "\320\222\321\201\320\265 \320\267\320\260\320\277\320\270\321\201\320\270", nullptr));
        pushButton_allPatients_onMain->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\276\320\262", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\320\260\321\217 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "ID \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\260:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\201\320\277\320\265\321\206\320\270\320\260\320\273\320\270\321\201\321\202\320\260:", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\262\321\200\320\265\320\274\321\217:", nullptr));
        comboBox_chooseDoctor_onNewAppoinmet->setItemText(0, QCoreApplication::translate("MainWindow", "\320\237\320\265\320\264\320\270\320\260\321\202\321\200", nullptr));
        comboBox_chooseDoctor_onNewAppoinmet->setItemText(1, QCoreApplication::translate("MainWindow", "\320\242\320\265\321\200\320\260\320\277\320\265\320\262\321\202", nullptr));
        comboBox_chooseDoctor_onNewAppoinmet->setItemText(2, QCoreApplication::translate("MainWindow", "\320\236\320\272\321\203\320\273\320\270\321\201\321\202", nullptr));
        comboBox_chooseDoctor_onNewAppoinmet->setItemText(3, QCoreApplication::translate("MainWindow", "\320\222\321\200\320\260\321\207 \320\243\320\227\320\230", nullptr));
        comboBox_chooseDoctor_onNewAppoinmet->setItemText(4, QCoreApplication::translate("MainWindow", "\320\241\321\202\320\276\320\274\320\260\321\202\320\276\320\273\320\276\320\263", nullptr));
        comboBox_chooseDoctor_onNewAppoinmet->setItemText(5, QCoreApplication::translate("MainWindow", "\320\223\320\260\321\201\321\202\321\200\320\276\321\215\320\275\321\202\320\265\321\200\320\276\320\273\320\276\320\263", nullptr));
        comboBox_chooseDoctor_onNewAppoinmet->setItemText(6, QCoreApplication::translate("MainWindow", "\320\222\321\200\320\260\321\207 \320\255\320\232\320\223", nullptr));
        comboBox_chooseDoctor_onNewAppoinmet->setItemText(7, QCoreApplication::translate("MainWindow", "\320\240\320\265\320\275\321\202\320\263\320\265\320\275\320\276\320\273\320\276\320\263", nullptr));
        comboBox_chooseDoctor_onNewAppoinmet->setItemText(8, QCoreApplication::translate("MainWindow", "\320\245\320\270\321\200\321\203\321\200\320\263", nullptr));
        comboBox_chooseDoctor_onNewAppoinmet->setItemText(9, QCoreApplication::translate("MainWindow", "\320\224\320\265\321\200\320\274\320\260\321\202\320\276\320\273\320\276\320\263", nullptr));

        comboBox_chooseTime_onNewAppoinmet->setItemText(0, QCoreApplication::translate("MainWindow", "8:00", nullptr));
        comboBox_chooseTime_onNewAppoinmet->setItemText(1, QCoreApplication::translate("MainWindow", "8:30", nullptr));
        comboBox_chooseTime_onNewAppoinmet->setItemText(2, QCoreApplication::translate("MainWindow", "9:00", nullptr));
        comboBox_chooseTime_onNewAppoinmet->setItemText(3, QCoreApplication::translate("MainWindow", "9:30", nullptr));
        comboBox_chooseTime_onNewAppoinmet->setItemText(4, QCoreApplication::translate("MainWindow", "10:00", nullptr));
        comboBox_chooseTime_onNewAppoinmet->setItemText(5, QCoreApplication::translate("MainWindow", "10:30", nullptr));
        comboBox_chooseTime_onNewAppoinmet->setItemText(6, QCoreApplication::translate("MainWindow", "11:00", nullptr));
        comboBox_chooseTime_onNewAppoinmet->setItemText(7, QCoreApplication::translate("MainWindow", "11:30", nullptr));
        comboBox_chooseTime_onNewAppoinmet->setItemText(8, QCoreApplication::translate("MainWindow", "12:00", nullptr));
        comboBox_chooseTime_onNewAppoinmet->setItemText(9, QCoreApplication::translate("MainWindow", "12:30", nullptr));
        comboBox_chooseTime_onNewAppoinmet->setItemText(10, QCoreApplication::translate("MainWindow", "13:00", nullptr));
        comboBox_chooseTime_onNewAppoinmet->setItemText(11, QCoreApplication::translate("MainWindow", "13:30", nullptr));
        comboBox_chooseTime_onNewAppoinmet->setItemText(12, QCoreApplication::translate("MainWindow", "14:00", nullptr));
        comboBox_chooseTime_onNewAppoinmet->setItemText(13, QCoreApplication::translate("MainWindow", "14:30", nullptr));
        comboBox_chooseTime_onNewAppoinmet->setItemText(14, QCoreApplication::translate("MainWindow", "15:00", nullptr));
        comboBox_chooseTime_onNewAppoinmet->setItemText(15, QCoreApplication::translate("MainWindow", "15:30", nullptr));
        comboBox_chooseTime_onNewAppoinmet->setItemText(16, QCoreApplication::translate("MainWindow", "16:00", nullptr));
        comboBox_chooseTime_onNewAppoinmet->setItemText(17, QCoreApplication::translate("MainWindow", "16:30", nullptr));
        comboBox_chooseTime_onNewAppoinmet->setItemText(18, QCoreApplication::translate("MainWindow", "17:00", nullptr));
        comboBox_chooseTime_onNewAppoinmet->setItemText(19, QCoreApplication::translate("MainWindow", "17:30", nullptr));
        comboBox_chooseTime_onNewAppoinmet->setItemText(20, QCoreApplication::translate("MainWindow", "18:00", nullptr));

        pushButton_backFromNewAppointment->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        pushButton_createAppointment->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 ID \320\277\320\276 \320\270\320\274\320\265\320\275\320\270:", nullptr));
        lineEdit_findIDFilter_onNewAppointment->setText(QString());
        pushButton_findIDByFilter_onNewAppointment->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\264\320\260\321\202\321\203:", nullptr));
        label_chooseDate_onNewAppointment->setText(QCoreApplication::translate("MainWindow", "00.00.0000", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\276\320\262", nullptr));
        pushButton_addNewPatient_onListOfPatients->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_deletePatient_onListOfPatients->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\260:", nullptr));
        pushButton_backFromAllPatients->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\320\230\321\201\320\272\320\260\321\202\321\214 \320\277\320\276 \320\270\320\274\320\265\320\275\320\270:", nullptr));
        pushButton_findByFilter_onPatientsList->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        pushButton_clearFilter_onPatientsList->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \321\204\320\270\320\273\321\214\321\202\321\200", nullptr));
        pushButton_toMedicalHistory_onListOfPatients->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\270\321\201\321\202\320\276\321\200\320\270\321\216 \320\261\320\276\320\273\320\265\320\267\320\275\320\270", nullptr));
        pushButton_deleteAppointment_onAllAppointments->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_backFromAllAppointments->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 \320\277\320\276 ID:", nullptr));
        pushButton_findByID_onAllAppointments->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        pushButton_clearFilter_onAllAppointments->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \321\204\320\270\320\273\321\214\321\202\321\200", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "\320\222\321\201\320\265 \320\267\320\260\320\277\320\270\321\201\320\270", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217 \320\261\320\276\320\273\320\265\320\267\320\275\320\270 \342\204\226", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\260:", nullptr));
        pushButton_fromMedicalHistoryBack->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        pushButton_saveMedicalHistory_onMedicalHistory->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "\320\224\320\270\320\260\320\263\320\275\320\276\320\267:", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265:", nullptr));
        label_patientName_onMedicalHistory->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_patientID_onMedicalHistory->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
