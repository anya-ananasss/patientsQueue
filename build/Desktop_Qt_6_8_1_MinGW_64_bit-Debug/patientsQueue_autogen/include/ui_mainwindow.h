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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QTableView *patientsTable;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_19;
    QLineEdit *firstNameArea;
    QLabel *label_20;
    QLineEdit *middleNameArea;
    QPushButton *addPatientButton;
    QLabel *addedPatientStateArea;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *doctorOfficeStateArea;
    QPushButton *seeAnotherPatientButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1027, 789);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName("verticalLayout");
        patientsTable = new QTableView(groupBox_3);
        patientsTable->setObjectName("patientsTable");

        verticalLayout->addWidget(patientsTable);


        gridLayout_2->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_19 = new QLabel(groupBox);
        label_19->setObjectName("label_19");

        verticalLayout_2->addWidget(label_19);

        firstNameArea = new QLineEdit(groupBox);
        firstNameArea->setObjectName("firstNameArea");

        verticalLayout_2->addWidget(firstNameArea);

        label_20 = new QLabel(groupBox);
        label_20->setObjectName("label_20");

        verticalLayout_2->addWidget(label_20);

        middleNameArea = new QLineEdit(groupBox);
        middleNameArea->setObjectName("middleNameArea");

        verticalLayout_2->addWidget(middleNameArea);

        addPatientButton = new QPushButton(groupBox);
        addPatientButton->setObjectName("addPatientButton");

        verticalLayout_2->addWidget(addPatientButton);

        addedPatientStateArea = new QLabel(groupBox);
        addedPatientStateArea->setObjectName("addedPatientStateArea");
        addedPatientStateArea->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(addedPatientStateArea);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        gridLayout_2->addWidget(groupBox, 1, 1, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        verticalLayout_5 = new QVBoxLayout(groupBox_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        doctorOfficeStateArea = new QLabel(groupBox_2);
        doctorOfficeStateArea->setObjectName("doctorOfficeStateArea");
        doctorOfficeStateArea->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(doctorOfficeStateArea);

        seeAnotherPatientButton = new QPushButton(groupBox_2);
        seeAnotherPatientButton->setObjectName("seeAnotherPatientButton");

        verticalLayout_5->addWidget(seeAnotherPatientButton);


        gridLayout_2->addWidget(groupBox_2, 0, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1027, 22));
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
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Patients", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Add New Patient", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "First Name:", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Middle Name:", nullptr));
        addPatientButton->setText(QCoreApplication::translate("MainWindow", "Add Patient", nullptr));
        addedPatientStateArea->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Doctor's Office", nullptr));
        doctorOfficeStateArea->setText(QCoreApplication::translate("MainWindow", "Doctor's Office is empty now!", nullptr));
        seeAnotherPatientButton->setText(QCoreApplication::translate("MainWindow", "See Next Patient", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
