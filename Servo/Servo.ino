#include <Servo.h>

Servo myservo;  // Servo motor nesnesi oluşturma

int servoPin = 8;  // Servo motorun bağlı olduğu pin

void setup() {
  myservo.attach(servoPin);  // Servo motoru belirtilen pine bağlama
}

void loop() {
  // 0 dereceden 180 dereceye kadar olan hareket
  for (int aci = 0; aci <= 180; aci++) {
    myservo.write(aci);  // Servo motoru belirtilen pozisyona hareket ettirme
    delay(15);  // Servo motorun pozisyona ulaşması için bekleme
  }

  // 180 dereceden 0 dereceye geri dönüş
  for (int aci = 180; aci >= 0; aci--) {
    myservo.write(aci);  // Servo motoru belirtilen pozisyona hareket ettirme
    delay(15);  // Servo motorun pozisyona ulaşması için bekleme
  }
}
