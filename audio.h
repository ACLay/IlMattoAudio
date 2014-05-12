//Integer approximations to frequencies for music notes covering the 2 octaves around middle C
#define B4 494
#define B4F 466
#define A4S 466
#define A4 440
#define A4F 415
#define G4S 415
#define G4 392
#define G4F 370
#define F4S 370
#define F4 349
#define E4 330
#define E4F 311
#define D4S 311
#define D4 294
#define D4F 277
#define C4S 277
#define C4 262 //Middle C
#define B3 247
#define B3F 233
#define A3S 233
#define A3 220
#define A3F 208
#define G3S 208
#define G3 196
#define G3F 185
#define F3S 185
#define F3 175
#define E3 165
#define E3F 156
#define D3S 156
#define D3 147
#define D3F 139
#define C3S 139
#define C3 131

#define SEMIBREVE 1.0
#define MINIM 1.0/2
#define CROTCHET 1.0/4
#define QUAVER 1.0/8
#define SEMIQUAVER 1.0/16

#define VOL_HIGH 3
#define VOL_MED 2
#define VOL_LOW 1

#include <avr/io.h>
#include <util/delay.h>

#include <math.h>

void setVolume(int volume);//Really, 1 is too loud, but you can't go lower
void setBPM(int bpm);
void note(int freq, float beats);
void tone(int freq, long cycles);
void pulse(void);//a single pulse, 5 microseconds on, 5 microseconds off
float dot(float beats, int dots);//for applying dots to music note durations
