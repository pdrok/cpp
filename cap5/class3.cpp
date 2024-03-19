#include <iostream>

void funcion_1(void);
class sumar_numeros
{
public:
    int i;
    int sumar(int);
};

sumar_numeros uno;
int main()
{
    uno.i = 1;
    funcion_1();
    std::cout << "i es: " << uno.i << "\n";
}

void funcion_1()
{
    uno.i += 10;
}