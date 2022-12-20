#ifndef keys_h
#define keys_h

#include "window.h"
#include <QPushButton>

class whiteKey : public MainWindow {
	Q_OBJECT

public:
	whiteKey();

private slots:
	void playWhiteNote(int n);
	void releaseNote();

private:
	QPushButton *wKey[7];

};

class blackKey : public whiteKey {
	Q_OBJECT

public:
	blackKey();

private slots:
	void playBlackNote(int n);
	void releaseNote();
	
private:
	QPushButton *bKey[5];
};

#endif
