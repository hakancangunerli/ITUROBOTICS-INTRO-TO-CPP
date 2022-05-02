---
description: Arrays/ how to Access elements of an array. Loop through Arrays Pointers
---

# Diziler, İşaretçiler ve Vektörler

{% embed url="https://docs.google.com/presentation/d/1EC3nviSF9zTEOhCTof3ufwrBalrMM1IT_-I47tIX8YU/edit?usp=sharing" %}

## İçerik

Arrays/ Diziler&#x20;

Pointers/ İşaretçiler&#x20;

Vectors/Vektörler



## 1D Arrays/ 1D Diziler

![](https://lh5.googleusercontent.com/-PugjmpbJUB0dNC\_DE-WQbqlzl-GZtmHP17Q6Fjb2ORb0LqZoDVhXg6RsFKujlWtnXimtCUBlF\_RoMOewrLx2E4TWZk\_5eMXz1SKgJ50tyzegMufrIsjS22PCZDeVcxq65FpJ6\_vFNU)



Diziler dinamik olmayan yapılardır (statik) Sonradan element ekleyemezsiniz, boyut başlangıçta ne ise o olarak kalır. Orijinal hali tek boyutludur, bir element bir veri.



## 2d arrays / 2d diziler&#x20;

![](https://lh4.googleusercontent.com/mwLLgiXJVLwU3qcS84Zid5uzQFZT8Uva-yJbzYLE8Cmidjmf0wNSGuF2H4Yb45MSMFcRHP97HfBugitdn-XXbQPlhaCo1iIEL8MvT73yE15JZ9\_m4XHJ-ZpkT\_VyO-t6JjGo5VKOdm4)



İki boyutlu yapmak için kullanılır. Böylece birden çok satır (row) kullanabilirsiniz.



## Vectors/Vektörler

![](https://lh4.googleusercontent.com/BHQe6uNmj-ImRhhpudWJ6kyHdcvEFsBdwq-LLHmadQ7v4kiynGgx-uwyz6P6NWKwFydZodLFHzrBZ\_AQ8hblp0bzhM6L0Fjy-VzDndQy7lwgQsdT6YFOHGuJeFB5TAq710gLIiUCVeY)

Vektörler, bir öğe eklendiğinde veya silindiğinde kendini otomatik olarak yeniden boyutlandırma yeteneğine sahip dinamik dizilerle aynıdır ve depolamaları otomatik olarak işlenir. Sonuna ekleme/çıkarma yapabilirsiniz.



## Arrays vs Vectors

Arrays:

Statik&#x20;

İşleminizin boyutunu veya değişmeyeceğini biliyorsanız, bunu kullanın.&#x20;

Hafıza sorun ise, bunu tercih edebilirsiniz.

Vectors:&#x20;

Dinamik&#x20;

İşleminizin içindeki veriler sürekli değişecekse, bunu kullanın.&#x20;

Hafiza bir sorun ise, vektörler daha çok hafıza kullanır.

## Pointers/İşaretçiler

![](https://lh4.googleusercontent.com/-8XKk0yCYAKj9iWAVrk1nJgY-PJt2LwcA5W4w-1XR\_HwXKc8nwbEuVzkUUC9dpJ6cUzs2BXUCdiYmL4DY-RrMtTzHbfWWTYpL5MC2X8V6qaBgJwYnNBW7yPxbfxUNQl3VgCuYUMatq8)![](https://lh6.googleusercontent.com/SyBddnD72kf9HGd77m\_8ebyQqtpt5hIDpOtsbElSzkc2e5-M4JJ2txUnk3ESxnMUqHdBrH8l5slLESvBCxBzTb3eNvCuq6hvF20S7MQJ\_I6S2seViJLheW8eteAq7jhSINb3afwsBU8)

İşaretçi, birçok programlama dilinde bir bellek adresini saklayan bir nesnedir.

int \* ptr = \&x;

* Bir işaretçi ile gösterilen değeri elde etmek için \* operatörünü kullanırız. Dereferans operatörü olarak adlandırılır.

& ise address operatörü dediğimiz adresi tanımlamak için kullandığımız operatördür.

