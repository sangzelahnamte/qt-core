#ifndef TRUCK_H
#define TRUCK_H

#include <QObject>
#include <QDebug>
#include "four_wheel.h"

class Truck : public Four_Wheel // inheriting from from four wheel class
{
    Q_OBJECT
public:
    explicit Truck(QObject *parent = nullptr);
    ~Truck();
    void print_info(QString msg);
signals:

};

#endif // TRUCK_H
