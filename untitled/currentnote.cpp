#include "currentnote.h"
#include "ui_currentnote.h"
#include <QDebug>
#include <QSqlQuery>
#include <QCheckBox>
#include <QHBoxLayout>
#include <QStringList>
#include <QSqlQueryModel>
#include "mainwindow.h"
#include <QList>
#include <QTableWidgetItem>
#include <QDesktopWidget>


CurrentNote::CurrentNote(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CurrentNote)
{
    ui->setupUi(this);
    QDesktopWidget desktop;
    QRect rect = desktop.availableGeometry(this);
    QPoint center = rect.center();
    int x = center.x() - (width()/2);
    int y = center.y() - (height()/2);
    center.setX(x);
    center.setY(y);
    move(center);
    setWindowTitle("Цели");
}

CurrentNote::~CurrentNote()
{
    delete ui;
}


void CurrentNote::getIdCurrentNote(QString newIdCurrentNote)
{
    userCurrentId = newIdCurrentNote;
}

void CurrentNote::on_pushButton_clicked()
{
    qDebug() << userCurrentId << "getIdCurrentNote";
    const QString dateTime = QDate::currentDate().toString("dd.MM.yyyy");
    MainWindow mWindow;
    mWindow.connOpen();
    QSqlQuery query(mWindow.mydb);
    QString str = "SELECT taskDescription, startDate, endDate from task where userId='"+userCurrentId+"' and endDate > '"+dateTime+"'";
    if(!query.exec(str)){
        qDebug() << "Query execution failed";
        return;
    }

    ui->tableWidget->setColumnCount(3);
    QStringList labels;
    labels << "Цель" << "Начало выполнения" << "Окончание выполнения";
    ui->tableWidget->setHorizontalHeaderLabels(labels);
    ui->tableWidget_2->setColumnCount(1);
    QStringList labelsforTwo;
    labelsforTwo << "Выполнено";
    ui->tableWidget_2->setHorizontalHeaderLabels(labelsforTwo);
    ui->tableWidget_3->setColumnCount(1);
    QStringList labelsforThird;
    labelsforThird << "Провалено";
    ui->tableWidget_3->setHorizontalHeaderLabels(labelsforThird);
    QString strDate = "SELECT taskDescription from task where endDate < '"+dateTime+"'";
    QSqlQuery queryTask;
    if(!queryTask.exec(strDate)){
        qDebug() << "Query execution failed taskDescription";
        return;
    }
    int rowTask = 0;
    while(queryTask.next()){
        ui->tableWidget_3->insertRow(rowTask);
        QTableWidgetItem *failed = new QTableWidgetItem;
        failed->setText(queryTask.value(0).toString());
        ui->tableWidget_3->setItem(rowTask, 0, failed);
        qDebug() << queryTask.value(0).toString();
        //ui->tableWidget_3->resizeColumnsToContents();
        ui->tableWidget_3->horizontalHeader()->setStretchLastSection(true);
        rowTask++;
    }
    QString strComplited = "SELECT * from complited";
    QSqlQuery queryComplited;
    if(!queryComplited.exec(strComplited)){
        qDebug() << "Query execution failed taskComplited";
        return;
    }
    int rowComplitedCount = 0;
    while(queryComplited.next()){
        ui->tableWidget_2->insertRow(rowComplitedCount);
        QTableWidgetItem *greate = new QTableWidgetItem;
        greate->setText(queryComplited.value(0).toString());
        ui->tableWidget_2->setItem(rowComplitedCount, 0, greate);
        ui->tableWidget_2->horizontalHeader()->setStretchLastSection(true);
        rowComplitedCount++;
    }
    int rowCount = 0;
    while(query.next()){
        ui->tableWidget->insertRow(rowCount);
        QTableWidgetItem *task = new QTableWidgetItem;
        QTableWidgetItem *startDate = new QTableWidgetItem;
        QTableWidgetItem *endDate = new QTableWidgetItem;


        task->setText(query.value(0).toString());
        startDate->setText(query.value(1).toString());
        endDate->setText(query.value(2).toString());

        ui->tableWidget->setItem(rowCount, 0, task);
        ui->tableWidget->setItem(rowCount, 1, startDate);
        ui->tableWidget->setItem(rowCount, 2, endDate);
        ui->tableWidget->resizeColumnsToContents();
        ui->tableWidget->horizontalHeader()->setStretchLastSection(true);

        rowCount++;
    }
    mWindow.connClose();
}

void CurrentNote::on_tableWidget_itemClicked(QTableWidgetItem *item)
{
    tasks.clear();
    const int &item1 = ui->tableWidget->row(item);
    temp = item1;
    strTemp = QString::number(temp);
    tasks.append(item->text());
}

void CurrentNote::on_tableWidget_itemChanged(QTableWidgetItem *item)
{
    newTask.clear();
    const int &item2 = ui->tableWidget->row(item);
    temp = item2;
    strTemp = QString::number(temp);

    newTask.append(item->text());
}

void CurrentNote::on_complited_clicked()
{
    MainWindow mainWindow;
    int row = 0;
    QString task = tasks.first();
    while(row != tasks.size()){

        ui->tableWidget_2->insertRow(row);
        QTableWidgetItem *complited = new QTableWidgetItem;
        complited->setText(task);
        mainWindow.connOpen();
        QSqlQuery taskComplited;
        taskComplited.prepare("insert into complited (taskComplited) values ('"+task+"')");
        if(taskComplited.exec()){
            qDebug() << "Complited save";
        }
        else {
            qDebug() << taskComplited.lastError();
        }

        QSqlQuery deleteTask;
        deleteTask.prepare("delete from task where taskDescription='"+task+"'");
        if(deleteTask.exec()){
            qDebug() << "delete task";
        }
        else{
            qDebug() << deleteTask.lastError();
        }
        ui->tableWidget_2->setItem(row, 0, complited);
        ui->tableWidget_2->horizontalHeader()->setStretchLastSection(true);
        row++;
    }
    ui->tableWidget->removeRow(temp);
    tasks.clear();
}

void CurrentNote::on_remove_clicked()
{
    MainWindow mWindow;
    mWindow.connOpen();
    QSqlQuery queryTaskList(mWindow.mydb);
    qDebug() << tasks.first();
    ui->tableWidget->removeRow(temp);
    QString listTask = "DELETE from task where taskDescription='"+tasks.first()+"'";
    if(!queryTaskList.exec(listTask)){
        qDebug() << "Query execution delete taskDescription";
        return;
    }
    ui->tableWidget->removeRow(temp);
    tasks.clear();
    mWindow.connClose();
}

void CurrentNote::on_change_clicked()
{
    MainWindow mWindow;
    mWindow.connOpen();
    QSqlQuery queryNewTask(mWindow.mydb);
    qDebug() << newTask.first() << "on_change_clicked";
    QString listNewTask = "UPDATE task SET taskDescription='"+newTask.first()+"' where taskDescription='"+tasks.first()+"'";
    if(!queryNewTask.exec(listNewTask)){
        qDebug() << "Query execution update taskDescription";
        return;
    }
    mWindow.connClose();
}
