#include "mainwindow.h"
#include <QFile>
#include <QApplication>
#include <QDir>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    qDebug() << "Current working directory:" << QDir::currentPath();
    qDebug() << "Application directory:" << QCoreApplication::applicationDirPath();


    QFile file("../../stylesheet.qss");
    if (file.open(QFile::ReadOnly)) {
        QString style = QLatin1String(file.readAll());
        qApp->setStyleSheet(style);
        file.close();
    } else {
        qDebug() << "File does not exist at path:" << file.fileName();
    }



    w.show();
    return a.exec();
}
