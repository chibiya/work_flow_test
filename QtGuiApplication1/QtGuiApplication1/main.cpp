#include "QtGuiApplication1.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    // chibiya
    // relase 1.1
    QApplication a(argc, argv);
    QtGuiApplication1 w;
    w.show();
    return a.exec();
}
