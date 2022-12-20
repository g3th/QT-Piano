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
	QPushButton *wKey[26];

};

class blackKey : public whiteKey {
	Q_OBJECT

public:
	blackKey();

private slots:
	void playBlackNote(int n);
	void releaseNote();
	
private:
	QPushButton *bKey[18];
};

#endif
