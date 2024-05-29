<h3> Arduiono ile L298N H-bridge kullanımı</h3>
<hr></hr>
<pre>
  L298N nedir?
  L298N bir motor sürücüdüdür 2 adet DC motor ve 1 adet STEP motor kullanabilirsiniz.
  Bu örnekte size DC motor ile kullanımını anlattım.
</pre>

![Şema_L298N](https://github.com/EmreInanc/Arduiono-Tum-Projeler/assets/169296203/92f081f2-f6e8-4321-b75a-f558eff292a5)
<pre>
  1-öncelikle pilimizin + ve - sini  L298N in motor sürücü kısmına jumper kablo ile bağlıyoruz.
  2-arduiononun VIN girişine motor sürücünün 12V pini bağlanır(eğer 12Volttan fazla ise bu pini kullanmayın(tavsiye edilen 7-12V tur)).
  3-Arduüionun GND girişine pilin yada motor sürücünün gnd(-) sini bağlayın(gnd - heryede aynıdır)
  4-motorlarımızı +,- sine dikkat edicek şekilde motorlarınızı bağlayın(motor başına 2 amper güç verebiliyor en maks.)
  5-Motor sürücü pinlerini arduiono da uygun dijital pinlere bağlayın.(dijital pinler 1-0 değeri alırlar ancak" ~ " işareti varsa bu demektir ki pwm özelliği de mevuttur pwm pinleri de dijital pinler gibi kullanılır ancak 0-255 değerinde veri alabilirler)
  6-
</pre>


