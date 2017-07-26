#include "QtGuiApplication1.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    //Nicholas Finished: 20170726

    QApplication a(argc, argv);
    QtGuiApplication1 w;
    w.show();
    return a.exec();
}
