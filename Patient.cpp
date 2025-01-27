#include "Patient.h"
#include <QString>


int Patient::nextId = 1;


void Patient::setFirstName(const QString& firstName) {
     this->firstName = firstName;
}


void Patient::setMiddleName(const QString& middleName) {
    this->middleName = middleName;
}


QString Patient::getFirstName() const {
    return firstName;
}

QString Patient::getMiddleName() const {
    return middleName;
}

int Patient::getId() const {
    return id;
}


Patient::Patient(QString firstName, QString middleName){
    this->firstName = firstName;
    this->middleName = middleName;
    this->id = nextId++;
}
