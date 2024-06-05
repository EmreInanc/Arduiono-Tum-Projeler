#include <Arduino.h>
#define MZ80 3

void Setup()
{
  pinMode(MZ80,INPUT);
  Serial.begin(9600);
}



void loop() {
  int MZ80_1_deger=digitalRead(MZ80_1);
    if(MZ80_1_deger==1)
    {
      Serial.println("MZ80 1 nesne gördü");      
    }
    if(MZ80_1_deger==0)
    {
      Serial.println("MZ80 1 nesne görmedi");      
    }
}
