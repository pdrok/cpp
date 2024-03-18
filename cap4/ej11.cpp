#include <iostream>
using namespace std;

double potencia(double n, int p = 2)
{
    double resultado = 1.0;
    for (int i = 0; i < p; i++)
    {
        resultado *= n;
    }
    return resultado;
}

int main()
{
    double n;
    int p;
    cout << "Ingrese un numero: ";
    cin >> n;

    cout << "Ingrese el exponente (presione 0 para usar el valor por defecto): ";
    cin >> p;

    double resultado = (p != 0) ? potencia(n, p) : potencia(n);

    cout << n << " elevado a la potencia de " << ((p != 0) ? p : 2) << " es: " << resultado << endl;

    return 0;
}