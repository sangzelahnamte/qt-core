#include "four_wheel.h"

Four_Wheel::Four_Wheel(QObject *parent)
    : QObject{parent}
{
    qDebug() << this << "constructed";
}

Four_Wheel::~Four_Wheel()
{
    qDebug() << this  << "destroyed";
}

bool Four_Wheel::hasFourWheel()
{
    return true;
}
