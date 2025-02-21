#include <QCoreApplication>
#include <QList>
#include <QStringList>
#include <QSet>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString words = "For god love the world so much that he gave his son his only son";
    QList<QString> list_word = {"tory", "john", "milton", "wills", "conard", "lisa", "elward", "wiky"};
    QStringList list2 = {"apple", "bannana", "kiwi", "papaya", "orange", "pineapple"};
    QSet<QString> name_set = {"Paramore", "Bullet for my Valentine", "Blink 182", "My chemical Romance"}; // Fast lookup

    list_word.sort();

    foreach(QString itr, name_set)
    {
        qInfo() << itr;
    }

    qInfo() << "Does set contain Metallica: " << name_set.contains("Metallica");

    return a.exec();
}
