/*
  Melody

 Plays a melody

 circuit:
 * 8-ohm speaker on digital pin 8

 created 21 Jan 2010
 modified 30 Aug 2011
 by Tom Igoe

This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/Tone

 */
#define C4  262
#define D4  294
#define E4  329
#define F4  349
#define G4  392
#define A4  440
#define B4  523


void setup() {
  // iterate over the notes of the melody:
 // notes in the melody:
int melody[] = {
  F4,F4,F4,D4,G4,G4,G4,D4,F4,F4,F4,D4,G4,A4,G4,F4,E4,D4,C4
  
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  2,2,2,3,1.9,2,2,3,1.9,2,2,3,1,3,3,3,2,2
};

   for (int thisNote = 0; thisNote < 20; thisNote++) {

    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.20;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(8);
   }}

void loop() {

}
