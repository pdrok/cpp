#include <iostream>
class clase_2
{
public:
    int i;
};

class clase_1
{
public:
    int j;
    clase_2 variable_2; // variable_2 es una clase anidada
};

clase_1 variable_1; // variable_1 es una objeto de clase_1

int main()
{
    variable_1.variable_2.i = 125;
    std::cout << "i es: " << variable_1.variable_2.i << "\n";
}