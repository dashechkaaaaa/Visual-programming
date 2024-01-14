#include "secondwindow.h"
#include "ui_secondwindow.h"
#include "profilewindow.h"
#include "note.h"
#include <QDate>
#include <QStringList>
#include <QCalendarWidget>
#include <QMessageBox>
#include <QDebug>
#include "mainwindow.h"
#include <QtSql>
#include "note.h"
#include <QDesktopWidget>

SecondWindow::SecondWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondWindow)
{
    QDesktopWidget desktop;
    QRect rect = desktop.availableGeometry(this);
    QPoint center = rect.center();
    int x = center.x() - (width()/2);
    int y = center.y() - (height()/2);
    center.setX(x);
    center.setY(y);
    move(center);
    setWindowTitle("Создание цели");
    profileWindow = new ProfileWindow;
    ui->setupUi(this);
    //ui->login->setValidator(&validLogin);
    //ui->passline->setValidator(&validPassword);
    connect(this, &SecondWindow::sendIdToProfileWindow, profileWindow, &ProfileWindow::getIdFromSecondWindow);
}

SecondWindow::~SecondWindow()
{
    delete ui;
}

void SecondWindow::getId(QString newId)
{
    userId = newId;
    qDebug() << userId << "getId";
    //QMessageBox::information(this, "getId", "getId");
    //ui->pushButton->setText("SIGNAL");
}

void SecondWindow::on_pushButton_clicked()
{
    //ui->pushButton->setStyleSheet("border-image: url(star.png)");

    profileWindow->setModal(true);
    emit sendIdToProfileWindow(userId);
    profileWindow->exec();

    //qDebug() << userId;
    //ui->pushButton->setText(userId);
}

//void SecondWindow::getNote(QString note)
//{
//    userNote = note;
//    //startDate = dateCal.toString("dd/MM/yyyy");
//    //qDebug() << startDate << "startDate";
//    qDebug() << userNote << "userNote";
//}

void SecondWindow::on_calendarWidget_clicked(const QDate &date)
{
    dateCal = date;
    startDate = dateCal.toString("dd.MM.yyyy");
    Note note;
    note.setModal(true);
    note.exec();
    //qDebug() << note.list.first() << "list note";
    //qDebug() << note.listDate.first() << "list date";
    MainWindow mWindow;

    if(!mWindow.connOpen()){
        qDebug() << "Failed to open the database";
        return;
    }
    else {
        qDebug() << "Database connected in secondWindow";
    }
    mWindow.connOpen();
    //QString nullStr = " ";
    QSqlQuery query;
    query.prepare("insert into task (userId, taskDescription, startDate, endDate) values ('"+userId+"', '"+note.list.first()+"', '"+startDate+"', '"+note.listDate.first()+"')");
    if(query.exec()){
        qDebug() << "Date saved";
        mWindow.connClose();
    }
    else{
        qDebug() << query.lastError();
    }

    //QMessageBox::information(this, "", dateCal.toString("dd/MM/yyyy"));
}


