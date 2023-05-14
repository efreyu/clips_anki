#include "anciconnectionwindow.h"
#include "../../ui/ui_anciconnectionwindow.h"

AnciConnectionWindow::AnciConnectionWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AnciConnectionWindow)
{
    ui->setupUi(this);
}

AnciConnectionWindow::~AnciConnectionWindow()
{
    delete ui;
}
