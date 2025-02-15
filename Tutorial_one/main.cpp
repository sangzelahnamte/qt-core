#include <QCoreApplication>
#include "shape.h"
#include "four_wheel.h"
#include "truck.h"
#include <QIODevice>
#include <QBuffer>
#include <QDebug>
#include <QFile>

// needs to be defined here will work only for instance of class
int Four_Wheel::count = 0; // static class member variable declaration on global scope

void create_objects()
{
    qInfo() << "Object count: " << Four_Wheel::count;

    Shape myShape(nullptr, "Blue rectangle");
    myShape.print_info("is the first shape");
    myShape.m_number = 45;
    myShape.print_number();

    Shape myTriangle(nullptr, "Triangle"); // created another object
    myTriangle.print_info("This is a triangle");

    Four_Wheel toyota_cruiser;
    toyota_cruiser.setObjectName("Toyota Tiger");
    qInfo() << "Has wheels: " << toyota_cruiser.hasFourWheel();

    Truck ashok;
    ashok.setObjectName("Ashok Layland");
    ashok.print_info("This is a nice truck");

    qInfo() << "Object count: " << Four_Wheel::count;

    QString my_file_name = "test.txt";
    QFile my_file(my_file_name);
    // buffer kan mamawh tawh lo
    if(my_file.open(QIODevice::ReadWrite))               // Data ziah luh na leh chhiar na (READ AND WRITE)
    {
        qInfo() << "File buffer opened";
        QByteArray byte_data = "a piece of data";
        for (int i = 0; i < 10; ++i)
        {
            my_file.write(byte_data);
            my_file.write("\r\n");
        }
        my_file.seek(0);
        qInfo() << my_file.readAll();
        my_file.close();
        qInfo() << "Data reading completed";
    }
    else
    {
        qInfo() << my_file.errorString(); // ERROR a rawn ti lang ang
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    create_objects(); // a method for creating an instances of a class

    qDebug() << "Program executed successfully";
    // check for contructor and deconstructor on the console
    return a.exec();
}
