#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMainWindow>
#include <QStandardItemModel>
#include <queue>
#include <QString>
#include "Patient.h"
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->doctorOfficeStateArea->setText("Doctor's Office is empty now!");
    ui->patientsTable->verticalHeader()->setVisible(false);
    insertDefaultData();
    setWindowTitle("Patients Queue");
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::insertDefaultData()
{

    patientQueue.push(Patient("Anya", "Anya"));
    patientQueue.push(Patient("Vlad", "Kot"));
    patientQueue.push(Patient("Ivan", "Romanin"));
    patientQueue.push(Patient("Egor", "Black"));



    updateTableView();
}

void MainWindow::updateTableView()
{

    QStandardItemModel *model = new QStandardItemModel(this);
    model->setColumnCount(3);
    model->setHeaderData(0, Qt::Horizontal, "Appt Num");
    model->setHeaderData(1, Qt::Horizontal, "Name");
    model->setHeaderData(2, Qt::Horizontal, "Surname");


    std::queue<Patient> tempQueue = patientQueue;
    int row = 0;
    while (!tempQueue.empty()) {
        const Patient &patient = tempQueue.front();
        QStandardItem *idItem = new QStandardItem(QString::number(patient.getId()));
        QStandardItem *firstNameItem = new QStandardItem(patient.getFirstName());
        QStandardItem *middleNameItem = new QStandardItem(patient.getMiddleName());
        idItem->setFlags(idItem->flags() & ~Qt::ItemIsEditable);
        firstNameItem->setFlags(firstNameItem->flags() & ~Qt::ItemIsEditable);
        middleNameItem->setFlags(middleNameItem->flags() & ~Qt::ItemIsEditable);
        model->setItem(row, 0, idItem);
        model->setItem(row, 1, firstNameItem);
        model->setItem(row, 2, middleNameItem);
        tempQueue.pop();
        ++row;
    }


    ui->patientsTable->setModel(model);
}

void MainWindow::on_seeAnotherPatientButton_clicked()
{
    QLabel *doctorState = ui->doctorOfficeStateArea;
    if (!patientQueue.empty()) {
        const Patient &patient = patientQueue.front();
        QString attendee = QString("The doctor is seeing patient " + patient.getFirstName() + " " + patient.getMiddleName() + "...");
        patientQueue.pop();
        doctorState->setText(attendee);
        updateTableView();
    } else {
         doctorState->setText("All patients are seen for now!");
    }
}


void MainWindow::on_addPatientButton_clicked()
{
    QString firstName = ui->firstNameArea->text();
    QString middleName = ui->middleNameArea->text();
    QLabel *state = ui->addedPatientStateArea;
    QLabel *doctorState = ui->doctorOfficeStateArea;
    if(!firstName.isEmpty() &&
        !middleName.isEmpty()){
        patientQueue.push(Patient(firstName, middleName));
        updateTableView();
        if (doctorState->text()=="All patients are seen for now!") {
          doctorState->setText("Doctor's Office is empty now!");
        }
        ui->firstNameArea->setText("");
        ui->middleNameArea->setText("");
        state->setText("");
    } else if (firstName.isEmpty() && middleName.isEmpty()){
        state->setText("Please enter the first and middle name!");
    } else if (middleName.isEmpty()) {
        state->setText("Please enter the middle name!");
    } else {
        state->setText("Please enter the first name!");
    }

}

