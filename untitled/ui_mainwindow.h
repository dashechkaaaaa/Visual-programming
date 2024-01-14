/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *loginline;
    QLineEdit *login;
    QHBoxLayout *horizontalLayout_2;
    QLabel *pass;
    QLineEdit *passline;
    QPushButton *auth;
    QPushButton *registr;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(385, 466);
        MainWindow->setStyleSheet(QStringLiteral("background-color: #FFE4E1;"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(90, 130, 211, 131));
        groupBox->setStyleSheet(QLatin1String("width: 300px;\n"
"height: 200px;\n"
"border: 1px ridge groove pink;\n"
"box-shadow: 2px 2px 4px rgba(0, 0, 0, 0.4);"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        loginline = new QLabel(groupBox);
        loginline->setObjectName(QStringLiteral("loginline"));
        loginline->setStyleSheet(QLatin1String("font: 75 10pt \"Palatino Linotype\";\n"
"background-color: #FFC0CB;\n"
""));

        horizontalLayout->addWidget(loginline);

        login = new QLineEdit(groupBox);
        login->setObjectName(QStringLiteral("login"));
        login->setStyleSheet(QLatin1String("border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: #D8BFD8;\n"
"    selection-background-color: darkgray;"));

        horizontalLayout->addWidget(login);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pass = new QLabel(groupBox);
        pass->setObjectName(QStringLiteral("pass"));
        pass->setStyleSheet(QLatin1String("font: 75 10pt \"Palatino Linotype\";\n"
"background-color: #FFC0CB;\n"
""));

        horizontalLayout_2->addWidget(pass);

        passline = new QLineEdit(groupBox);
        passline->setObjectName(QStringLiteral("passline"));
        passline->setStyleSheet(QLatin1String("border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: #D8BFD8;\n"
"    selection-background-color: darkgray;"));

        horizontalLayout_2->addWidget(passline);


        verticalLayout->addLayout(horizontalLayout_2);

        auth = new QPushButton(groupBox);
        auth->setObjectName(QStringLiteral("auth"));
        auth->setStyleSheet(QLatin1String("font: 75 10pt \"Palatino Linotype\";\n"
"background-color: #FFC0CB;\n"
""));

        verticalLayout->addWidget(auth);

        registr = new QPushButton(groupBox);
        registr->setObjectName(QStringLiteral("registr"));
        registr->setStyleSheet(QLatin1String("font: 75 10pt \"Palatino Linotype\";\n"
"background-color: #FFC0CB;\n"
""));

        verticalLayout->addWidget(registr);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 10, 292, 20));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("font: 75 10pt \"Palatino Linotype\";\n"
"background-color: #FFC0CB;"));

        horizontalLayout_3->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("font: 75 10pt \"Palatino Linotype\";\n"
"background-color: #FFC0CB;"));

        horizontalLayout_3->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("font: 75 10pt \"Palatino Linotype\";\n"
"background-color: #FFC0CB;"));

        horizontalLayout_3->addWidget(label_3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 385, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        loginline->setText(QApplication::translate("MainWindow", "\320\233\320\276\320\263\320\270\320\275  ", nullptr));
        pass->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        auth->setText(QApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        registr->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \321\200\320\260\320\261\320\276\321\202\321\213 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
