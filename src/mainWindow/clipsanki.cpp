#include "clipsanki.h"
#include "../../ui/ui_clipsanki.h"

ClipsAnki::ClipsAnki(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ClipsAnki)
{
    ui->setupUi(this);
}

ClipsAnki::~ClipsAnki()
{
    delete ui;
}

