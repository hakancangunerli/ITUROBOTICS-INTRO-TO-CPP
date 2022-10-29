---
description: Introduction to Linux
---

# Linux/Unix’e giriş

{% embed url="https://docs.google.com/presentation/d/1UOyiQh_yoxYzQFnHmtg-PeOUfLWHppQZC-ibIEEbJ0s/edit?usp=sharing" %}

## İçerik

* **Linux nedir ne değildir?**
* **Dosya manipülasyonu**
* **Dosya ve gizlilik hiyerarşisi/ permissions ( root, sudo, chmod) Python, C, C++ compilation**

##

## Linux/Unix nedir, ne değildir?

● Linux Windows veya macOS gibi tek lisans altında gelmez.

● Çoğu kaynak kodu açıktır, esnek bir işletim sistemidir.

● macOS ve ya Windows kadar kullanıcıya kolay bir arayüz sunmaz.

● Aygıt ve uygulama yönetimi konusunda sıkıntı yaşanabilir.

## Bahsedeceğimiz basit komutlar

**ls** : listeleme

**cd** : navigasyon&#x20;

**mkdir** :klasör yaratma

**rm**: dosya/klasör silme&#x20;

**touch**: dosya yaratma&#x20;

**cat**: dosya içi ön izleme&#x20;

**sudo**: uzman kullanıcı

**chmod** : kullanıcı hakları&#x20;

**nano** : mini editör

## Hiyerarşi

{% embed url="https://wiki.ubuntu-tr.net/index.php?title=Linux_dosya_sistemi_hiyerar%C5%9Fisi" %}

Nasıl kod yazarız?

C ve C++ gibi diller doğal olarak Linux tarafından derleyici (compiler) içerir. Python Ruby gibi diller için ise ek paket indirilmesi gerektirir.

İsterseniz başlayalım!

Ubuntu VM'inde terminal kullanacağız.&#x20;

{% embed url="https://www.youtube.com/watch?v=2nU_Jo72T04" %}



Python'u kullanabilmek için yapmamız gereken şey öncellikle python var mı yok mu diye kontrol etmek. Bunu yapmak için terminal'de alttaki komutu kullanarak bakıyoruz. &#x20;

```
whereis python
```

Ubuntu'nun yeni sürümlerinde python (genellikle python 2.7) bulunur, ama yoksa eğer python'u yüklemeniz gerekiyorsa veya hata alıyorsanız bunu çözmek için kullanacağınız komut şudur:&#x20;

```
$ sudo apt-get update
$ sudo apt-get install python3.6
```

çıkan sonuçlara yes veya y diyerek yüklemeyi sağlayın.

Python kodunu çalıştırmak gayet kolay. dosyanızı belge olarak hazırladıktan sonra, tek yapmanız gereken `python3` ve kodunuzun adını yazmak.

```
$ python3 hello.py
```

Eğer C veya C++ kullanıyorsanız (ki bu rehberin devamında kullanıyor olacaksınız) g++ kullanmanız gerekecektir. Aynı şekilde çoğu modern Linux sürümünde bulunmakla birlikte, kullanmanız gereken komut aşağıdaki gibidir:

```
$ sudo apt install g++
```

Bundan sonra ise yazdığınız kodunuzu bulup, g++ ve sonrasında belgenizin adıyla bu işlemi bitirip kodunuzu çalıştırılabilir hale getirebilirsiniz.

```
g++ hello.cpp
```

Derlenen dosya a.out adıyla bir dosya yaratır ve bu kodu makine kodunda çalıştırılabilir hale getirir. Bundan sonra yapmanız gereken şey ise kodu çalıştırıp sonucu görmektir.

```
./a.out
```
