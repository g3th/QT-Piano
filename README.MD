# QT Piano GUI
## Generating Midi Note-on Signals by Clicking a Button

This interface works by using the fluidsynth api (add -lfluidsynth to Makefile's LIBS) and will simply generate note-on, note-off messages at the mouseclick of a button.

To install fluidsynth simply:

```sudo apt-get install fluidsynth```

or follow this guide: ```https://wiki.debian.org/PulseAudioMidi```

In terminal, build with qmake, as the ```*.pro``` file is already included.

Compile with ```make``` and launch with ```./piano```. Again, don't forget to add ```-lfluidsynth``` to Makefile LIBS variable.
