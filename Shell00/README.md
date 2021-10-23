[Succeeded With 100%] - Shell00

Shell Piscine-42 yolundaki ilk adım, kampüse girip login olduktan sonra ilk yapmanız gereken ödev. Aynı zamanda çoğunlukla dosya gezinme aracı olarak(Examlar dahil) shell kullanıcaksınız Shell00'ı iyi bir şekilde anlayıp üstesinden gelirseniz daha az problem yaşarsınız.

-NOTLAR-

man X
man kelimesinin yanına herhangi bir komut yazarsanız o komutun klavuzuna erişebilirsiniz aklınızdaki soruyu çoğunlukla cevaplar.

cat
Dosya içeriklerini terminale bastırmaya yarar. -e gibi parametreler alabilir. RTFM

touch dosya-ismi
Touch kısaca dosya oluşturmaya yarar.

vim dosya-ismi
Vim ile dosyalarınızın içeriğini düzenleyebilirsiniz. Bu komutu bütün piscine boyunca kullanacaksınız o yüzden internetten ayrıntılı bir klavuza bakmak sizin için iyi olabilir.

ls
mevcut dizindeki dosyaları listeler. -l -t -U... gibi parametreler alabilir. RTFM

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
