#include "shape.h"

Shape::Shape(QObject *parent)
    : QObject{parent}
{
    qInfo() << this << "constructed";
}

Shape::~Shape()
{
    qInfo() << this << "destroyed";
}

void Shape::print_info(QString msg)
{
    qInfo() << this << msg;
}
