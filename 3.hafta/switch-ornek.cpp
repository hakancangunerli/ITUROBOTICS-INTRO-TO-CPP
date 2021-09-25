#include <iostream>

int main()
{
    char oper;
    float num1, num2;
    std::cout << "Sembol giriniz (+, -, *, /): ";
    std::cin >> oper;
    std::cout << "İki rakam giriniz: " << std::endl;
    std::cin >> num1 >> num2;

    switch (oper)
    {
    case '+':
        std::cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
    case '-':
        std::cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
    case '*':
        std::cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
    case '/':
        std::cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
    default:
        // hic bir isaret tutmazsa default case calisir
        std::cout << "Yanlis isaret";
        break;
    }

    return 0;
}