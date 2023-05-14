#pragma once
#ifndef CLIPS_ANKI_CLIPSAPPLICATION_H
#define CLIPS_ANKI_CLIPSAPPLICATION_H

#include <QApplication>
#include "mainWindow/clipsanki.h"

class ClipsApplication : public QApplication {
Q_OBJECT

public:
	ClipsApplication(int& argc, char** argv) : QApplication(argc, argv) {
		initTranslator();
	}
	~ClipsApplication() override;
	int run();
private:
	void initTranslator();

	bool _isConnected = false;
	ClipsAnki* _clipsAnki = nullptr;
};


#endif //CLIPS_ANKI_CLIPSAPPLICATION_H
