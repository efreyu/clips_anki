#include "clipsanki.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "clips_anki_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    ClipsAnki w;
    w.show();
    return a.exec();
	// 1 видео в клипы (100)
	// 2 вытащить аудио в мп3
	// 3 вытащить оба саба
	// + взять скриншот
}
