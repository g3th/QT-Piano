#ifndef fluid_h
#define fluid_h

#include "keys.h"
#include <fluidsynth.h>
#include <vector>
using namespace std;

fluid_synth_t* synth;
fluid_settings_t* settings;
fluid_audio_driver_t* adriver;

vector<int> blackNotes = {36,38,41,43,45,48,50,53,55,57,60,62,65,67,69,72,74,77,79,81};
vector<int> whiteNotes = {35,37,39,40,42,44,46,47,49,51,52,54,56,58,59,61,63,64,66,68,70,71,73,75,76,78,80,82,83};

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
