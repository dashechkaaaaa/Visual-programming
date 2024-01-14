#ifndef NOTE_H
#define NOTE_H

#include <QDialog>
#include <QString>
#include <QStringList>
#include <QValidator>
#include "secondwindow.h"

namespace Ui {
class Note;
}
//class SecondWindow;

class Note : public QDialog
{
    Q_OBJECT

public:
    //SecondWindow *sWindow;
    QStringList list = {};
    QStringList listDate = {};
    explicit Note(QWidget *parent = 0);
    ~Note();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::Note *ui;
    //QStringList list = {};
    QRegExpValidator space;

signals:
    //void sendNote(QString str);
};

#endif // NOTE_H
