#include <QCoreApplication>
#include "shape.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Shape rectangle;
    rectangle.setObjectName("Blue rectangle");
    rectangle.print_info("is the first shape");

    qDebug() << "Program executed successfully";

    return a.exec();
}
