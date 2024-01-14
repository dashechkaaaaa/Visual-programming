#include "registration.h"
#include "ui_registration.h"
#include "mainwindow.h"
#include <QtSql>
#include <QMessageBox>
#include <QDebug>
#include <QValidator>
#include <QDesktopWidget>

Registration::Registration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Registration),
    validLoginReg(QRegExp("^\\S*")),
    validPasswordReg(QRegExp("^\\S*"))
{
    QDesktopWidget desktop;
    QRect rect = desktop.availableGeometry(this);
    QPoint center = rect.center();
    int x = center.x() - (width()/2);
    int y = center.y() - (height()/2);
    center.setX(x);
    center.setY(y);
    move(center);
    setWindowTitle("Регистрация");
    ui->setupUi(this);
    ui->loginlineReg->setValidator(&validLoginReg);
    ui->passlineReg->setValidator(&validPasswordReg);
}

Registration::~Registration()
{
    delete ui;
}

void Registration::on_save_clicked()
{
    MainWindow mainWindow;
    QString usernameRegistration = ui->loginlineReg->text();
    QString passwordRegistration = ui->passlineReg->text();


    if (usernameRegistration.isEmpty() || passwordRegistration.isEmpty()){
        QMessageBox::information(this, "Регистрация", "Введите данные для регистрации");
    }

    else {
        if(!mainWindow.connOpen()){
            qDebug() << "Failed to open the database";
            return;
        }
        else {
            qDebug() << "Database connected in registration";
        }
        mainWindow.connOpen();
        QSqlQuery usersQuery;
        usersQuery.prepare("insert into users (username, password) values ('"+usernameRegistration+"', '"+passwordRegistration+"')");
        if(usersQuery.exec()){
            qDebug() << "Username and password saved";
            mainWindow.connClose();
            hide();
        }
        else{
            qDebug() << "Error save login and password";
        }
    }
}
