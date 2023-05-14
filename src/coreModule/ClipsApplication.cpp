#include "ClipsApplication.h"
#include <QLocale>
#include <QTranslator>

ClipsApplication::~ClipsApplication() {
	delete _clipsAnki;
}

void ClipsApplication::initTranslator() {
	QTranslator translator;
	const QStringList uiLanguages = QLocale::system().uiLanguages();
	for (const QString &locale : uiLanguages) {
		const QString baseName = "clips_anki_" + QLocale(locale).name();
		if (translator.load(":/i18n/" + baseName)) {
			installTranslator(&translator);
			break;
		}
	}
}

int ClipsApplication::run() {
	_clipsAnki = new ClipsAnki();
	_clipsAnki->show();
	return exec();
}
