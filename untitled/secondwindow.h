#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QDialog>
#include <QDate>
#include <QCalendarWidget>
#include "profilewindow.h"
#include "note.h"

namespace Ui {
class SecondWindow;
}
class ProfileWindow;
class SecondWindow : public QDialog
{
    Q_OBJECT

public:
    ProfileWindow *profileWindow;
    QString userId;
    QString userNote;
    QString startDate;
    explicit SecondWindow(QWidget *parent = 0);
    ~SecondWindow();

private slots:
    void on_pushButton_clicked();
    void on_calendarWidget_clicked(const QDate &date);

private:
    Ui::SecondWindow *ui;
    QDate dateCal;
    QCalendarWidget *calendar;
    QStringList dateStr;

public slots:
    void getId(QString newId);
    //void getNote(QString note);

signals:
    void sendIdToProfileWindow(QString);
};

#endif // SECONDWINDOW_H
