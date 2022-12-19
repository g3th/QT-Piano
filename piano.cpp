#include "piano.h"
#include "fluid.h"

MainWindow::MainWindow(){
	startSynth();
	
	int key_horizontal_placement = 10;
	
	for (long unsigned int n = 0; n != sizeof(whiteKey)/7; ++n){
		whiteKey[n] = new QPushButton(this);
		whiteKey[n]->setGeometry(key_horizontal_placement,10, 40, 100);
		key_horizontal_placement += 40;
		whiteKey[n]->show();
		connect(whiteKey[n], &QPushButton::pressed, this, [=](){ this->playWhiteNote(n);});
		connect(whiteKey[n], &QPushButton::released, this, &MainWindow::releaseNote);
	}

}
