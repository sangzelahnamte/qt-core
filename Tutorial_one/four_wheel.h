#ifndef FOUR_WHEEL_H
#define FOUR_WHEEL_H

#include <QObject>
#include <QDebug>

class Four_Wheel : public QObject
{
    Q_OBJECT
public:
    explicit Four_Wheel(QObject *parent = nullptr);
    ~Four_Wheel();
    bool hasFourWheel();
    static int count;
signals:
};

#endif // FOUR_WHEEL_H
