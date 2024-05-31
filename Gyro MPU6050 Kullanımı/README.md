Merhaba,
Bügün Sizlere GYRO'nun ne olduğunu ve ne işe yaradığını anlatıcağım.

Gyro (jiroskop), açısal hız ve dönüş hareketlerini ölçmek için kullanılan bir cihazdır. Jiroskoplar, genellikle uçak, gemi, uydu, drone, robotik sistemler ve akıllı telefonlar gibi çeşitli uygulamalarda yönlendirme, stabilizasyon ve hareket kontrolü için kullanılır.

Jiroskop Çeşitleri

3 Eksenli Jiroskop:
X, Y ve Z eksenlerinde açısal hız ölçümü yapar.
Temel uygulamalar için yeterlidir.
Akıllı telefonlarda, tabletlerde ve drone'larda yaygın olarak kullanılır.

6 Eksenli Jiroskop:
3 eksenli jiroskop (X, Y, Z) + 3 eksenli ivmeölçer (X, Y, Z) içerir.
Hem açısal hız hem de doğrusal ivme ölçümü yapar.
Oyun konsolları, artırılmış gerçeklik cihazları ve daha hassas stabilizasyon gerektiren uygulamalarda kullanılır.

9 Eksenli Jiroskop:

9 eksenli jiroskop + 3 eksenli manyetometre (manyetik alan sensörü) içerir.
Açısal hız, doğrusal ivme ve manyetik alan ölçümü yapar.
Bu sayede cihazın dünya üzerindeki yönü de belirlenebilir.
Yüksek hassasiyet gerektiren navigasyon sistemlerinde, insansız hava araçlarında (UAV) ve gelişmiş hareket izleme sistemlerinde kullanılır.


![image](https://github.com/EmreInanc/Arduiono-Tum-Projeler/assets/169296203/8783de63-107d-4f42-b127-b37f5200bc51)


![Devre Tasarımı](https://github.com/EmreInanc/Arduiono-Tum-Projeler/assets/169296203/6ea6a7e0-de18-4eb3-96c5-524f01cd4cd7)


Pin Açıklamaları:
VCC:
Devrenin çalışması için gerekli güç pinidir
İşlev: Sensörü çalıştırmak için gerekli olan voltajı sağlar. Genellikle 3.3V veya 5V arasında bir voltaj uygulanır.

GND:
Toprak (Ground) pinidir.
İşlev: Devrenin negatif voltaj referansı olarak kullanılır. VCC ve GND arasında bir potansiyel fark oluşturur ve bu fark sensörün çalışmasını sağlar.

SDA (Serial Data):
Açıklama: Veri iletim pinidir.
İşlev: I²C (Inter-Integrated Circuit) veri hattı olarak kullanılır. Bu pin, ana cihaz (mikrodenetleyici vb.) ile MPU6050 arasındaki veri alışverişini gerçekleştirir.

SCL (Serial Clock):
Saat sinyali pinidir.
İşlev: I²C saat sinyali sağlar. Ana cihaz tarafından üretilen saat sinyali, verilerin zamanlanmasını ve senkronizasyonunu sağlar.Haberleş

XDA:
İkinci I²C veri hattı pinidir.
İşlev: Başka bir I²C cihazı bağlandığında veri iletimi için kullanılır. Genellikle kullanılmaz ve bu nedenle bazı uygulamalarda boş bırakılır.
XCL:

İkinci I²C saat sinyali pinidir.
İşlev: Başka bir I²C cihazı bağlandığında saat sinyali için kullanılır. Genellikle kullanılmaz ve bu nedenle bazı uygulamalarda boş bırakılır.

AD0 (Address 0):
I²C adres seçme pinidir.
İşlev: MPU6050'nin I²C adresini belirlemek için kullanılır. AD0 pininin durumu (0 veya 1) sensörün I²C adresini değiştirebilir. Bu, aynı I²C hattında birden fazla MPU6050 kullanılması gerektiğinde faydalıdır. AD0 pini GND'ye bağlandığında adres 0x68, VCC'ye bağlandığında ise 0x69 olur.

INT (Interrupt):
Kesme çıkış pinidir.
İşlev: MPU6050 belirli bir koşulu (örneğin, belirli bir hareket tespit edildiğinde) karşıladığında bu pin üzerinden ana cihaza kesme sinyali gönderir. Bu, ana cihazın MPU6050'den veri okumasını başlatmasını sağlar.

![MPU6050-Pinout-diagram](https://github.com/EmreInanc/Arduiono-Tum-Projeler/assets/169296203/e31e00ab-0140-456b-a61e-7a62529016e1)

