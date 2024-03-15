// Fahrenhe.cpp
//
#include <iostream>

int main()
{
    int tempf;

    std::cout << "Introduzca la temperatura en fahrenheit: ";
    std::cin >> tempf;
    int tempc = (tempf - 32) * 5 / 9;
    std::cout << "El equivalente en Celcius es: " << tempc << "\n";
}