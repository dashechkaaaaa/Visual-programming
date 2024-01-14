/********************************************************************************
** Form generated from reading UI file 'registration.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_H
#define UI_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Registration
{
public:
    QWidget *gridLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *loginReg;
    QLineEdit *loginlineReg;
    QFormLayout *formLayout;
    QLabel *passReg;
    QLineEdit *passlineReg;
    QPushButton *save;

    void setupUi(QDialog *Registration)
    {
        if (Registration->objectName().isEmpty())
            Registration->setObjectName(QStringLiteral("Registration"));
        Registration->resize(385, 466);
        Registration->setStyleSheet(QStringLiteral("background-color: #FFE4E1;"));
        gridLayoutWidget = new QWidget(Registration);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(100, 170, 184, 86));
        horizontalLayout = new QHBoxLayout(gridLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        loginReg = new QLabel(gridLayoutWidget);
        loginReg->setObjectName(QStringLiteral("loginReg"));
        loginReg->setStyleSheet(QLatin1String("font: 75 10pt \"Palatino Linotype\";\n"
"background-color: #FFC0CB;"));

        horizontalLayout_2->addWidget(loginReg);

        loginlineReg = new QLineEdit(gridLayoutWidget);
        loginlineReg->setObjectName(QStringLiteral("loginlineReg"));
        loginlineReg->setStyleSheet(QLatin1String("border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: #D8BFD8;\n"
"    selection-background-color: darkgray;"));

        horizontalLayout_2->addWidget(loginlineReg);


        verticalLayout->addLayout(horizontalLayout_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        passReg = new QLabel(gridLayoutWidget);
        passReg->setObjectName(QStringLiteral("passReg"));
        passReg->setStyleSheet(QLatin1String("font: 75 10pt \"Palatino Linotype\";\n"
"background-color: #FFC0CB;"));

        formLayout->setWidget(0, QFormLayout::LabelRole, passReg);

        passlineReg = new QLineEdit(gridLayoutWidget);
        passlineReg->setObjectName(QStringLiteral("passlineReg"));
        passlineReg->setStyleSheet(QLatin1String("border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: #D8BFD8;\n"
"    selection-background-color: darkgray;"));

        formLayout->setWidget(0, QFormLayout::FieldRole, passlineReg);


        verticalLayout->addLayout(formLayout);

        save = new QPushButton(gridLayoutWidget);
        save->setObjectName(QStringLiteral("save"));
        save->setStyleSheet(QLatin1String("font: 75 10pt \"Palatino Linotype\";\n"
"background-color: #FFC0CB;\n"
""));

        verticalLayout->addWidget(save);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Registration);

        QMetaObject::connectSlotsByName(Registration);
    } // setupUi

    void retranslateUi(QDialog *Registration)
    {
        Registration->setWindowTitle(QApplication::translate("Registration", "Dialog", nullptr));
        loginReg->setText(QApplication::translate("Registration", "\320\233\320\276\320\263\320\270\320\275  ", nullptr));
        passReg->setText(QApplication::translate("Registration", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        save->setText(QApplication::translate("Registration", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Registration: public Ui_Registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H
