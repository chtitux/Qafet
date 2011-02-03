#include <QtCore>
#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QPushButton button("Hell world!");
    button.show();


    return a.exec();
}
