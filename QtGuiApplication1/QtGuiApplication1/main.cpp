#include "QtGuiApplication1.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtGuiApplication1 w;
    w.show();

    // i am release 1.0 
    return a.exec();
}
