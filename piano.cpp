#include "window.h"
#include "keys.h"
#include "fluid.h"
#include <iostream>
using namespace std;

whiteKey::whiteKey(){
	startSynth();
	
	int key_horizontal_placement = 10;

	for (long unsigned int n = 0; n != sizeof(wKey)/7; ++n){
		wKey[n] = new QPushButton(this);
		wKey[n]->setStyleSheet("background-color:white");
		wKey[n]->setGeometry(key_horizontal_placement,180, 60, 180);
		key_horizontal_placement += 60;
		wKey[n]->show();
		connect(wKey[n], &QPushButton::pressed, this, [=](){ this->playWhiteNote(n);});
		connect(wKey[n], &QPushButton::released, this, &whiteKey::releaseNote);
	}
		
}

blackKey::blackKey(){

	int key_horizontal_placement = 55;
	int skip_one_key = 57;
			
	for (long unsigned int n = 0; n != sizeof(bKey)/7; ++n){
		bKey[n] = new QPushButton(this);
		bKey[n]->setGeometry(key_horizontal_placement,180, 30, 110);
		if (n == 1){
			key_horizontal_placement += 60 + skip_one_key;
		}
		else{
			key_horizontal_placement += 60;
		}
		bKey[n]->show();
		connect(bKey[n], &QPushButton::pressed, this, [=](){ this->playBlackNote(n);});
		connect(bKey[n], &QPushButton::released, this, &blackKey::releaseNote);
	}
}

MainWindow::MainWindow(){
	this->setWindowTitle("The QT Piano");
}
