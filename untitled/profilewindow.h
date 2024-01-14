#ifndef PROFILEWINDOW_H
#define PROFILEWINDOW_H

#include <QDialog>
#include <QListWidget>
#include <QString>
#include <humandata.h>
#include "currentnote.h"

namespace Ui {
class ProfileWindow;

}
class HumanData;
class CurrentNote;
class ProfileWindow : public QDialog
{
    Q_OBJECT

public:
    QString userId;
    HumanData *human;
    CurrentNote *currentWindow;
    explicit ProfileWindow(QWidget *parent = 0);
    ~ProfileWindow();

private slots:

    void on_listWidget_itemClicked(QListWidgetItem *item);

private:
    Ui::ProfileWindow *ui;
    QListWidgetItem *items;

public slots:
    void getIdFromSecondWindow(QString newId);

signals:
    void sendIdToHumanData(QString);
    void sendIdCurrentNote(QString);
};

#endif // PROFILEWINDOW_H
