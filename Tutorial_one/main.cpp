#include <QCoreApplication>
#include "shape.h"
#include "four_wheel.h"

void create_objects()
{
    Shape myShape(nullptr, "Blue rectangle");
    myShape.print_info("is the first shape");
    myShape.m_number = 45;
    myShape.print_number();

    Shape myTriangle(nullptr, "Triangle"); // created another object
    myTriangle.print_info("This is a triangle");

    Four_Wheel toyota_cruiser;
    toyota_cruiser.setObjectName("Toyota Tiger");
    qInfo() << "Has wheels: " << toyota_cruiser.hasFourWheel();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    create_objects(); // a method for creating an instances of a class

    qDebug() << "Program executed successfully";
    // check for contructor and deconstructor on the console
    return a.exec();
}
