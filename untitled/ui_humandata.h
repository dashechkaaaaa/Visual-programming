/********************************************************************************
** Form generated from reading UI file 'humandata.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HUMANDATA_H
#define UI_HUMANDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HumanData
{
public:
    QFormLayout *formLayout;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QLabel *aboutMe;
    QTextEdit *textEdit;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *dateOfBrd;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *first;
    QLineEdit *firstLine;
    QHBoxLayout *horizontalLayout;
    QLabel *second;
    QLineEdit *secondLine;
    QDialogButtonBox *buttonBox;
    QPushButton *pushButton_2;

    void setupUi(QDialog *HumanData)
    {
        if (HumanData->objectName().isEmpty())
            HumanData->setObjectName(QStringLiteral("HumanData"));
        HumanData->resize(500, 400);
        HumanData->setStyleSheet(QStringLiteral("background-color: #FFE4E1;"));
        formLayout = new QFormLayout(HumanData);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButton = new QPushButton(HumanData);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String("font: 75 10pt \"Palatino Linotype\";\n"
"background-color: #FFC0CB;\n"
""));

        verticalLayout_2->addWidget(pushButton);

        aboutMe = new QLabel(HumanData);
        aboutMe->setObjectName(QStringLiteral("aboutMe"));
        aboutMe->setStyleSheet(QLatin1String("font: 75 10pt \"Palatino Linotype\";\n"
"background-color: #FFC0CB;"));

        verticalLayout_2->addWidget(aboutMe);

        textEdit = new QTextEdit(HumanData);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setStyleSheet(QLatin1String("border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: #D8BFD8;\n"
"    selection-background-color: darkgray;"));

        verticalLayout_2->addWidget(textEdit);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        dateOfBrd = new QLabel(HumanData);
        dateOfBrd->setObjectName(QStringLiteral("dateOfBrd"));
        dateOfBrd->setStyleSheet(QLatin1String("font: 75 10pt \"Palatino Linotype\";\n"
"background-color: #FFC0CB;"));

        horizontalLayout_3->addWidget(dateOfBrd);

        dateEdit = new QDateEdit(HumanData);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setStyleSheet(QLatin1String("border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: #D8BFD8;\n"
"    selection-background-color: darkgray;"));
        dateEdit->setCurrentSectionIndex(2);

        horizontalLayout_3->addWidget(dateEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        first = new QLabel(HumanData);
        first->setObjectName(QStringLiteral("first"));
        first->setStyleSheet(QLatin1String("font: 75 10pt \"Palatino Linotype\";\n"
"background-color: #FFC0CB;"));

        horizontalLayout_2->addWidget(first);

        firstLine = new QLineEdit(HumanData);
        firstLine->setObjectName(QStringLiteral("firstLine"));
        firstLine->setStyleSheet(QLatin1String("border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: #D8BFD8;\n"
"    selection-background-color: darkgray;"));

        horizontalLayout_2->addWidget(firstLine);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        second = new QLabel(HumanData);
        second->setObjectName(QStringLiteral("second"));
        second->setStyleSheet(QLatin1String("font: 75 10pt \"Palatino Linotype\";\n"
"background-color: #FFC0CB;"));

        horizontalLayout->addWidget(second);

        secondLine = new QLineEdit(HumanData);
        secondLine->setObjectName(QStringLiteral("secondLine"));
        secondLine->setStyleSheet(QLatin1String("border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: #D8BFD8;\n"
"    selection-background-color: darkgray;"));

        horizontalLayout->addWidget(secondLine);


        horizontalLayout_4->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        formLayout->setLayout(1, QFormLayout::FieldRole, gridLayout);

        buttonBox = new QDialogButtonBox(HumanData);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStyleSheet(QLatin1String("font: 75 10pt \"Palatino Linotype\";\n"
"background-color: #FFC0CB;\n"
""));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        formLayout->setWidget(3, QFormLayout::FieldRole, buttonBox);

        pushButton_2 = new QPushButton(HumanData);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        formLayout->setWidget(2, QFormLayout::FieldRole, pushButton_2);


        retranslateUi(HumanData);

        QMetaObject::connectSlotsByName(HumanData);
    } // setupUi

    void retranslateUi(QDialog *HumanData)
    {
        HumanData->setWindowTitle(QApplication::translate("HumanData", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("HumanData", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\216 \320\276 \321\201\320\265\320\261\320\265", nullptr));
        aboutMe->setText(QApplication::translate("HumanData", "                                                                      \320\236 \321\201\320\265\320\261\320\265", nullptr));
        dateOfBrd->setText(QApplication::translate("HumanData", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        first->setText(QApplication::translate("HumanData", "\320\230\320\274\321\217", nullptr));
        second->setText(QApplication::translate("HumanData", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        pushButton_2->setText(QApplication::translate("HumanData", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HumanData: public Ui_HumanData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HUMANDATA_H
