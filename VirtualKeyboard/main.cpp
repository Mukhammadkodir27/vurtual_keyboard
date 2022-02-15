#include "mainwindow.h"
#include <QtMath>
#include <QtGlobal>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
