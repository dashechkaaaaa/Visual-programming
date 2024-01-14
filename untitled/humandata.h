#ifndef HUMANDATA_H
#define HUMANDATA_H

#include <QDialog>
#include <QValidator>
#include "mainwindow.h"

namespace Ui {
class HumanData;
}

class HumanData : public QDialog
{
    Q_OBJECT

public:
    QString result;
    explicit HumanData(QWidget *parent = 0);
    ~HumanData();

private slots:

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::HumanData *ui;
    QRegExpValidator validFirstName;
    QRegExpValidator validSecondName;

public slots:
    void getIdFromProfileWindow(QString newId);
};

#endif // HUMANDATA_H
