#include "mywidget.h"

#include <QApplication>//包含一个应用程序的头文件

//argc命令行变量的数量，argv命令行变量的数组
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myWidget w;
    w.show();

    return a.exec();
}
