/********************************************************************************
** Form generated from reading UI file 'helpbrowser.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPBROWSER_H
#define UI_HELPBROWSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_HelpBrowser
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *back;
    QPushButton *home;
    QPushButton *forward;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *HelpBrowser)
    {
        if (HelpBrowser->objectName().isEmpty())
            HelpBrowser->setObjectName(QStringLiteral("HelpBrowser"));
        HelpBrowser->resize(448, 364);
        gridLayout = new QGridLayout(HelpBrowser);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        back = new QPushButton(HelpBrowser);
        back->setObjectName(QStringLiteral("back"));

        horizontalLayout->addWidget(back);

        home = new QPushButton(HelpBrowser);
        home->setObjectName(QStringLiteral("home"));

        horizontalLayout->addWidget(home);

        forward = new QPushButton(HelpBrowser);
        forward->setObjectName(QStringLiteral("forward"));

        horizontalLayout->addWidget(forward);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        textBrowser = new QTextBrowser(HelpBrowser);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        gridLayout->addWidget(textBrowser, 1, 0, 1, 1);


        retranslateUi(HelpBrowser);

        QMetaObject::connectSlotsByName(HelpBrowser);
    } // setupUi

    void retranslateUi(QDialog *HelpBrowser)
    {
        HelpBrowser->setWindowTitle(QApplication::translate("HelpBrowser", "Dialog", nullptr));
        back->setText(QApplication::translate("HelpBrowser", "Back", nullptr));
        home->setText(QApplication::translate("HelpBrowser", "Home", nullptr));
        forward->setText(QApplication::translate("HelpBrowser", "Forward", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelpBrowser: public Ui_HelpBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPBROWSER_H
