#ifndef CLIPSANKI_H
#define CLIPSANKI_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ClipsAnki; }
QT_END_NAMESPACE

class ClipsAnki : public QMainWindow
{
    Q_OBJECT

public:
    ClipsAnki(QWidget *parent = nullptr);
    ~ClipsAnki();
protected:

	bool eventFilter(QObject* obj, QEvent* event) override;

private:
    Ui::ClipsAnki *ui;
};
#endif // CLIPSANKI_H
