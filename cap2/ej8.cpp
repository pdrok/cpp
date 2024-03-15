#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string nombreArchivo = "archivo.txt";
    ifstream archivo(nombreArchivo);

    if (!archivo.is_open())
    {
        cerr << "Error al abrir el archivo " << nombreArchivo << endl;
        return 1;
    }

    int numPalabras = 0, numCaracteres = 0, numLineas = 0;
    string linea;

    while (getline(archivo, linea))
    {
        ++numLineas;
        numCaracteres += linea.length() + 1;

        bool enPalabra = false;
        for (char c : linea)
        {
            if (isspace(c))
            {
                enPalabra = false;
            }
            else if (!enPalabra)
            {
                enPalabra = true;
                ++numPalabras;
            }
        }
    }

    if (!linea.empty())
    {
        ++numCaracteres;
    }

    cout << "Numeros de lineas: " << numLineas << endl;
    cout << "Numero de palabras: " << numPalabras << endl;
    cout << "Numero del caracteres (incluidos los espacios y saltos de linea): " << numCaracteres << endl;

    archivo.close();

    return 0;
}
