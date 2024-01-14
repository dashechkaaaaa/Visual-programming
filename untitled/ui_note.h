/********************************************************************************
** Form generated from reading UI file 'note.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTE_H
#define UI_NOTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Note
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *note;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QDateEdit *date;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Note)
    {
        if (Note->objectName().isEmpty())
            Note->setObjectName(QStringLiteral("Note"));
        Note->resize(476, 397);
        Note->setStyleSheet(QStringLiteral("background-color: #FFE4E1;"));
        gridLayout = new QGridLayout(Note);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(Note);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        note = new QLineEdit(groupBox);
        note->setObjectName(QStringLiteral("note"));
        note->setStyleSheet(QLatin1String("border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: #D8BFD8;\n"
"    selection-background-color: darkgray;"));

        verticalLayout_2->addWidget(note);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("font: 75 10pt \"Palatino Linotype\";\n"
"background-color: #FFC0CB;\n"
""));

        horizontalLayout->addWidget(label_2);

        date = new QDateEdit(groupBox);
        date->setObjectName(QStringLiteral("date"));
        date->setStyleSheet(QLatin1String("border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: #D8BFD8;\n"
"    selection-background-color: darkgray;"));

        horizontalLayout->addWidget(date);


        verticalLayout_2->addLayout(horizontalLayout);


        gridLayout_2->addLayout(verticalLayout_2, 1, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("background-color: #FFC0CB;\n"
"font: 75 10pt \"Palatino Linotype\";"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(groupBox);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStyleSheet(QLatin1String("font: 75 10pt \"Palatino Linotype\";\n"
"background-color: #FFC0CB;\n"
""));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        gridLayout_2->addWidget(buttonBox, 2, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(Note);

        QMetaObject::connectSlotsByName(Note);
    } // setupUi

    void retranslateUi(QDialog *Note)
    {
        Note->setWindowTitle(QApplication::translate("Note", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QApplication::translate("Note", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\264\320\260\321\202\321\203 \320\276\320\272\320\276\320\275\321\207\320\260\320\275\320\270\321\217 \321\206\320\265\320\273\320\270", nullptr));
        label->setText(QApplication::translate("Note", "                                                           \320\241\320\276\320\267\320\264\320\260\320\271\321\202\320\265 \321\206\320\265\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Note: public Ui_Note {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTE_H
