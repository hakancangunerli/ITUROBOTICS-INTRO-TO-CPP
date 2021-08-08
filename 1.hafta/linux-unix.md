# Linux/Unix’e giriş

{% embed url="https://docs.google.com/presentation/d/1UOyiQh\_yoxYzQFnHmtg-PeOUfLWHppQZC-ibIEEbJ0s/edit?usp=sharing" %}

## İçerik

* **Linux nedir ne değildir?**
* **Dosya manipülasyonu**
* **Dosya ve gizlilik hiyerarşisi/ permissions \( root, sudo, chmod\) Python, C, C++ compilation**

## Ben kimim?

- Ben Hakan Can Günerli, yaklaşık 2018 yılından beri Robotik ekosisteminde, 2015 yılından beri de yazılım ekosisteminde bulunmaktayım. Bu süreç boyunca 100'den fazla öğrenciye yazılım ve robotiğe giriş konularında dersler verdim, ve Türkiye İş Bankası gibi büyük şirketlerde de çalıştım. Şuan Georgia Üniversitesi'nde üçüncü sınıf öğrencisi olarak Yapay Zeka ve Veri Bilimi konularında çifte ihtisas yapıyorum ve okulumda Robotik konusunda Lisans öğrencisi olarak araştırma asistanlığı yapıyorum.



## Linux/Unix nedir, ne değildir?

● Linux Windows veya macOS gibi tek lisans altında gelmez.

● Çoğu kaynak kodu açıktır, esnek bir işletim sistemidir.

● macOS ve ya Windows kadar kullanıcıya kolay bir arayüz sunmaz.

● Aygıt ve uygulama yönetimi konusunda sıkıntı yaşanabilir.



## Bahsedeceğimiz basit komutlar

ls : listeleme

cd : navigasyon mkdir :klasör yaratma

rm: dosya/klasör silme 

touch: dosya yaratma 

cat: dosya ici önizleme 

sudo: uzman kullanici 

chmod : kullanici haklari 

nano : mini editör



## Hiyerarşi

{% embed url="https://wiki.ubuntu-tr.net/index.php?title=Linux\_dosya\_sistemi\_hiyerar%C5%9Fisi" %}

Nasıl kod yazarız?

C ve C++ gibi diller doğal olarak Linux tarafından derleyici \(compiler\) içerir. Python Ruby gibi diller için ise ek paket indirilmesi gerektirir.

İsterseniz başlayalım!

Ubuntu VM'inde terminal kullanacağız. 

{% embed url="https://www.youtube.com/watch?v=2nU\_Jo72T04" %}



Python'u kullanabilmek için yapmamız gereken şey öncellikle python var mı yok mu diye kontrol etmek. Bunu yapmak için terminal'de alttaki komutu kullanarak bakıyoruz.  

```text
whereis python
```

Ubuntu'nun yeni sürümlerinde python \(genellikle python 2.7\) bulunur, ama yoksa eğer python'u yüklemek için kullanacağınız komut şudur, 

```text
$ sudo apt-get update
$ sudo apt-get install python3.6
```

çıkan sonuçlara yes veya y diyerek yüklemeyi sağlayın.

python kodunu çalıştırmak gayet kolay. dosyanızı belge olarak hazırladıktan sonra, tek yapmanız gereken `python3` ve kodunuzun adını yazmak.

```text
$ python3 hello.py
```

eğer C veya C++ kullanıyorsanız \(ki bu rehberin devamında kullanıyor olacaksınız\) g++ kullanmanız gerekecektir. Aynı şekilde çoğu modern Linux sürümünde bulumakla birlikte, kullanmanız gereken komut aşağıdaki gibidir:

```text
$ sudo apt install g++
```



Bundan sonra ise yazdığınız kodunuzu bulup, g++ ve sonrasında belgenizin adıyla bu işlemi bitirip kodunuzu çalıştırılabilir hale getirebilirsiniz.

```text
g++ hello.cpp
```

Derlenen dosya a.out adıyla bir dosya yaratır ve bu kodu makine kodunda çalışıtırılabilir hale getirir. bundan sonra yapmanız gereken şey ise kodu çalışıtırıp sonucu görmektir.

```text
./a.out
```



