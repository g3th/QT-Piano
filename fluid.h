#include "piano.h"
#include <fluidsynth.h>
#include <unistd.h>

fluid_synth_t* synth;
fluid_settings_t* settings;
fluid_audio_driver_t* adriver;

void startSynth(){
	settings = new_fluid_settings();
	synth = new_fluid_synth(settings);
	adriver = new_fluid_audio_driver(settings, synth);
	fluid_synth_sfload(synth,"/usr/share/sounds/sf2/FluidR3_GM.sf2",1);
	
}

void MainWindow::playNote(){
	fluid_synth_noteon(synth,0,60,100);
}

void MainWindow::releaseNote(){
	fluid_synth_all_notes_off(synth,0);
}
