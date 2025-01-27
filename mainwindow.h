#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QStandardItemModel>
#include <queue>
#include <QString>
#include <QMainWindow>
#include "Patient.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_seeAnotherPatientButton_clicked();

    void on_addPatientButton_clicked();

private:
    Ui::MainWindow *ui;
    std::queue<Patient> patientQueue;
    void insertDefaultData();
    void updateTableView();
};
#endif // MAINWINDOW_H
