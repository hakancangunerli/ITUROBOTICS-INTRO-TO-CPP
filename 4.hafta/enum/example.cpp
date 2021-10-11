#include <iostream>

int main() {
    enum Color {red, green, blue }; 
Color r = red;

switch(r) 
{
    case red  : 
            std::cout << "kirmizi\n";   break;
    case green: 
    std::cout << "yesil\n"; break;
    case blue : 
        std::cout << "mavi\n";  break;
    default:
        std::cout <<"hata";
}



    return 0;
}