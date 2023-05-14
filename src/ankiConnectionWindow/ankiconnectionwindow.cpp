#include "ankiconnectionwindow.h"
#include "../../ui/ui_ankiconnectionwindow.h"

AnkiConnectionWindow::AnkiConnectionWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AnkiConnectionWindow)
{
    ui->setupUi(this);
}

AnkiConnectionWindow::~AnkiConnectionWindow()
{
    delete ui;
}
