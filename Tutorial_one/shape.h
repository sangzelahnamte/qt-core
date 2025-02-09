#ifndef SHAPE_H
#define SHAPE_H

#include <QObject>
#include <QDebug>

class Shape : public QObject
{
    Q_OBJECT
public:
    explicit Shape(QObject *parent = nullptr, QString m_name = "");
    ~Shape();

    QString m_name;
    int m_number;

    void print_info(QString msg);
    void print_number();

signals:
};

#endif // SHAPE_H
