#ifndef ANKICONNECTIONWINDOW_H
#define ANKICONNECTIONWINDOW_H

#include <QDialog>

namespace Ui {
class AnkiConnectionWindow;
}

class AnkiConnectionWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AnkiConnectionWindow(QWidget *parent = nullptr);
    ~AnkiConnectionWindow();

private:
    Ui::AnkiConnectionWindow *ui;
};

#endif // ANKICONNECTIONWINDOW_H
