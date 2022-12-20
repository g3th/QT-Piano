#include "keys.h"
#include <QApplication>

int main(int argc, char* argv[]){
	QApplication PianoGUI(argc, argv);
	blackKey myPiano;
	myPiano.setFixedSize(500,400);
	myPiano.show();
	return PianoGUI.exec();
}
