#include "humandata.h"
#include "ui_humandata.h"
#include "mainwindow.h"
#include <QtSql>
#include <QMessageBox>
#include <QDebug>
#include <QValidator>

HumanData::HumanData(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HumanData),
    validFirstName(QRegExp("\\S*")),
    validSecondName(QRegExp("\\S*"))
{

    ui->setupUi(this);
    setWindowTitle("Данные пользователя");
    //ui->firstLine->setValidator(&validFirstName);
    //ui->secondLine->setValidator(&validSecondName);
}

HumanData::~HumanData()
{
    delete ui;
}

void HumanData::getIdFromProfileWindow(QString newId)
{
    result = newId;
    qDebug() << "getIdHuman HumanData:" << result;
    //QMessageBox::information(this, result, result);
}


void HumanData::on_buttonBox_accepted()
{
    //QMessageBox::information(this, "OnButtonBox_accepted", "OnButtonBox_accepted");
    MainWindow mainWindow;
    QString firstName = ui->firstLine->text();
    QString secondName = ui->secondLine->text();
    QString date = ui->dateEdit->text();
    QString description = ui->textEdit->toPlainText();
    qDebug() << result;
    qDebug() << firstName;
    qDebug() << secondName;
    qDebug() << date;
    qDebug() << description;
    if(!mainWindow.connOpen()) {
        qDebug() << "Failed to open the database userData";
        return;
    }
    else {
        qDebug() << "Database connected userData";
    }
    mainWindow.connOpen();
    QSqlQuery dataQueryInsert;
    dataQueryInsert.prepare("insert into userData (id, firstName, secondName, dateOfBirth, description) values ('"+result+"', '"+firstName+"', '"+secondName+"', '"+date+"', '"+description+"')");
    if(dataQueryInsert.exec()){
        qDebug() << "Users data saved";
        //hide();
        accept();
        mainWindow.connClose();
    }

}

void HumanData::on_buttonBox_rejected()
{
    reject();
    ProfileWindow pWindow;
    pWindow.setModal(true);
    pWindow.exec();
}

void HumanData::on_pushButton_clicked()
{
    QTextCodec::setCodecForLocale( QTextCodec::codecForName( "UTF-8" ) );

        static const char* const FILE_NAME = "aboutMe.txt";
        QFile out( FILE_NAME );
        if( out.open( QIODevice::WriteOnly ) ) {
            QTextStream stream( &out );
            stream << ui->textEdit->toPlainText();
            out.close();
        }

        QFile in( FILE_NAME );
        if( in.open( QIODevice::ReadOnly ) ) {
            QTextStream stream( &in );
            qDebug() << stream.readAll();
            in.close();
        }
}

void HumanData::on_pushButton_2_clicked()
{
    QSqlQuery dataQuery;
    QDate date;
    if(!dataQuery.exec())
        qDebug() << dataQuery.lastError();
    if(dataQuery.exec("SELECT firstName, secondName, dateOfBirth, description from userData where id='"+result+"'")) {
        while(dataQuery.next()) {
            qDebug() << dataQuery.value(2).toString();
            ui->firstLine->setText(dataQuery.value(0).toString());
            ui->secondLine->setText(dataQuery.value(1).toString());
            QString dateString = dataQuery.value(2).toString();
            date = QDate::fromString(dateString, "dd.MM.yyyy");
//            QString strDate = dataQuery.value(2).toString();
//            QDate date = QDate::fromString(strDate);
//            QDateEdit* dateEdit = ui->dateEdit;
//            dateEdit->setDate(date);
            ui->dateEdit->setDate(date);
            ui->textEdit->setText(dataQuery.value(3).toString());
        }
    }
    else {
        qDebug() << dataQuery.lastError();
    }
}
