#include <iostream>
using namespace std;

int main()
{
    const int numPuntuaciones = 25;
    double puntuacion;
    double suma;

    cout << "Ingrese las 25 puntuaciones del examen de litaratura: " << endl;

    for (int i = 0; i < numPuntuaciones; ++i)
    {
        cout << "Puntuacion " << (i + 1) << ": ";
        cin >> puntuacion;

        if (puntuacion < 0 || puntuacion > 100)
        {
            cout << "Puntuacion invalida. Por favor, ingrese un valor entre 0 y 100." << endl;
            --i;
            continue;
        }

        suma += puntuacion;
    }

    double media = suma / numPuntuaciones;

    cout << "La media de las puntuaciones es: " << media << endl;

    return 0;
}