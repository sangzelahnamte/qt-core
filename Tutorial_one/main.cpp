#include <QCoreApplication>
#include "shape.h"

void create_objects()
{
    Shape myShape(nullptr, "Blue rectangle");
    myShape.print_info("is the first shape");
    myShape.m_number = 45;
    myShape.print_number();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    create_objects();

    qDebug() << "Program executed successfully";

    return a.exec();
}
