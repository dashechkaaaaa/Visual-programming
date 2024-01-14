#include "profilewindow.h"
#include "ui_profilewindow.h"
#include <QListWidget>
#include <humandata.h>
#include <QMessageBox>
#include <iostream>
#include <QString>
#include "currentnote.h"
#include <QDesktopWidget>

ProfileWindow::ProfileWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProfileWindow)
{
    QDesktopWidget desktop;
    QRect rect = desktop.availableGeometry(this);
    QPoint center = rect.center();
    int x = center.x() - (width()/2);
    int y = center.y() - (height()/2);
    center.setX(x);
    center.setY(y);
    move(center);
    setWindowTitle("Меню");
    human = new HumanData;
    ui->setupUi(this);
    connect(this, &ProfileWindow::sendIdToHumanData, human, &HumanData::getIdFromProfileWindow);
    currentWindow = new CurrentNote;
    connect(this, &ProfileWindow::sendIdCurrentNote, currentWindow, &CurrentNote::getIdCurrentNote);
}

ProfileWindow::~ProfileWindow()
{
    delete ui;
}

void ProfileWindow::getIdFromSecondWindow(QString newId)
{
    userId = newId;
    qDebug() << userId << "getIdFromSecondWindow";
    //QMessageBox::information(this, userId, userId);
}

void ProfileWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    //CurrentNote current;
    const QString &str1 = ui->listWidget->currentItem()->text();
    if (str1 == "Мои данные") {
        human->setModal(true);
        //qDebug() << "on_listWidget_itemClicked" << userId;
        emit sendIdToHumanData(userId);
        human->exec();
    }
    if (str1 == "Текущие цели") {
        currentWindow->setModal(true);
        emit sendIdCurrentNote(userId);
        currentWindow->exec();
    }
    else {
        hide();
    }
    //std::cout << str1;
}

