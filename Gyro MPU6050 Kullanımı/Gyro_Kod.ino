#include <MPU6050_tockn.h>//gyro kütüphansesini ekleyin
#include <Wire.h> 	//SDA ve SCL kullan?lan yerlerde bu kütüphane kullan?labilir
MPU6050 mpu6050(Wire);
void setup() {
 Serial.begin(9600);
 Wire.begin();
 mpu6050.begin();//ba?lat?n
 mpu6050.calcGyroOffsets(true); // gyro nun off set de?erini ayarlamay? aktif et
 mpu6050.update();
}

void loop() {

  Sabit_Gyro();
  
}
void GyroKonumunuAl(){//gyro de?erini al
 Serial.print("x:");
  Serial.print(mpu6050.getAngleX());//x de?erini al
   Serial.print("y:");
  Serial.print(mpu6050.getAngleY());// y de?erini al
   Serial.print("z:");
  Serial.print(mpu6050.getAngleZ());// z de?erini al
  }
  
  
void Sabit_Gyro()//ba?lang?ç konumunu al
{
  int bir=1;
  if(bir==1)
  {
   Serial.print("x:");
  Serial.print(mpu6050.getAngleX());
   Serial.print("y:");
  Serial.print(mpu6050.getAngleY());
   Serial.print("z:");
  Serial.print(mpu6050.getAngleZ());
  bir++;
 }