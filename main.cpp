#include <iostream>
#include "mainwindow.h"
#include <QApplication>
#include "../QMediaStreamer_DataAccess/dataaccess.h"
#include <QMediaPlayer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
