/********************************************************************************
** Form generated from reading UI file 'currentnote.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURRENTNOTE_H
#define UI_CURRENTNOTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CurrentNote
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *complited;
    QPushButton *change;
    QPushButton *remove;
    QTableWidget *tableWidget_2;
    QTableWidget *tableWidget;
    QTableWidget *tableWidget_3;

    void setupUi(QDialog *CurrentNote)
    {
        if (CurrentNote->objectName().isEmpty())
            CurrentNote->setObjectName(QStringLiteral("CurrentNote"));
        CurrentNote->resize(953, 450);
        CurrentNote->setStyleSheet(QStringLiteral("background-color: #FFE4E1;"));
        widget = new QWidget(CurrentNote);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(160, 410, 583, 30));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String("background-color: #FFC0CB;\n"
"     border-style: outset;\n"
"     border-width: 2px;\n"
"     border-radius: 8px;\n"
"     border-color: beige;\n"
"     font: bold 10px;\n"
"     min-width: 10em;\n"
"     padding: 6px;"));

        horizontalLayout_2->addWidget(pushButton);

        complited = new QPushButton(widget);
        complited->setObjectName(QStringLiteral("complited"));
        complited->setStyleSheet(QLatin1String("background-color: #FFC0CB;\n"
"     border-style: outset;\n"
"     border-width: 2px;\n"
"     border-radius: 8px;\n"
"     border-color: beige;\n"
"     font: bold 10px;\n"
"     min-width: 10em;\n"
"     padding: 6px;"));

        horizontalLayout_2->addWidget(complited);

        change = new QPushButton(widget);
        change->setObjectName(QStringLiteral("change"));
        change->setStyleSheet(QLatin1String("background-color: #FFC0CB;\n"
"     border-style: outset;\n"
"     border-width: 2px;\n"
"     border-radius: 8px;\n"
"     border-color: beige;\n"
"     font: bold 10px;\n"
"     min-width: 10em;\n"
"     padding: 6px;"));

        horizontalLayout_2->addWidget(change);

        remove = new QPushButton(widget);
        remove->setObjectName(QStringLiteral("remove"));
        remove->setStyleSheet(QLatin1String("background-color: #FFC0CB;\n"
"     border-style: outset;\n"
"     border-width: 2px;\n"
"     border-radius: 8px;\n"
"     border-color: beige;\n"
"     font: bold 10px;\n"
"     min-width: 10em;\n"
"     padding: 6px;"));

        horizontalLayout_2->addWidget(remove);

        tableWidget_2 = new QTableWidget(CurrentNote);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(730, 10, 211, 391));
        tableWidget_2->setStyleSheet(QLatin1String("QTableWidget{\n"
"font: 75 10pt \"Palatino Linotype\";\n"
"background-color:#FFF5EE;\n"
"alternate-background-color:#F5F5F5;\n"
"}"));
        tableWidget_2->setDragEnabled(true);
        tableWidget_2->setDragDropMode(QAbstractItemView::DragDrop);
        tableWidget_2->setAlternatingRowColors(false);
        tableWidget_2->setSortingEnabled(false);
        tableWidget_2->setWordWrap(true);
        tableWidget = new QTableWidget(CurrentNote);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 491, 391));
        tableWidget->setStyleSheet(QLatin1String("QTableWidget{\n"
"font: 75 10pt \"Palatino Linotype\";\n"
"background-color:#FFF5EE;\n"
"alternate-background-color:#F5F5F5;\n"
"}"));
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget->setDragEnabled(true);
        tableWidget_3 = new QTableWidget(CurrentNote);
        tableWidget_3->setObjectName(QStringLiteral("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(510, 10, 211, 391));
        tableWidget_3->setStyleSheet(QLatin1String("QTableWidget{\n"
"font: 75 10pt \"Palatino Linotype\";\n"
"background-color:#FFF5EE;\n"
"alternate-background-color:#F5F5F5;\n"
"}"));
        tableWidget_3->setHorizontalScrollMode(QAbstractItemView::ScrollPerItem);
        tableWidget_3->setGridStyle(Qt::SolidLine);
        tableWidget_3->setWordWrap(true);

        retranslateUi(CurrentNote);

        QMetaObject::connectSlotsByName(CurrentNote);
    } // setupUi

    void retranslateUi(QDialog *CurrentNote)
    {
        CurrentNote->setWindowTitle(QApplication::translate("CurrentNote", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("CurrentNote", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272 \321\206\320\265\320\273\320\265\320\271", nullptr));
        complited->setText(QApplication::translate("CurrentNote", "\320\222\321\213\320\277\320\276\320\273\320\275\320\270\321\202\321\214", nullptr));
        change->setText(QApplication::translate("CurrentNote", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        remove->setText(QApplication::translate("CurrentNote", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CurrentNote: public Ui_CurrentNote {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURRENTNOTE_H
