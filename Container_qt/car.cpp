#include "car.h"

Car::Car(QObject *parent)
    : QObject{parent}
{
    this->objectName() = m_name;
    qDebug() << this << "constructed" << m_name;
}

Car::~Car()
{

}
