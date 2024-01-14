/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SecondWindow
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QCalendarWidget *calendarWidget;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *SecondWindow)
    {
        if (SecondWindow->objectName().isEmpty())
            SecondWindow->setObjectName(QStringLiteral("SecondWindow"));
        SecondWindow->resize(442, 338);
        SecondWindow->setStyleSheet(QStringLiteral("background-color: #FFE4E1;"));
        gridLayout = new QGridLayout(SecondWindow);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        calendarWidget = new QCalendarWidget(SecondWindow);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setStyleSheet(QLatin1String("font: 75 10pt \"Palatino Linotype\";\n"
"QCalendarWidget QToolButton {\n"
"  	color: black;\n"
"  	font-size:15px;\n"
"  	icon-size: 30px, 30px;\n"
"  	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #BC8F8F, stop: 1 #BC8F8F);\n"
"  }\n"
"  QCalendarWidget QMenu {\n"
"  	color: black;\n"
"  	font-size: 10px;\n"
"  	background-color: #FFF8DC;\n"
"  }\n"
"  QCalendarWidget QSpinBox { \n"
"  	font-size:15px; \n"
"  	color: black; \n"
"  	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #BC8F8F, stop: 1 #BC8F8F);\n"
"  	selection-background-color: #BC8F8F;\n"
"  	selection-color: #FFF8DC;\n"
"  }\n"
"  QCalendarWidget QSpinBox::up-button { subcontrol-origin: border;  subcontrol-position: top right;  width:40px; }\n"
"  QCalendarWidget QSpinBox::down-button {subcontrol-origin: border; subcontrol-position: bottom right;  width:65px;}\n"
"  QCalendarWidget QSpinBox::up-arrow { width:30px;  height:30px; }\n"
"  QCalendarWidget QSpinBox::down-arrow { width:30px;  height:30px; }\n"
"  "
                        " \n"
"  /* header row */\n"
"  QCalendarWidget QWidget { alternate-background-color: #BC8F8F; }\n"
"   \n"
"  /* normal days */\n"
"  QCalendarWidget QAbstractItemView:enabled \n"
"  {\n"
"  	font-size:15px;  \n"
"  	color: black;  \n"
"  	background-color: black;  \n"
"  	selection-background-color: #800000; \n"
"  	selection-color: rgb(0, 255, 0); \n"
"  }\n"
"   \n"
"  /* days in other months */\n"
"  /* navigation bar */\n"
"QCalendarWidget QWidget#qt_calendar_navigationbar\n"
"{ \n"
"  background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #BC8F8F, stop: 1 #BC8F8F); \n"
"}\n"
"\n"
"QCalendarWidget QAbstractItemView:disabled \n"
"{ \n"
"color: #800000; \n"
"}"));

        verticalLayout->addWidget(calendarWidget);

        pushButton = new QPushButton(SecondWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String("background-color: #FFC0CB;\n"
"     border-style: outset;\n"
"     border-width: 2px;\n"
"     border-radius: 8px;\n"
"     border-color: beige;\n"
"     font: bold 10px;\n"
"     min-width: 10em;\n"
"     padding: 6px;\n"
""));

        verticalLayout->addWidget(pushButton);

        label = new QLabel(SecondWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("background-color: #FFE4E1;"));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../../Qt/Qt5.10.0/61389fc4dfe1bdf9be614a41f6e7b52e.jpg")));
        label->setMargin(3);

        verticalLayout->addWidget(label);


        gridLayout->addLayout(verticalLayout, 0, 0, 2, 1);


        retranslateUi(SecondWindow);

        QMetaObject::connectSlotsByName(SecondWindow);
    } // setupUi

    void retranslateUi(QDialog *SecondWindow)
    {
        SecondWindow->setWindowTitle(QApplication::translate("SecondWindow", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("SecondWindow", "\320\234\320\225\320\235\320\256", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SecondWindow: public Ui_SecondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
