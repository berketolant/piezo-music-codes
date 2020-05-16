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

   beep(tonePin, 440, 272.836502083);
    
    delay(15.6249979167);
    beep(tonePin, 440, 272.836502083);
    
    delay(15.6249979167);
    beep(tonePin, 440, 135.817289583);
    
    delay(8.41346041667);
    beep(tonePin, 440, 272.836502083);
    
    delay(15.6249979167);
    beep(tonePin, 391, 409.855714583);
    
    delay(22.8365354167);
    beep(tonePin, 369, 272.836502083);
    
    delay(15.6249979167);
    beep(tonePin, 391, 272.836502083);
    
    delay(15.6249979167);
    beep(tonePin, 440, 272.836502083);
    
    delay(15.6249979167);
    beep(tonePin, 440, 272.836502083);
    
    delay(15.6249979167);
    beep(tonePin, 440, 272.836502083);
    
    delay(15.6249979167);
    beep(tonePin, 493, 272.836502083);
    
    delay(15.6249979167);
    beep(tonePin, 440, 135.817289583);
    
    delay(8.41346041667);
    beep(tonePin, 391, 409.855714583);
    
    delay(22.8365354167);
    beep(tonePin, 369, 272.836502083);
    
    delay(15.6249979167);
    beep(tonePin, 391, 272.836502083);
    
    delay(15.6249979167);
    beep(tonePin, 440, 272.836502083);
    
    delay(15.6249979167);
    beep(tonePin, 440, 272.836502083);
    
    delay(15.6249979167);
    beep(tonePin, 440, 272.836502083);
    
    delay(15.6249979167);
    beep(tonePin, 440, 135.817289583);
    
    delay(8.41346041667);
    beep(tonePin, 440, 272.836502083);
    
    delay(15.6249979167);
    beep(tonePin, 391, 409.855714583);
    
    delay(22.8365354167);
    beep(tonePin, 369, 272.836502083);
    
    delay(15.6249979167);
    beep(tonePin, 391, 272.836502083);
    
    delay(15.6249979167);
    beep(tonePin, 440, 272.836502083);
    
    delay(15.6249979167);
    beep(tonePin, 440, 272.836502083);
    
    delay(15.6249979167);
    beep(tonePin, 440, 272.836502083);
    
    delay(15.6249979167);
    beep(tonePin, 493, 272.836502083);
    
    delay(15.6249979167);
    beep(tonePin, 440, 135.817289583);
    
    delay(8.41346041667);
    beep(tonePin, 391, 409.855714583);
    
    delay(22.8365354167);
    beep(tonePin, 369, 272.836502083);
    
    delay(15.6249979167);
    beep(tonePin, 329, 272.836502083);
    
    delay(15.6249979167);
    beep(tonePin, 369, 1643.02862708);
    delay(16483.02862708);

}
