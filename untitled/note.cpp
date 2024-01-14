#include "note.h"
#include "ui_note.h"
#include <QString>
#include <QStringList>
#include <QValidator>
#include <QMessageBox>
#include "mainwindow.h"
#include "secondwindow.h"

Note::Note(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Note),
    space(QRegExp("^\\S*"))

{
    ui->setupUi(this);
    //ui->note->setValidator(&space);
    setWindowTitle("Цель");
    //sWindow = new SecondWindow;
    //connect(this, &Note::sendNote, sWindow, &SecondWindow::getNote);
}

Note::~Note()
{
    delete ui;
}



void Note::on_buttonBox_accepted()
{
    QString str = ui->note->text();
    QString date = ui->date->text();
    qDebug() << date;
    if (str.isEmpty()){
        QMessageBox::information(this, "Пустая цель", "Нельзя создать пустую цель");
    }
    else {
        listDate.append(date);
        list.append(str);
        accept();
        hide();
    }
}

void Note::on_buttonBox_rejected()
{
    reject();
}
