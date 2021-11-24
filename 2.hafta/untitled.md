---
description: Compilation (gcc) Variable declaration (int, string, long) İnput
---

# Variables/Functions

## İçerik

**Değişkenler(Variables) **

**Fonksiyonlar (Functions) **

**Giriş-Çıkış (I/O)**

## Degiskenler / Variables

Değişkenler, veriler için bir depolama konumudur. Bir miktar/harf içerirler. Tekrar tekrar referans edebilmek ve verileri degiştirebilmek icin kullanılır.

C++’da 7 tane variable vardır. Bunlar; bool, char , int ,float, double void, ve wchar\_t\*

\*wchar\_t genel olarak kullanilan bir degisken degil, windows’un kendi kodu disinda pek kullanilan bir degisken degil, o yuzden adini bilseniz yeter.

![](https://lh6.googleusercontent.com/\_BNn2PlunwPoWvgnnKsnzIwjZaL9EDck0ckZngLvfm-WRT4-78GgKWOTfcj4cWgYWmwMr8vGl14zpLcJo0hLsTRWZgJKm1tCK5TUNe7zT-8dCgosebMbgTegsJ1QguFA00FlQwE0PYA)



**Bool **-> Boolean - true/false (bir byte) Int -> integer/tamsayı (4 byte)\
**Float **-> 7 basamağa kadar sayı (4 byte) Double -> 15 basamağa kadar sayı (8 byte)\
**Void **-> sonuç vermeyen fonksiyon tipi\*

### **Type Modifier/ Tür değiştirici**

&#x20;short -> −32,767 to +32,767 arası sayılar için&#x20;

long -> -2147483647 to 2147483647 arası sayılar için

&#x20;signed -> hem negatif hem pozitif olabilecek sayilar icin&#x20;

unsigned -> sadece negatif olmayan sayılar için



## Fonksiyonlar / Functions

![](https://lh5.googleusercontent.com/PASLJjrHJrRi2G1hqTf58Dx39wMAyvpzzs3lPevxPl3w4laFcgeK0M-NEtq2SD7TLMrppyF6ifeFP62peBPhhwVtI5MwySI3jeCeff4tALQv60wu32U2oOYKsu-tjL1UVaD07aSP1WI)

Her yazdığınız C++ programında en az bir tane main() fonksiyonu olmak zorunda. Bunun dışında fonksiyon sayısı sınırsız! \*\*\*&#x20;

(**\*\*\* bilgisayarınızdaki hafıza kadar sınırsız)**

Fonksiyon yazmamızın sebebi, yazdığımız kodu tekrar tekrar kullanmak ve verimlilik sağlamak.

Satır satır incelemek istersek, şöyle incelememiz mümkün:

\#include → Önişlemci direktifi/ preprocessor directive (Derlemeden önce bazı programları işlemek için derleyici tarafından çağrılır.)&#x20;

&#x20;int main() → parantezler bu kontekste fonksiyon yazıyoruz anlamina geliyor.&#x20;

süslü parantez ise fonksiyonumuzun nerede bittiğini&#x20;

std::cout → std standard kütüphane’de cout yani character output objesini cagirip sonucu görmemizi sağlayan kod.

&#x20;return 0 olmasinin sebebi C++’da kodun başarılı bitmesi 0 ile biter, ve main’de 0 döndürdüğü için main 0 yani basarili bir sekilde sonuclanir.



Basit bir fonksiyon derlemesi

![](https://lh4.googleusercontent.com/3YEhDvMrWg6P-hRqW5kJEzH3pXWXsV9\_9NmBixzmjv315l\_O8xKkDum3Of6UiEUI4cBPZ83FWm6JZ7TYA-Fln529rrosjxge34-zgAiNIM7tmDsgpeb-AGwzCJbdvVH6QO44nFZiUSA)
