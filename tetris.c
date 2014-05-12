/*

    Plays the Tetris theme A, using the ilmatto audio library

Build:

      avr-gcc -mmcu=atmega644p -DF_CPU=12000000 -Wall -Os tetris.c libaudio.a -o tetris.elf
      avr-objcopy -O ihex tetris.elf tetris.hex
      avrdude -c usbasp -p m644p -U flash:w:tetris.hex


*/

#include "audio.h"

void tetris(void);

int main(){
    for(;;){
        tetris();
    }
}

void tetris(){
        note(E4,CROTCHET);
        note(B3,QUAVER);
        note(C4,QUAVER);
        note(D4,CROTCHET);
        note(C4,QUAVER);
        note(B3,QUAVER);
        
        note(A3,CROTCHET);
        note(A3,QUAVER);
        note(C4,QUAVER);
        note(E4,CROTCHET);
        note(D4,QUAVER);
        note(C4,QUAVER);
        
        note(B3, dot(CROTCHET,1));
        note(C4, QUAVER);
        note(D4, CROTCHET);
        note(E4, CROTCHET);
        
        note(C4, CROTCHET);
        note(A3, CROTCHET);
        note(A3, QUAVER);
        note(A3, QUAVER);
        note(B3, QUAVER);
        note(C4, QUAVER);
        
        note(D4, dot(CROTCHET,1));
        note(F4, QUAVER);
        note(A4, CROTCHET);
        note(G4, QUAVER);
        note(F4, QUAVER);
        
        note(E4, dot(CROTCHET,1));
        note(C4, QUAVER);
        note(E4, CROTCHET);
        note(D4, QUAVER);
        note(C4, QUAVER);
        
        note(B3, CROTCHET);
        note(B3, QUAVER);
        note(C4, QUAVER);
        note(D4, CROTCHET);
        note(E4, CROTCHET);
        
        note(C4, CROTCHET);
        note(A3, CROTCHET);
        note(A3, CROTCHET);
        
}

