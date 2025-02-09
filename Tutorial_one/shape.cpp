#include "shape.h"

Shape::Shape(QObject *parent)
    : QObject{parent}
{
    qInfo() << this << "constructed";
}

void Shape::print_info(QString msg)
{
    qInfo() << this << msg;
}
