#include <QCoreApplication>
#include <QDebug>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << "I`ve made some changes to the source code here";

    std::string name_var = "";
    std::cout << "Write your name: ";
    std::cin >> name_var;
    qInfo() << "Name: " << name_var;

    return a.exec();
}
