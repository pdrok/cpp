#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;
double Sqrt(double x, double precision)
{
    double NuevaSqrt = x / 2, AntiguaSqrt = 0;
    if (x < 0)
    {
        cout << "no se pueden calcular raices cuadradas";
        cout << "de numeros negativos" << endl;
        exit(1);
    }

    while (fabs(NuevaSqrt - AntiguaSqrt) > precision)
    {
        AntiguaSqrt = NuevaSqrt;
        NuevaSqrt = 0.5 * (AntiguaSqrt + x / AntiguaSqrt);
    }
    return NuevaSqrt;
}