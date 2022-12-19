# QT Piano GUI
## Generating Midi Note-on signals by clicking a button

This interface works by using the fluidsynth api (add -lfluidsynth to Makefile's LIBS) and will simply generate note-on, note-off messages at the mouseclick of a button.

To install fluidsynth simply:

```sudo apt-get install fluidsynth```

or follow this guide: ```https://wiki.debian.org/PulseAudioMidi```

Build with ```make``` and launch with ```./piano```.
