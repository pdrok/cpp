
#include <iostream>
#include <stdlib.h>
using namespace std;

double Sqrt(double x, double precision);
int main()
{
    double a;
    cout << "\tCALCULO DE RAICES CUADRADAS" << endl;
    for (;;)
    {
        cout << ":";
        cin >> a;
        if (!cin)
            exit(0);
        cout << "Raiz cuadrada de " << a << " es: ";
        cout << Sqrt(a, 1) << endl;
    }
}