const int sensorPin = A0;  // Su seviye sensörünün bağlı olduğu analog pin
int sensorValue = 0;       // Sensörden okunan değer

void setup() {
  Serial.begin(9600);      // Seri iletişimi başlat
  pinMode(sensorPin,INPUT);
}

void loop() {
  sensorValue = analogRead(sensorPin);  // Sensör değerini oku
  Serial.print("Su Seviyesi: ");
  Serial.println(sensorValue);          // Değeri seri monitöre yazdır

  delay(1000);                          // 1 saniye bekle
}
