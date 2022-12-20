#ifndef fluid_h
#define fluid_h

#include "keys.h"
#include <fluidsynth.h>
#include <unistd.h>
#include <vector>
#include <iostream>
using namespace std;

fluid_synth_t* synth;
fluid_settings_t* settings;
fluid_audio_driver_t* adriver;

vector<int> whiteNotes = {60,62,64,65,67,69,71,72};
vector<int> blackNotes = {61,63,66,68,70};

void startSynth(){
	settings = new_fluid_settings();
	synth = new_fluid_synth(settings);
	adriver = new_fluid_audio_driver(settings, synth);
	fluid_synth_sfload(synth,"/usr/share/sounds/sf2/FluidR3_GM.sf2",1);
	
}

void whiteKey::playWhiteNote(int n){
	fluid_synth_noteon(synth,0,::whiteNotes[n],100);
}

void whiteKey::releaseNote(){
	fluid_synth_all_notes_off(synth,0);
}

void blackKey::playBlackNote(int n){
	fluid_synth_noteon(synth,0,::blackNotes[n],100);
}

void blackKey::releaseNote(){
	fluid_synth_all_notes_off(synth,0);
}

#endif
