#include <iostream>
using namespace std;

struct Distancia
{
    int Metros;
    int Centimetros;
};

Distancia mayorDistancia(const Distancia &d1, const Distancia &d2)
{
    int totalCm1 = d1.Metros * 100 + d1.Centimetros;
    int totalCm2 = d2.Metros * 100 + d2.Centimetros;

    if (totalCm1 > totalCm2)
    {
        return d1;
    }
    else
    {
        return d2;
    }
}

int main()
{
    Distancia d1, d2, mayor;

    cout << "Ingrese la primera distancia:\n";
    cout << "Metros: ";
    cin >> d1.Metros;
    cout << "Centimetros: ";
    cin >> d1.Centimetros;

    cout << "Ingrese la segunda distancia:\n";
    cout << "Metros: ";
    cin >> d2.Metros;
    cout << "Centimetros: ";
    cin >> d2.Centimetros;

    mayor = mayorDistancia(d1, d2);

    cout << "La mayor distancia es: " << mayor.Metros << " metros y " << mayor.Centimetros << " centrimetros.\n";

    return 0;
}