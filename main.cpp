#include "piano.h"
#include <QApplication>

int main(int argc, char* argv[]){
	QApplication PianoGUI(argc, argv);
	MainWindow myPiano;
	myPiano.setFixedSize(500,200);
	myPiano.show();
	return PianoGUI.exec();
}
