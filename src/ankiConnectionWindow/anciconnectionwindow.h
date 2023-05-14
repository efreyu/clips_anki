#ifndef ANCICONNECTIONWINDOW_H
#define ANCICONNECTIONWINDOW_H

#include <QMainWindow>

namespace Ui {
class AnciConnectionWindow;
}

class AnciConnectionWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AnciConnectionWindow(QWidget *parent = nullptr);
    ~AnciConnectionWindow();

private:
    Ui::AnciConnectionWindow *ui;
};

#endif // ANCICONNECTIONWINDOW_H
