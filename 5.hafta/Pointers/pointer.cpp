  #include <iostream>
 using namespace std;

int main() {
  // adres &
  // deferans, yani deger

int x =5; 
int * ptr = &x;

// ptr adindaki deger x'in hafizadaki adresine esit. 

cout << "adres: " << ptr << endl;
cout << "deger: " <<  *ptr << endl ; // * kullanilinca deger gelir
cout << "deger: " <<  x << endl ;
cout << "adres" <<  &x << endl;  // & kullaninca adres

}


