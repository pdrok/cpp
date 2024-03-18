// archivo DEFCONT1.CPP, demo con #define

#include <iostream>
#define INICIO 20
#define FIN 60
#define LONGITUD FIN - INICIO

int main()
{
    int tab1[LONGITUD];     // correcto
    int tab2[2 * LONGITUD]; // falso
    int i;

    for (i = 0; i < 2 * LONGITUD; i++) // falso
        tab1[i] = i;

    for (i = 0; i < 2 * LONGITUD; i++)
        tab2[i] = i;

    std::cout << "LONGITUD = " << LONGITUD << std::endl;
    std::cout << "2 * LONGITUD = " << 2 * LONGITUD << std::endl;
}