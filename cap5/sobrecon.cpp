// sobrecon.cpp
#include <iostream>
class suma
{
    int suma_1;
    double suma_2;

public:
    suma(int i); // nombre de la funcion sobrecargada
    suma(double k);
};

int main()
{
    suma objeto_1(25);
    suma objeto_2(10.5);
    std::cout << " En el interior del main() \n";
}

suma::suma(int i)
{
    suma_1 = i;
    std::cout << " En el interior de suma (int) \n";
}
suma::suma(double k)
{
    suma_2 = k;
    std::cout << " En el interior de suma (double) \n";
}