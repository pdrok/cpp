#include <iostream>
void contar(int tope);
int main()
{
    contar(10);
}

void contar(int tope)
{
    if (tope >= 0)
    {
        std::cout << tope << "\t";
        contar(tope - 1);
    }
}