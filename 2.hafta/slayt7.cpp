#include <iostream>

int addition (int a, int b)
{
  int r;
  r=a+b;
  return r;
}

int main() {
  int z;
  z = addition (5,3);
  std::cout << "Sonuc: " << z << "\n";
      return 0;
}