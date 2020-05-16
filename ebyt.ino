const int b3 = 988;
const int a93 = 932;
const int a3 = 880;
const int g93 = 831;
const int g3 = 784;
const int f93 = 740;
const int f3 = 698;
const int e3 = 659;
const int d93 = 622;
const int d3 = 587;
const int c93 = 554;
const int c3 = 523;
const int b2 = 494;
const int a92 = 466;
const int a2 = 440;
const int g92 = 415;
const int g2 = 392;
const int f92 = 370;
const int f2 = 349;
const int e2 = 329;
const int d92 = 311;
const int d2 = 294;
const int c92 = 277;
const int c2 = 262;
const int b = 247;
const int a9 = 233;
const int a = 220;
const int g9 = 208;
const int g = 196;
const int f9 = 185;
const int f = 175;
const int e = 165;
const int d9 = 156;
const int d = 147;
const int c9 = 139;
const int c = 131;
const int x = 0;

const int buzzerPin = 11;
const int ledPin1 = 13;
const int ledPin2 = 12;
 
int counter = 0;
 
void setup()
{
pinMode(buzzerPin, OUTPUT);
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);
}
 
void loop()
{
firstSection();
secondSection();
thirdSection();
}
 
void beep(int note, int duration)
{
tone(buzzerPin, note, duration);
 
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
noTone(buzzerPin);
delay(50);
counter++;
}
 
void firstSection()
{
  ///////////////1
beep(a, 210);
beep(e2, 210);
beep(b2, 210);
beep(e2, 210);
beep(c92, 210);
beep(b2, 210);
beep(e2, 210);
beep(b2, 210);
/////////////////2
beep(a, 210);
beep(e2, 210);
beep(b2, 210);
beep(e2, 210);
beep(c92, 210);
beep(b2, 210);
beep(e2, 210);
beep(a2, 210);
////////////////3
beep(f9, 210);
beep(c92, 210);
beep(g92, 210);
beep(c92, 210);
beep(a2, 210);
beep(g92, 210);
beep(c92, 210);
beep(g92, 210);
////////////////4
beep(f9, 210);
beep(c92, 210);
beep(g92, 210);
beep(c92, 210);
beep(a2, 210);
beep(g92, 210);
beep(c92, 210);
beep(e2, 210);
////////////////5
beep(d2, 210);
beep(f92, 210);
beep(e3, 210);
beep(f92, 210);
beep(d3, 210);
beep(a2, 210);
beep(f92, 210);
beep(a2, 210);
////////////////6
beep(e2, 210);
beep(b2, 210);
beep(f93, 210);
beep(b2, 210);
beep(e3, 210);
beep(b2, 210);
beep(e2, 210);
beep(a2, 210);
  ///////////////7
beep(a, 210);
beep(e2, 210);
beep(b2, 210);
beep(e2, 210);
beep(c92, 210);
beep(b2, 210);
beep(e2, 210);
beep(b2, 210);

}
 
void secondSection()
{
///////////////8
beep(a, 210);
beep(e2, 210);
beep(c92, 210);
beep(d2, 210);
beep(c92, 210);
beep(b2, 210);
beep(a2, 210);
beep(c92, 210);
///////////////////9
beep(a, 210);
beep(e2, 210);
beep(b2, 210);
beep(e2, 210);
beep(c92, 210);
beep(b2, 210);
beep(e2, 210);
beep(b2, 210);
/////////////////10
beep(a, 210);
beep(e2, 210);
beep(c92, 210);
beep(d2, 210);
beep(c92, 210);
beep(b2, 210);
beep(a2, 210);
beep(a2, 210);
//////////////////11
beep(f9, 210);
beep(c92, 210);
beep(g92, 210);
beep(c92, 210);
beep(a2, 210);
beep(g92, 210);
beep(c92, 210);
beep(g92, 210);
////////////////////12
beep(f9, 210);
beep(a2, 210);
beep(a2, 210);
beep(c92, 210);
beep(x, 210);
beep(c92, 210);
beep(d2, 210);
beep(a2, 210);
//////////////////13
beep(d, 210);
beep(a2, 210);
beep(a2, 210);
//beep(c92, 75);
beep(d2, 210);
beep(x, 210);
beep(c92, 420);
beep(b2, 210);
//////////////////14
beep(e2, 210);
beep(b2, 210);
beep(a2, 210);
beep(c92, 210);
beep(a2, 210);
beep(a2, 210);
beep(a2, 420);
//////////////////15
beep(f9, 210);
beep(c92, 210);
beep(g92, 210);
beep(c92, 210);
beep(a2, 210);
beep(g92, 210);
beep(c92, 210);
beep(g92, 210);
}
void thirdSection()
{
  ///////////////16
beep(f9, 210);
beep(c92, 210);
beep(c92, 210);
beep(d2, 210);
beep(c92, 210);
beep(b2, 210);
beep(a2, 210);
beep(c92, 210);
///////////////////17
beep(a, 210);
beep(e2, 210);
beep(b2, 210);
beep(e2, 210);
beep(c92, 210);
beep(b2, 210);
beep(e2, 210);
beep(b2, 210);
/////////////////18
beep(a, 210);
beep(e2, 210);
beep(c92, 210);
beep(d2, 210);
beep(c92, 210);
beep(b2, 210);
beep(a2, 210);
beep(a2, 210);
//////////////////19
beep(f9, 210);
beep(c92, 210);
beep(g92, 210);
beep(c92, 210);
beep(a2, 210);
beep(g92, 210);
beep(c92, 210);
beep(g92, 210);
//////////////////20
beep(f9, 210);
beep(a2, 210);
beep(a2, 210);
beep(c92, 210);
beep(x, 210);
beep(c92, 210);
beep(d2, 210);
beep(a2, 210);
//////////////////21
beep(d, 210);
beep(a2, 210);
beep(a2, 210);
//beep(c92, 75);
beep(d2, 210);
beep(x, 210);
beep(c92, 420);
beep(b2, 210);
//////////////////22
beep(e2, 210);
beep(b2, 210);
beep(a2, 210);
beep(c92, 210);
beep(a2, 210);
beep(a2, 210);
beep(a2, 420);
  ///////////////23
beep(a, 210);
beep(e2, 210);
beep(b2, 210);
beep(e2, 210);
beep(c92, 210);
beep(b2, 210);
beep(e2, 210);
beep(b2, 210);
beep(a, 1000);
beep(x, 20000);
  
  
  }
