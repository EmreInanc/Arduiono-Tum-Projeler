
su seviyesini ölçmek için kullanılır.
<ul>

<li><h4>Analog değer üretir(0-100).✔️</h4></li>
<li><h4>Ucuzdur✔️</h4></li>
<li><h4>Hassastır✔️</h4></li>
<li><h4>Boyu kısa olduğu için ölçüm alanı düşüktür ❌</h4></li>

</ul>

![Su_Sensoru](https://github.com/EmreInanc/Arduiono-Tum-Projeler/assets/169296203/cb920357-ffdc-4f32-a06f-4883bcb017fd)




<pre>



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



</pre>
