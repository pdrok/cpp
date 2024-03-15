#include <iostream>
using namespace std;

int main()
{
    int cantidad, numero;
    int mayor = -1;
    int contadorMayor = 0;

    cout << "Introduzca un a secuencia de enteros (0 para terminar):  ";
    do
    {
        cin >> numero;

        if (numero > mayor)
        {
            mayor = numero;
            contadorMayor = 1;
        }
        else if (numero == mayor)
        {
            contadorMayor++;
        }
    } while (numero != 0);

    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero mayor se repite: " << contadorMayor << " veces" << endl;

    return 0;
}