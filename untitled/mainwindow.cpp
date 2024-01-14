#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secondwindow.h"
#include "registration.h"
#include "humandata.h"
#include <QtSql>
#include <QMessageBox>
#include <QValidator>
#include <QVariant>
#include <QDebug>
#include <QSqlResult>
#include "currentnote.h"
#include <QDesktopWidget>
#include <QRect>
#include "helpbrowser.h"
#include <QKeyEvent>
#include <QSettings>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    validLogin(QRegExp("^\\S*")),
    validPassword(QRegExp("^\\S*"))

{
    //settings = new QSettings("Daria","Goals",this);
    //loadSettings();
    QDesktopWidget desktop;
    QRect rect = desktop.availableGeometry(this);
    QPoint center = rect.center();
    int x = center.x() - (width()/2);
    int y = center.y() - (height()/2);
    center.setX(x);
    center.setY(y);
    move(center);
    timer = new QTimer(this);
    ms = 0;
    s = 0;
    m = 0;
    connect(timer, SIGNAL(timeout()),this,SLOT(timerSlot()));
    timer->start(1);
    secondWindow = new SecondWindow;
    ui->setupUi(this);
    ui->login->setValidator(&validLogin);
    ui->passline->setValidator(&validPassword);
    connect(this, &MainWindow::sendId, secondWindow, &SecondWindow::getId);

}

MainWindow::~MainWindow()
{
    //saveSettings();
    delete ui;
}

//void MainWindow::slotTimerAlarm()
//{
//    ui->label->setText(QTime::currentTime().toString("hh:mm:ss"));
//}

void MainWindow::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_F1) {
        openHelpBrowser();
    } else {
        QMainWindow::keyPressEvent(event);
    }
}

void MainWindow::openHelpBrowser() {
    HelpBrowser *helpBrowser = new HelpBrowser(this);
    helpBrowser->show();
}

//void MainWindow::saveSettings() {
//  //settings->setValue("title", windowTitle());

//  settings->setValue("loginValue", ui->login->text());
//}

//void MainWindow::loadSettings() {
//    //setWindowTitle(settings->value("titile", "Goals").toString());
//    ui->login->setText(settings->value("loginValue", "").toString());
//}

void MainWindow::on_auth_clicked()
{
    QString username = ui->login->text();
    QString password = ui->passline->text();


    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::information(this, "Авторизация", "Введите данные для входа");
    }

    else {
        if(!connOpen()){
            qDebug() << "Failed to open the database";
            return;
        }
        else {
            qDebug() << "Database connected in mainWindow";
        }
        connOpen();
        QSqlQuery usersQuery;
        QString usernameResult;
        QString passwordResult;
        QString idResult;
        if(usersQuery.exec("select * from users")) {
            while(usersQuery.next()) {
                idResult = usersQuery.value(0).toString();
                usernameResult = usersQuery.value(1).toString();
                passwordResult = usersQuery.value(2).toString();
                if((usernameResult == username) && (passwordResult == password)){
                    qDebug() << "on_auth_clicked" << idResult;
                    this->hide();
                    emit sendId(idResult);
                    secondWindow->setModal(true);
                    secondWindow->exec();
                    connClose();
                }
            }
        }

        if((usernameResult != username) && (passwordResult != password)){
            QMessageBox::information(this, "Авторизация", "Пользователя с такими данными не существует");
        }

        if((usernameResult == NULL) && (passwordResult == NULL)){
            QMessageBox::information(this, "Авторизация", "Введите данные для авторизации");
        }
    }
}

void MainWindow::on_registr_clicked()
{
    Registration registration;
    registration.setModal(true);
    registration.exec();
}

void MainWindow::timerSlot()
{
    ms++;
        if(ms>=1000){
            ms =0;
            s++;
        }
        if(s>=60){
            s =0;
            m++;
        }
        ui->label_2->setText(QString::number(m)+" : ");
        ui->label_3->setText(QString::number(s));
}


