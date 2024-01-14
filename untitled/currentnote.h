#ifndef CURRENTNOTE_H
#define CURRENTNOTE_H

#include <QDialog>
#include <QStringList>
#include <QTableWidgetItem>
namespace Ui {
class CurrentNote;
}

class CurrentNote : public QDialog
{
    Q_OBJECT

public:
    int temp;
    int tempChange;
    QString strTemp;
    QString strTempChange;
    QStringList taskId;
    QString userCurrentId;
    QString tableTask;
    QStringList tasks;
    QStringList newTask;
    explicit CurrentNote(QWidget *parent = 0);
    ~CurrentNote();

private:
    Ui::CurrentNote *ui;

private:
    void createTableWidget();

public slots:
    void getIdCurrentNote(QString newIdCurrentNote);

private slots:
    void on_pushButton_clicked();
    void on_complited_clicked();
    void on_tableWidget_itemClicked(QTableWidgetItem *item);
    void on_remove_clicked();
    void on_change_clicked();
    void on_tableWidget_itemChanged(QTableWidgetItem *item);
    //QList<QTableWidgetItem *> QTableWidget::findItems(const QString &text, Qt::MatchFlags flags);
    //void on_pushButton_2_clicked();
};

#endif // CURRENTNOTE_H
