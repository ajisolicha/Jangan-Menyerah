#include "mainwindow.h"
#include <QApplication>
1
#include <iostream>
#include <stdio.h>


int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}




