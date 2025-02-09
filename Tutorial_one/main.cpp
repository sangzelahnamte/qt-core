#include <QCoreApplication>
#include "shape.h"
#include "four_wheel.h"
#include "truck.h"

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
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    create_objects(); // a method for creating an instances of a class

    qDebug() << "Program executed successfully";
    // check for contructor and deconstructor on the console
    return a.exec();
}
