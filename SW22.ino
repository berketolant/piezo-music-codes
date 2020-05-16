
// Credit:
// Midi to Arduino Converter
//     - Andy Tran (extramaster), 2015
// https://www.extramaster.net/tools/midiToArduino/
//
// Process:
// Midi -> Midi tracks -> Note mappings -> Frequency
//
// CC0

// Set this to be the pin that your buzzer resides in. (Note that you can only have one buzzer actively using the PWM signal at a time).
int tonePin = 11;
void setup() {

}

void midi() {

    tone(tonePin, 277, 386.666666667);
    delay(386.666666667);
    delay(13.3333333333);
    tone(tonePin, 369, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 415, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 440, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 554, 566.666666667);
    delay(566.666666667);
    delay(33.3333333333);
    tone(tonePin, 184, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 220, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 277, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 369, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 415, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 440, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 554, 376.666666667);
    delay(376.666666667);
    tone(tonePin, 123, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 184, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 246, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 277, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 293, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 369, 566.666666667);
    delay(566.666666667);
    delay(33.3333333333);
    tone(tonePin, 123, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 184, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 246, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 277, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 293, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 369, 566.666666667);
    delay(566.666666667);
    tone(tonePin, 82, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 123, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 164, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 207, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 246, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 329, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 415, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 493, 186.666666667);
    delay(186.666666667);
    delay(213.333333333);
    tone(tonePin, 659, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 493, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 415, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 329, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 415, 566.666666667);
    delay(566.666666667);
    tone(tonePin, 110, 185.0);
    delay(185.0);
    delay(13.3333333333);
    tone(tonePin, 164, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 220, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 277, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 220, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 277, 376.666666667);
    delay(376.666666667);
    delay(23.3333333333);
    tone(tonePin, 207, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 138, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 246, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 207, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 246, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 207, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 246, 376.666666667);
    delay(376.666666667);
    delay(23.3333333333);
    tone(tonePin, 138, 186.666666667);
    delay(186.666666667);
    tone(tonePin, 92, 185.0);
    delay(185.0);
    delay(13.3333333333);
    tone(tonePin, 138, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 184, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 207, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 220, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 277, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 369, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 277, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 184, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 207, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 220, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 277, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 369, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 277, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 220, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 184, 186.666666667);
    delay(186.666666667);
    tone(tonePin, 123, 185.0);
    delay(185.0);
    delay(13.3333333333);
    tone(tonePin, 184, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 246, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 277, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 293, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 369, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 493, 376.666666667);
    delay(376.666666667);
    delay(23.3333333333);
    tone(tonePin, 123, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 184, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 246, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 277, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 293, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 369, 566.666666667);
    delay(566.666666667);
    tone(tonePin, 82, 185.0);
    delay(185.0);
    delay(13.3333333333);
    tone(tonePin, 123, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 164, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 207, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 246, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 329, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 415, 376.666666667);
    delay(376.666666667);
    delay(223.333333333);
    tone(tonePin, 493, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 659, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 493, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 329, 756.666666667);
    delay(756.666666667);
    tone(tonePin, 110, 185.0);
    delay(185.0);
    delay(13.3333333333);
    tone(tonePin, 164, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 220, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 277, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 220, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 277, 376.666666667);
    delay(376.666666667);
    delay(23.3333333333);
    tone(tonePin, 207, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 138, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 246, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 207, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 174, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 246, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 207, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 277, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 246, 186.666666667);
    delay(186.666666667);
    tone(tonePin, 138, 185.0);
    delay(185.0);
    delay(13.3333333333);
    tone(tonePin, 207, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 277, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 349, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 415, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 493, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 554, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 698, 186.666666667);
    delay(186.666666667);
    delay(13.3333333333);
    tone(tonePin, 830, 376.666666667);
    delay(376.666666667);
    delay(23.3333333333);
    tone(tonePin, 1108, 1136.66666667);
    delay(1136.66666667);
    tone(tonePin, 92, 1583.33333333);
    delay(1583.33333333);
        delay(20000);


}

void loop() {
    // Play midi
    midi();
}
