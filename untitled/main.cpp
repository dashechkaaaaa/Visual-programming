#include "mainwindow.h"
#include <QApplication>
#include <QString>
#include <QtSql>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSqlDatabase mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/databases/database.db");

    if(!mydb.open()) {
        qDebug() << mydb.lastError().text();
        return -1;
    }

    MainWindow w;
    w.show();

    return a.exec();
}
