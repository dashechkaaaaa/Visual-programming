#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QValidator>
#include <QtSql>
#include <QDebug>
#include <QString>
#include <humandata.h>
#include <secondwindow.h>
#include <QTimer>
#include <QTime>

namespace Ui {
class MainWindow;
}

class SecondWindow;
class CurrentNote;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    SecondWindow *secondWindow;
    CurrentNote *currentWindow;
    QSqlDatabase mydb;
    void openHelpBrowser();
    //void saveSettings();
    //void loadSettings();
    void connClose() {
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }


    bool connOpen(){
        mydb = QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("C:/databases/database.db");
        if (!mydb.open()){
            qDebug() << "Error connected";
            return false;
        }
        else {
            qDebug() << "Database connected";
            return true;
        }
    }
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_auth_clicked();
    void on_registr_clicked();
    void timerSlot();

private:
    Ui::MainWindow *ui;
    QRegExpValidator validLogin;
    QRegExpValidator validPassword;
    QTimer *timer;
    int ms;
    int s;
    int m;


protected:
    void keyPressEvent(QKeyEvent *event) override;

signals:
    void sendId(QString);
    void sendIdCurrentNote(QString);
};

#endif // MAINWINDOW_H
