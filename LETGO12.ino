int tonePin = 13;
const int ledPin2 = 9;
const int ledPin1 = 10;

int counter = 0;
void setup() {
  
pinMode(tonePin, OUTPUT);
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);
}

void loop() {
    // Play midi
    midi();
}

void beep(int tonePin, int note, int duration)
{
tone(tonePin, note, duration);
 
if(counter % 2 == 0)
{
digitalWrite(ledPin1, HIGH);
delay(duration);
digitalWrite(ledPin1, LOW);
}
else
{
digitalWrite(ledPin2, HIGH);
delay(duration);
digitalWrite(ledPin2, LOW);
}
noTone(tonePin);
//delay(1);
counter++;
}

void midi() {

    beep(tonePin, 146, 379.166666667);
   // delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 220, 379.166666667);
  //  delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 130, 379.166666667);
  //  delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 195, 379.166666667);
  //  delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 130, 379.166666667);
  //  delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 195, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 130, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 195, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 146, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 220, 379.166666667);
  //  delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 164, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 246, 379.166666667);
  //  delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 164, 379.166666667);
  //  delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 246, 379.166666667);
  //  delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 146, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 220, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 146, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 220, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 130, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 195, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 130, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 195, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 130, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 195, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 146, 379.166666667);
  //  delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 220, 379.166666667);
  //  delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 164, 379.166666667);
  //  delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 246, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 164, 379.166666667);
//    delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 246, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 164, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 246, 379.166666667);
//    delay(379.166666667);
   delay(20.8333333333);
    beep(tonePin, 146, 379.166666667);
  //  delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 220, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 130, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 195, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 130, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 195, 379.166666667);
  //  delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 97, 379.166666667);
//    delay(379.166666667);
  delay(20.8333333333);
    beep(tonePin, 146, 379.166666667);
 //   delay(379.166666667);
   delay(20.8333333333);
    beep(tonePin, 97, 379.166666667);
 //   delay(379.166666667);
   delay(20.8333333333);
    beep(tonePin, 195, 379.166666667);
  //  delay(379.166666667);
   delay(20.8333333333);
    beep(tonePin, 146, 379.166666667);
 //   delay(379.166666667);
   delay(20.8333333333);
    beep(tonePin, 220, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 146, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 220, 379.166666667);
  //  delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 164, 379.166666667);
 //   delay(379.166666667);
   delay(20.8333333333);
    beep(tonePin, 246, 379.166666667);
  //  delay(379.166666667);
   delay(20.8333333333);
    beep(tonePin, 164, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 246, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 130, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 195, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 130, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 195, 379.166666667);
 //   delay(379.166666667);
   delay(20.8333333333);
    beep(tonePin, 97, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 146, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 97, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 195, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 146, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 220, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 146, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 220, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 146, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 220, 379.166666667);
 //   delay(379.166666667);
delay(20.8333333333);
    beep(tonePin, 146, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 220, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 130, 379.166666667);
 //   delay(379.166666667);
   delay(20.8333333333);
    beep(tonePin, 195, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 130, 379.166666667);
 //   delay(379.166666667);
 delay(20.8333333333);
    beep(tonePin, 195, 379.166666667);
 //   delay(379.166666667);
 delay(20.8333333333);
    beep(tonePin, 97, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 146, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 97, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 195, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 146, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 220, 379.166666667);
//    delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 146, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 220, 379.166666667);
//    delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 164, 379.166666667);
//    delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 246, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 164, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 246, 379.166666667);
  //  delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 130, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 195, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 130, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 195, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 97, 379.166666667);
 //  / delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 146, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 97, 379.166666667);
 //   delay(379.166666667);
   delay(20.8333333333);
    beep(tonePin, 195, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 146, 379.166666667);
 // //  delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 220, 379.166666667);
  //  delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 146, 379.166666667);
//    delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 220, 379.166666667);
 //   delay(379.166666667);
    delay(20.8333333333);
    beep(tonePin, 146, 1519.16666667);
    delay(10000.16666667);

}
