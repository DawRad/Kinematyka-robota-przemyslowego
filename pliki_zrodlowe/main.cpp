#include "userguide.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UserGuide w;
    w.show();
    return a.exec();
}
