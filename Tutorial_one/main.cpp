#include <QCoreApplication>
#include "shape.h"
#include "four_wheel.h"
#include "truck.h"
#include <QIODevice>
#include <QBuffer>
#include <QDebug>
#include <QFile>
#include <QTextStream>

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

void read_file(QFile &your_file) // file read na
{
    if(!your_file.isReadable())
    {
        qInfo() << your_file.errorString();
    }
    QTextStream text_streams(&your_file);
    text_streams.seek(0);
    while(!text_streams.atEnd())
    {
        qInfo() << text_streams.readLine();
    }
}

void write_file(QFile &your_file)
{
    if(!your_file.isWritable())
    {
        qInfo() << your_file.errorString();
    }
    QTextStream text_streams(&your_file);
    text_streams.seek(your_file.size()); // a tawp atanga kan append dawn vangin size dah
    for(int i = 0; i < 10; i++)
    {
        text_streams << " Appending new text data to file\n";
    }
    text_streams.flush();
    qInfo() << "File data written";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //create_objects(); // a method for creating an instances of a class

    QString my_file_name = "test.txt";
    QFile my_file(my_file_name);
    // buffer kan mamawh tawh lo
    if(my_file.open(QIODevice::ReadWrite))               // Data ziah luh na leh chhiar na (READ AND WRITE)
    {
        qInfo() << "File opened";
        read_file(my_file); // reading txt file from current build directory
        write_file(my_file); // writing to txt file
        read_file(my_file); // reading again
        my_file.close();
        qInfo() << "File closed";
    }
    else
    {
        qInfo() << my_file.errorString(); // ERROR a rawn ti lang ang
    }

    qDebug() << "Program executed successfully";
    // check for contructor and deconstructor on the console
    return a.exec();
}
