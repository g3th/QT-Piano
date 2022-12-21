#include "window.h"
#include "keys.h"
#include "fluid.h"

using namespace std;

whiteKey::whiteKey(){

	startSynth();	
	int key_horizontal_placement = 9;

	for (long unsigned int n = 0; n != sizeof(wKey)/7; ++n){
		wKey[n] = new QPushButton(this);
		wKey[n]->setStyleSheet("QPushButton {background-color: white; border: 1px solid black;} QPushButton:pressed {background-color: #DCDCDC;}");
		wKey[n]->setGeometry(key_horizontal_placement,216, 30, 180);
		key_horizontal_placement += 31;
		wKey[n]->show();
		connect(wKey[n], &QPushButton::pressed, this, [=](){ this->playWhiteNote(n);});
		connect(wKey[n], &QPushButton::released, this, &whiteKey::releaseNote);
	}
		
}

blackKey::blackKey(){

	int key_horizontal_placement = 32;
	int skip_one_key = 60;
			
	for (long unsigned int n = 0; n != sizeof(bKey)/7; ++n){
		bKey[n] = new QPushButton(this);
		bKey[n]->setStyleSheet("QPushButton {background-color: black; border: 1px solid black;} QPushButton:pressed {background-color: #404040;}");
		bKey[n]->setGeometry(key_horizontal_placement,216, 15, 110);
		if (n == 1 || n == 4 || n == 6 || n == 9 || n == 11 || n == 14 || n == 16){
			key_horizontal_placement += 2 + skip_one_key;
		}
		else {
			key_horizontal_placement += 31;
		}
		bKey[n]->show();
		connect(bKey[n], &QPushButton::pressed, this, [=](){ this->playBlackNote(n);});
		connect(bKey[n], &QPushButton::released, this, &blackKey::releaseNote);
	}
}

MainWindow::MainWindow(){
	this->setWindowTitle("The QT Piano");
	this->setStyleSheet("border : 6px solid Sienna;");
}
