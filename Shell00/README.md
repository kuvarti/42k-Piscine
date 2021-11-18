## **[Succeeded With 100%] - Shell00**

Shell Piscine-42 yolundaki ilk adım, kampüse girip login olduktan sonra ilk yapmanız gereken ödev. Aynı zamanda çoğunlukla dosya gezinme aracı olarak(Examlar dahil) shell kullanıcaksınız Shell00'ı iyi bir şekilde anlayıp üstesinden gelirseniz daha az problem yaşarsınız.

## **İşinize yarayacak komutlar**
>### Dipnot:
>Köşeli parantez '[]' içinde yazılan yerler yazılması zorunlu olmayan, isteğe bağlı alanlardır.

* ### man
  Bilmeniz gereken en önemli komut ```man```. ```man <x>``` _(x yerine herhangi bir başka komut)_ yazarsanız o komutun kılavuzuna bakabilirsiniz.
* ### cat
  ```cat [opsiyon] <x>``` yazarak x isimli dosyanın içeriğini yazdırabilirsiniz. Farklı parametrelerde alabilir ama çokça göreceğiniz ```-e``` parametresi.
  * -e -> ```cat -e``` yazarak dosyanın içeriğini her line bitişinde '$' yazdıracak şekilde yazdırabilirsiniz.
* ### touch
  ```touch [opsiyon] File ..``` Dosyaları oluşturmak, değiştirmek veya modifiye etmek için kullanılır.
  * -t -> ```touch -t <x> file``` yazarak dosyanın tarih/zaman bilgisini değiştirebiliriz.
* ### ls
  ```ls [opsiyon]``` şeklinde kullanarak bulunduğumuz klasördeki dosya ve klasörleri listeleriz.
  * -a -> ```ls -a``` gizli dosyaları da listeler.
  * -l -> ```ls -l``` dosya ve klasörleri uzun listeleme formaında listeler.
  * -m -> ```ls -l``` listelerken dosya ve klasörlerin arasına ',' koyar.
  * -p -> ```ls -p``` listelenen obje klasör ise sonuna '/' koyar.
  * -t -> ```ls -t``` sözlük sırasına göre sıralamadan önce değiştirilme tarihine göre sıralar.
  * -U -> ```ls -U``` '-t' veya '-l' için son değişiklik  yerine dosya oluşturma zamanını kullanır.
* ### chmod
  ```chmod [opsiyon] file``` dosyanın izinlerini değiştirir. Opsiyonu 2 şekilde ayarlayabiliriz. Öncelikle izinleri ```ls -l``` ile görebiliriz.Şu formatta olur ```-rw-rw-r-x 1 kuvarti kuvarti   7 Nov 12 02:21 M2.txt``` baştaki **R**, **W** ve **X** bulunduran alan izinlerdir. ilk baştaki - karakteri dosyanın tipini belirler. Sonraki 3 **RWX** Owner için, ortadaki 3 **RWX** Group için, sonraki 3 **RWX** Other(Everyone) için izinleri belirler. bunları belirlemek için;
  * **1 Grup adını kullanma**

vim dosya-ismi
Vim ile dosyalarınızın içeriğini düzenleyebilirsiniz. Bu komutu bütün piscine boyunca kullanacaksınız o yüzden internetten ayrıntılı bir klavuza bakmak sizin için iyi olabilir.

chmod
genel olarak dosya izinlerini değiştirmek için kullanılır. 3 bit ile çalışır. ör:
chmod 741 x
yazarsanız çıktı şu olur;
-rwxr----x

git log
git loglarınızı gösterir. Commitleriniziz ismi, tarihi gibi detaylarıda içerir.

.gitignore
Esasında bir git dosyasıdır. Git in dikkate almasını istemediğimiz dosyaları içine yazarız.

find
Belirli bir dosyayı daha kolay bulmaya yarayan bir komuttur. RTFM
