
# Abstract

The system is aimed to maintain a silent atmosphere in libraries. 
An automatic electronic device is designed that announces whenever 
someone breaks the silence.

The system is built using a microcontroller. Initially, it acquires 
the noise signal from a microphone. This signal is amplified using 
an audio amplifier.

Whenever noise is detected, a logic HIGH signal is generated. Based 
on this signal, the microcontroller activates the voice playback 
channel of the voice chip.

The chip then generates a pre-recorded message such as:

"Silence Please"

through a speaker.

The system can detect any kind of sound and automatically provide 
a warning to maintain silence.
