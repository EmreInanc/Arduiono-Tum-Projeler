#include <Arduino.h>
//SOL pin numaraları tanımlanır..
#define EN_A 9
#define IN1 8
#define IN2 7
//SAĞ
#define EN_B 3
#define IN3 6
#define IN4 5



void MotorPin()
{//pinmpde lar ile veri mi göndericeğiniz - alıcağınız belirtirsiniz INPUT-OUTPUT
//Void loop a yazılır
 pinMode(EN_A,OUTPUT);
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(EN_B,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
}


void Iileri()
{
//SOL MOTOR İLERİ 125 HIZINDA(255)
analogWrite(EN_A,125);
digitalWrite(IN1,0);
digitalWrite(IN2,1);
//SAĞ MOTOR İLERİ 125 HIZINDA(255)
analogWrite(EN_B,125);
digitalWrite(IN3,0);
digitalWrite(IN4,1);
}

void Sag()
{
//SOL MOTOR İLERİ 10 HIZINDA(-255)
analogWrite(EN_A,10);
digitalWrite(IN1,0);
digitalWrite(IN2,1);
//SAĞ MOTOR İLERİ 155 HIZINDA(255)
analogWrite(EN_B,155);
digitalWrite(IN3,0);
digitalWrite(IN4,1);
}

void Sol()
{
//SOL MOTOR İLERİ 155 HIZINDA(255)
analogWrite(EN_A,155);
digitalWrite(IN1,0);
digitalWrite(IN2,1);
//SAĞ MOTOR İLERİ 25 HIZINDA(255)
analogWrite(EN_B,25);
digitalWrite(IN3,0);
digitalWrite(IN4,1);
}

void Dur()
{
  //SOL MOTOR DUR 0 HIZINDA(255)
analogWrite(EN_A,0);
digitalWrite(IN1,0);
digitalWrite(IN2,0);
//SAĞ MOTOR DUR 0 HIZINDA(255)
analogWrite(EN_B,0);
digitalWrite(IN3,0);
digitalWrite(IN4,0);
}

void Geri()
{
  //SOL MOTOR İLERİ 125 HIZINDA(255)
analogWrite(EN_A,125);
digitalWrite(IN1,1);
digitalWrite(IN2,0);
//SAĞ MOTOR İLERİ 125 HIZINDA(255)
analogWrite(EN_B,125);
digitalWrite(IN3,1);
digitalWrite(IN4,0);

}