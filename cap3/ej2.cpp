#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int numeros[6];

    cout << "Ingrese 6 numeros enteros: " << endl;
    for (int i = 0; i < 6; i++)
    {
        cin >> numeros[i];
    }

    cout << "Numeros ingresados, alineados a la derecha: " << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << setw(10) << right << numeros[i] << endl;
    }
}