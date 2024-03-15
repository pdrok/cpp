// archivo CONST1.cpp

#include <iostream>

const int INICIO = 20;
const int FIN = 60;
const int LONGITUD = FIN - INICIO;

int main()
{
    char tab1[LONGITUD];
    char tab2[2 * LONGITUD];
    int i;

    for (i = 0; i < LONGITUD; i++)
        tab1[i] = i;

    for (i = 0; i < 2 * LONGITUD; i++)
        tab2[i] = i;

    std::cout << "LONGITUD =" << LONGITUD << std::endl;
    std::cout << "2 * LONGITUD =" << 2 * LONGITUD << std::endl;
}