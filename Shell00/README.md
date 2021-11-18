## **[Succeeded With 100%] - Shell00**

Shell Piscine-42 yolundaki ilk adım, kampüse girip login olduktan sonra ilk yapmanız gereken ödev. Aynı zamanda çoğunlukla dosya gezinme aracı olarak(Examlar dahil) shell kullanıcaksınız Shell00'ı iyi bir şekilde anlayıp üstesinden gelirseniz daha az problem yaşarsınız.

Çokça kullanacağınız bir editör (vim) birde sistem (git) var, Vim ve Git için link eklemeyi planlıyorum. Bunlar varsayılan olarak bildiğiniz kabul ediliyor çünkü.

Git için : Yine kendi yaptığım [Git Cheatsheet](https://github.com/kuvarti/Learn-Any/blob/main/cheatsheets/git/git.md)'e bakabilirsiniz.

Vim için : link bulursam eklicem ama şimdilik yok ^-^.

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

	|İzin|Simge|
	|:-|-:|
	|R(read)|R|
	|W(write)|W|
	|X(execute)|X|

  * **1 Grup adını kullanma**
\
  Basitçe U=Owner, G=Group, veya O=Other(Everyone) + veya - ile birlikte vermek/çıkarmak istediğimiz izinleri belirleriz. ör : ```chmod g+x file``` ile group için dosyaya execute izni veririrz.
  * **2 Numaraları kullanma**(Eğlenceli olan yol)
\
  İzinleri sırasıyla digit olarak numaralandırırız;
	|İzin|Değeri|
	| :- | -: |
	|X	|$2^0$=1|
	|W	|$2^1$=2|
	|R	|$2^2$=4|

	Sonra bu numaraları toplayarak hangi izinleri vermek istediğimizi belirleriz ör : ```chmod 744 file``` ile ```-rwxr-xr-x``` izinlerini veririz. sadece W ve R yetkisi için mesela 6 yazmalıyız vs..
* ### Git Komutları
  Git komutlarını 0dan anlatmama gerek yok. sizden git kullanmanızı isteyen sorular için kendi yaptığım [Git Cheatsheet](https://github.com/kuvarti/Learn-Any/blob/main/cheatsheets/git/git.md) dosyasına bakıp oradan sadece alakalı kısımları okuyarak bilmeniz gerekenleri öğrenebilirsiniz
* ### find
  ```find <Arama dizini> [opsiyon]``` klasörleri arar.
  * -name -> ```find . -name 'x'``` mevcut dizin ve altdizinlerde x isimli dosyayı arar. _(* kullanarak öncesinde veya sonrasında herhangi birşey olabilir diyebilirsiniz ör : '*.txt' sadece .txt ile biten dosyaları arar)_
  * -type -> ```find . -type``` mevcut dizin ve alt dizinlerde ```-type```dan sonra belirtilen türde dosyaları arar. ör : ```-type d``` sadece klasörleri arar. daha fazla bilgi için ```man find```
  * -delete -> ```find . -delete``` bulduğu dosyaları siler.
  * -print -> ```find . -print``` bulduğu _(sildiği)_ dosyaları yazdırır.
