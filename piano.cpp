#include "piano.h"
#include "fluid.h"

MainWindow::MainWindow(){
	startSynth();
	keys = new QPushButton(this);
	keys->show();
	connect(keys, &QPushButton::pressed, this, &MainWindow::playNote);
	connect(keys, &QPushButton::released, this, &MainWindow::releaseNote);
}
