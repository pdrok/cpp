#include <iostream>
using namespace std;

int main()
{
    char letraInicial = 'A';

    int maxFilas = 5;

    for (int fila = 1; fila <= maxFilas; fila++)
    {
        for (char letra = letraInicial; letra < letraInicial + fila; letra++)
        {
            cout << letra;
        }
        cout << endl;
    }
}