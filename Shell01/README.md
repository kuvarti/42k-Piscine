## **[Succeeded With 70%] - Shell01**

## **İşinize yarayacak komutlar**
>### Dipnot:
>Köşeli parantez '[]' içinde yazılan yerler yazılması zorunlu olmayan, isteğe bağlı alanlardır.
>
> <çıktı> > dosya yaparak çıktının içeriğini dosya'nın üzerine yazdırırız.
>
> <çıktı> >> dosya yaparak çıktının içeriğini dosya'nın sonuna ekleriz.

* ### man
	```groups [user]``` -> Verilen Kullanıcının gruplarını yazdırır.
* ### tr
	```tr [option] <Set1> [set2]``` -> Karakterleri silmek veya değiştirmek için kullanılır.
	* ```tr 'a' 'b'``` -> 'a' karakterini 'b' karakterine değiştirir.
	* -d -> ```tr -d 'a'``` bütün a karakaterlerini siler.
* ### wc
	```wc [option] <file>``` -> dosyaların satır, kelime ve bayt sayılarını yazdır.
	* -l -> ```wc -l``` satır sayısını yazdırır.
	* -m -> ```wc -m``` karakter sayısını yazdırır.
	* -c -> ```wc -c``` bayt sayısını yazdırır.
* ### ifconfig
	```ifconfig``` -> Ağınızın bilgilerini yazdırır.
* ### grep
	```grep [option] <pattern> [file]``` -> Patterna uyan satırları yazdırır.
* ### cut
	```cut option [file]``` Dosyalardaki satırlardn bölümleri kaldırır.
	* -d -> ```cut -d 'x'``` satırları x karakterlerinden bölümlere ayırır.
	* -f -> ```cut -f <x>``` x. bölümünü yazdırır.
* ### echo
	```echo [option] "<text>"``` -> text'i standart inputla yazdırır.
* ### awk
	```awk [option] <pattern> [file]``` -> Patterna uyan satırları yazdırır.
	>Dipnot:
	>% işreti mod almaya yarar. == ise eşit mi diye sorar.
<!--
cut
Bölgeleri çıkarmaya yarar.-->

