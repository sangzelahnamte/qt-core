#ifndef CAR_H
#define CAR_H

#include <QObject>
#include <QDebug>

class Car : public QObject
{
    Q_OBJECT
private:
    QString m_name;
public:
    explicit Car(QObject *parent = nullptr);
    ~Car();
signals:
};

#endif // CAR_H
