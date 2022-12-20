#include "keys.h"
#include <QApplication>
#include <QFile>

int main(int argc, char* argv[]){
	QApplication PianoGUI(argc, argv);
	
	QFile styles("gui_style.qss");
	styles.open(QFile::ReadOnly);
	QString css(styles.readAll());
	
	PianoGUI.setStyleSheet(css);
	blackKey myPiano;
	myPiano.setFixedSize(498,400);
	myPiano.show();
	
	return PianoGUI.exec();
}
