/********************************************************************************
** Form generated from reading UI file 'profilewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEWINDOW_H
#define UI_PROFILEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_ProfileWindow
{
public:
    QListWidget *listWidget;

    void setupUi(QDialog *ProfileWindow)
    {
        if (ProfileWindow->objectName().isEmpty())
            ProfileWindow->setObjectName(QStringLiteral("ProfileWindow"));
        ProfileWindow->resize(447, 338);
        ProfileWindow->setStyleSheet(QStringLiteral("background-color: #FFE4E1;"));
        listWidget = new QListWidget(ProfileWindow);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(90, 60, 256, 192));
        listWidget->setStyleSheet(QLatin1String("background-color: #FFF0F5;\n"
"font: 75 10pt \"Palatino Linotype\";\n"
"border: 1px solid gray;\n"
"   border-radius: 3px;\n"
"   margin: 10px;\n"
"   padding: 4px;"));

        retranslateUi(ProfileWindow);

        QMetaObject::connectSlotsByName(ProfileWindow);
    } // setupUi

    void retranslateUi(QDialog *ProfileWindow)
    {
        ProfileWindow->setWindowTitle(QApplication::translate("ProfileWindow", "Dialog", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("ProfileWindow", "\320\234\320\276\320\270 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("ProfileWindow", "\320\242\320\265\320\272\321\203\321\211\320\270\320\265 \321\206\320\265\320\273\320\270", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class ProfileWindow: public Ui_ProfileWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEWINDOW_H
