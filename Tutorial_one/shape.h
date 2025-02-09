#ifndef SHAPE_H
#define SHAPE_H

#include <QObject>
#include <QDebug>

class Shape : public QObject
{
    Q_OBJECT
public:
    explicit Shape(QObject *parent = nullptr);
    void print_info(QString msg);

signals:
};

#endif // SHAPE_H
