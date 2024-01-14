#include "helpbrowser.h"
#include "ui_helpbrowser.h"
#include <QDir>
#include <QCoreApplication>

HelpBrowser::HelpBrowser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HelpBrowser)
{
    ui->setupUi(this);
    QUrl url = QUrl::fromLocalFile("C:/Users/dashechka/Documents/untitled (2)/untitled/index.html");
        ui->textBrowser->setSource(url);
        ui->textBrowser->setOpenExternalLinks(true);
        ui->textBrowser->setOpenLinks(true);

        connect(ui->back, SIGNAL(clicked()), ui->textBrowser, SLOT(backward()));
        connect(ui->forward, SIGNAL(clicked()), ui->textBrowser, SLOT(forward()));
        connect(ui->home, SIGNAL(clicked()), ui->textBrowser, SLOT(home()));
}

HelpBrowser::~HelpBrowser()
{
    delete ui;
}
