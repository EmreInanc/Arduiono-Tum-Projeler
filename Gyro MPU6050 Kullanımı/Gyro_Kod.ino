#include <MPU6050_tockn.h> // MPU6050 kütüphanesini ekleyin
#include <Wire.h>          // SDA ve SCL kullanılan yerlerde bu kütüphane kullanılabilir

MPU6050 mpu6050(Wire);

void setup() {
  Serial.begin(9600);
  Wire.begin();
  mpu6050.begin(); // Başlatın
  mpu6050.calcGyroOffsets(true); // Gyro'nun offset değerini ayarlamayı aktif et
}

void loop() {
  mpu6050.update(); // Verileri güncelle
  GyroKonumunuAl();
  Sabit_Gyro(); // Sabit gyro verilerini al ve göster
  delay(100); // 100 ms bekle
}

void GyroKonumunuAl() { // Gyro değerini al
  Serial.print("Acc [X, Y, Z]: ");
  Serial.print(mpu6050.getAccX());
  Serial.print(", ");
  Serial.print(mpu6050.getAccY());
  Serial.print(", ");
  Serial.print(mpu6050.getAccZ());
  Serial.print("\t");

  Serial.print("Gyro [X, Y, Z]: ");
  Serial.print(mpu6050.getGyroX());
  Serial.print(", ");
  Serial.print(mpu6050.getGyroY());
  Serial.print(", ");
  Serial.print(mpu6050.getGyroZ());
  Serial.print("\t");

  Serial.print("Temp: ");
  Serial.print(mpu6050.getTemp());
  Serial.println();
}

void Sabit_Gyro() { // Başlangıç konumunu al
  static int bir = 1;
  if (bir == 1) {
    Serial.print("Initial Angles [X, Y, Z]: ");
    Serial.print(mpu6050.getAngleX());
    Serial.print(", ");
    Serial.print(mpu6050.getAngleY());
    Serial.print(", ");
    Serial.print(mpu6050.getAngleZ());
    Serial.println();
    bir++;
  }

}
