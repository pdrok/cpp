#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float numero, suma = 0;

    for (int i = 0; i <= 5; ++i)
    {
        cout << "Ingrese el numer " << i << ": ";
        cin >> numero;
        suma += numero;
    }

    float promedio = suma / 5;

    cout << fixed << setprecision(2) << setw(15) << "Promedio: " << promedio << endl;

    return 0;
}