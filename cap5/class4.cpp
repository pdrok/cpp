#include <iostream>

class suma
{
    int suma_1;
    int suma_2;

public:
    suma(int i, int j = 5);
};

// se creat objeto_1 con solo un argumento
suma objeto_1(10), objecto_2(20, 30);

int main()
{
    std::cout << " Dentro del main() \n";
}

suma::suma(int i, int j)
{
    suma_1 = i;
    suma_2 = j;
    std::cout << "suma_1 es: " << suma_1 << "suma_2 es: " << suma_2 << "\n";
}
