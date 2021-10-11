#include <iostream>
using namespace std;

class Araba {        // The class
  public:          // Access tipi
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Araba(string x, string y, int z); // Constructor cagirmasi
};

// Constructor definition outside the class
Araba::Araba(string x, string y, int z) {
  brand = x;
  model = y;
  year = z;
}

int main() {
  // Araba nesneleri oluşturun ve yapıcıyı farklı değerlerle çağırın
  Araba ArabaObj1("BMW", "X5", 1999);
  Araba ArabaObj2("Ford", "Mustang", 1969);

  // Print values
  cout << ArabaObj1.brand << " " << ArabaObj1.model << " " << ArabaObj1.year << "\n";
  cout << ArabaObj2.brand << " " << ArabaObj2.model << " " << ArabaObj2.year << "\n";
  return 0;
}
