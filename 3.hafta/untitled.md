---
description: "•\t Keywords •\tIf else •Do...while •For loops, While else"
---

# Kontrol ifadeleri

{% embed url="https://docs.google.com/presentation/d/1XuIPgBMIicWZ5ZKES_BbC10agCOyPAmUgT8B884L3P8/edit?usp=sharing" %}

## İçerik

Anahtar Sözcükler (Keywords)&#x20;

Denetim İfadeleri (Control Statements)&#x20;

Değer Geçirme (Pass by Value)\
Referans Geçirme (Pass by Reference)



## Keywords&#x20;

![](https://lh3.googleusercontent.com/rq0ttQR9AdzfdyOxW-2bQy7KAGzpulLCzlseaEj752kAE5GNUm\_cW5yR-gdravCpO1sztDkgHUqduShywZBRLgoiUeLHxRqhZrfG\_qunWnnXt6TkGR1jC2FeJqk55XLyTmseExblu2c)

(Anahtar sözcükler) sistem tarafından tanımlanmış sözcüklerdir. Sistem tarafından tanımlandıkları için, variable ismi olarak kullanılamazlar. Örneğin: bool, int, double, float , if, else ,do, for. Genel olarak kullandığınız editör size yaptığınız işlemin yanlış olduğunu zaten söyler, hepsini ezberlemenize gerek yok.



## If&#x20;

Eğer if’deki kondisyon yerine geliyorsa, if’in altındaki kod çalıştırılır.

Eğer if’deki kondisyon yerine gelmiyorsa, else if’deki kondisyon yerine geliyorsa else if’in altındaki kod çalıştırılır.

Eğer belirtilen hiçbir kondisyon yerine gelmiyorsa, else’deki kod çalıştırılır.

## Döngü

Döngü (Loop) bir kodun birçok kez tekrarlanmasını sağlar. Üç farklı döngü türü vardır:

For Döngüsü While Döngüsü Do-While Döngüsü



## For&#x20;

![](https://lh3.googleusercontent.com/JuZ-UchSRNYKbg7iTH0Bei6nHz6yW\_ESUoYn6dWpTLe4YfU6H0sW5twsnI1AmIOuSaSIYXi\_vvFmYHbXjxNy95R5O-6ppV1kxdJ9UKMBpe8XO73aLMW-zfWrL1\_K3EYrYv26Ip8lcfE)

For Döngüsü (for loop) bir kodun birçok kez tekrarlanmasını sağlar. Belirli koşullar karşılandığı sürece devamlı olarak aynı kod bloğunu çalıştırır.



## While-Else

![](https://lh3.googleusercontent.com/8d4Rnkb5hV6bVIYm\_cTGUBiC\_5Vfy1VFUP4fAEPetwszs8gR9cVbOXNZxtVxf4gONUToY2Qtn13gWXGb1FpqLlKppVHLr6qx8FvyJJmwIcjGVwYIfa2BfKBKwh-\_IeuVVT71\_kmZBdE)

While döngüsü belirtilen bir koşul doğru olduğu sürece altındaki kod bloğunu devamlı olarak tekrarlar. while loop’u kondisyonu yerine geliyorsa icindeki kodu o kondisyon sonlanana kadar calistirir. eger kosul hic bir zaman degismezse, o zaman sonsuza kadar (ya da programi durdurana kadar) devam eder

## Do-while&#x20;

![](https://lh5.googleusercontent.com/\_oCDaRdWTVU7JOunSkF6LWVNWfj\_H19Sc9DOXa7iKl5oatMtDMAygsEIjhgKUThYiO5C31k82tKrLIHQ0imxRI5CwQTo6YGSkRNo1SoJpEMMMXlfcCYt1MZeX1ZD5Wm8FW5UmptIxCc)

Do-While döngüsü de while döngüsü gibi belirtilen bir koşul doğru olduğu sürece bir kod bloğunda döngü yapar. kodunuz yanlis bıle olsa ne azından bir kere run eder. while kondisyon yanlış ise hiç run etmez Ornegin, eger sabah alarminizi susturmak istiyorsaniz, oncelilkle alarmin en azindan bir kere caldigini duymak zorundasiniz.



## Switch

![](https://lh3.googleusercontent.com/yC2fOikMAG6dx0UVMN5i0hWT2gCEotgZL-XUnzZAiCJneVMOwrEhXvwwk5JowhLQZE10c0VkvHaLTZoK89zb50bImqoNvCHcAZzEUEmwY\_SjItP9dulRF06u7SS0Q6A0mpzOOryHbXY)

Switch-Case Statement’ı program kontrolünün, anahtar ifadesinin değerine karşılık gelen bir anahtar etiketine sahip bir ifade listesine aktarılmasını sağlar.

Yürütülecek birçok kod bloğundan birini seçmek için switch ifadesini kullanın. Örneğin, bir harf, bir rakam vs.



## Pass by value&#x20;

![](https://lh3.googleusercontent.com/RbOiZyhDBZ4XnNFuoGRrSEXb-yZhxys1opuajDKjwvdUPmZN8Bc1MiNEmftZaskmDSsFD7QjKS7cl6ZuFDWVFASzZO36zrXiuBPhn\_RFVkBGL\_pZr44b6lzZPBt8rCLeBYM-d9yX\_MQ)

Değere Göre Geçiş (Pass by Value), gerçek parametre değerinin bir kopyasının bellekte oluşturulduğu anlamına gelir, yani arayan ve arananın aynı değere sahip iki bağımsız değişkeni vardır. Aranan kişi parametre değerini değiştirirse, efekt arayan kişi tarafından görülmez.



## Pass by Reference

![](https://lh5.googleusercontent.com/tB0kh6h\_SBhYSa226\_Kw7XZvNFDBkfzQCKeakoQs-\_pYgL5XntrElNbqPVkfUD\_bRT4r76WFZ9bHQ8uFghpy9N49vOfrAS8QsAIqmPZY6\_bS4u1Zmgr2kmhb081RMd1IYNgeLyhCnQw)

Referansa göre geçiş (adrese göre geçiş olarak da adlandırılır), çağıran fonksiyondaki bir argümanın referansını, çağrılan fonksiyonun karşılık gelen resmi parametresine iletmek anlamına gelir, böylece gerçek parametrenin adresinin bir kopyası bellekte, yani arayan kişide oluşturulur.
