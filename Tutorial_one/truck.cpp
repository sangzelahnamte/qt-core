#include "truck.h"

Truck::Truck(QObject *parent)
    : Four_Wheel{parent}
{
    qDebug() << this << "constructed";
}

Truck::~Truck()
{
    qDebug() << this << "destroyed";
}

void Truck::print_info(QString msg)
{
    qInfo() << msg;
}
