#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QDialog>
#include <QValidator>

namespace Ui {
class Registration;
}

class Registration : public QDialog
{
    Q_OBJECT

public:
    explicit Registration(QWidget *parent = 0);
    ~Registration();

private slots:
    void on_save_clicked();

private:
    Ui::Registration *ui;
    QRegExpValidator validLoginReg;
    QRegExpValidator validPasswordReg;
};

#endif // REGISTRATION_H
