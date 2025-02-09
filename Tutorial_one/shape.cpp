#include "shape.h"

Shape::Shape(QObject *parent, QString m_name)
    : QObject{parent}
{
    this->m_name = m_name;
    qInfo() << this << "constructed " << m_name;
}

Shape::~Shape()
{
    qInfo() << this << "destroyed";
}

void Shape::print_info(QString msg)
{
    qInfo() << this << msg;
}

void Shape::print_number()
{
    qInfo() << "Your number: " << m_number;
}
