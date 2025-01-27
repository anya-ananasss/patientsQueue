/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_11;
    QLabel *label_19;
    QLineEdit *firstNameArea;
    QLabel *label_20;
    QLineEdit *middleNameArea;
    QLabel *addedPatientStateArea;
    QPushButton *addPatientButton;
    QVBoxLayout *verticalLayout_20;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_12;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_5;
    QTableView *patientsTable;
    QLabel *doctorOfficeStateArea;
    QLabel *label_17;
    QPushButton *seeAnotherPatientButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1049, 567);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 10, 1021, 511));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName("verticalLayout_13");
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName("label_11");
        label_11->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_11->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_11->addWidget(label_11);

        label_19 = new QLabel(gridLayoutWidget);
        label_19->setObjectName("label_19");

        verticalLayout_11->addWidget(label_19);

        firstNameArea = new QLineEdit(gridLayoutWidget);
        firstNameArea->setObjectName("firstNameArea");

        verticalLayout_11->addWidget(firstNameArea);

        label_20 = new QLabel(gridLayoutWidget);
        label_20->setObjectName("label_20");

        verticalLayout_11->addWidget(label_20);

        middleNameArea = new QLineEdit(gridLayoutWidget);
        middleNameArea->setObjectName("middleNameArea");

        verticalLayout_11->addWidget(middleNameArea);

        addedPatientStateArea = new QLabel(gridLayoutWidget);
        addedPatientStateArea->setObjectName("addedPatientStateArea");
        addedPatientStateArea->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_11->addWidget(addedPatientStateArea);

        addPatientButton = new QPushButton(gridLayoutWidget);
        addPatientButton->setObjectName("addPatientButton");

        verticalLayout_11->addWidget(addPatientButton);


        verticalLayout_13->addLayout(verticalLayout_11);


        gridLayout->addLayout(verticalLayout_13, 6, 1, 1, 1);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName("verticalLayout_20");

        gridLayout->addLayout(verticalLayout_20, 0, 0, 1, 1);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName("verticalLayout_12");
        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName("label_12");
        label_12->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_12->addWidget(label_12);

        scrollArea_3 = new QScrollArea(gridLayoutWidget);
        scrollArea_3->setObjectName("scrollArea_3");
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName("scrollAreaWidgetContents_5");
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 501, 399));
        patientsTable = new QTableView(scrollAreaWidgetContents_5);
        patientsTable->setObjectName("patientsTable");
        patientsTable->setGeometry(QRect(-10, 0, 521, 451));
        scrollArea_3->setWidget(scrollAreaWidgetContents_5);

        verticalLayout_12->addWidget(scrollArea_3);


        verticalLayout_10->addLayout(verticalLayout_12);


        gridLayout->addLayout(verticalLayout_10, 6, 0, 1, 1);

        doctorOfficeStateArea = new QLabel(gridLayoutWidget);
        doctorOfficeStateArea->setObjectName("doctorOfficeStateArea");
        doctorOfficeStateArea->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(doctorOfficeStateArea, 2, 0, 1, 2);

        label_17 = new QLabel(gridLayoutWidget);
        label_17->setObjectName("label_17");
        label_17->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_17, 1, 0, 1, 2);

        seeAnotherPatientButton = new QPushButton(gridLayoutWidget);
        seeAnotherPatientButton->setObjectName("seeAnotherPatientButton");

        gridLayout->addWidget(seeAnotherPatientButton, 3, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1049, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Add New Patient", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "First Name:", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Middle Name:", nullptr));
        addedPatientStateArea->setText(QString());
        addPatientButton->setText(QCoreApplication::translate("MainWindow", "Add Patient", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Patients", nullptr));
        doctorOfficeStateArea->setText(QCoreApplication::translate("MainWindow", "Doctor's Office is empty now!", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Doctor's Office", nullptr));
        seeAnotherPatientButton->setText(QCoreApplication::translate("MainWindow", "See Next Patient", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
