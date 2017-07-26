#include "QtGuiApplication1.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    // chibiya
    // relase 1.1
    QApplication a(argc, argv);
    QtGuiApplication1 w;
    w.show();

    // i am release 1.0 
    // release 1.1 
    return a.exec();
}
