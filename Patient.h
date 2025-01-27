#pragma once
#include <QString>
#ifndef PATIENT_H
#define PATIENT_H
class Patient
{
private:
    int id;
    static int nextId;
    QString firstName;
    QString middleName;

public:
    void setFirstName(const QString& firstName);
    void setMiddleName(const QString& middleName);
    QString getFirstName() const;
    QString getMiddleName() const;
    int getId() const;
    Patient(QString firstName = "John", QString middleName = "Doe");
};

#endif
