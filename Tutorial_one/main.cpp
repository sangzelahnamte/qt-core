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

    int number = 0;
    int* num_var = new int(); // on the heap
    std::cout << "Enter number: ";
    std::cin >> *num_var;

    std::cout << "Your number: " << *num_var << std::endl;
    delete num_var;
    num_var = nullptr;

    qInfo() << "Changes in the source code made HERE!!!!";

    qDebug() << "Program executed successfully";

    return a.exec();
}
