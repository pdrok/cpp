#include <iostream>

using namespace std;

enum Figura
{
    Cuadrado,
    Cubo
};

double area(double lado, Figura tipo = Cuadrado)
{
    if (tipo == Cuadrado)
    {
        return lado * lado;
    }
    else if (tipo == Cubo)
    {
        return 6 * lado * lado;
    }

    return 0;
}

int main()
{
    double ladoCuadrado, ladoCubo;

    cout << "Ingrese el lado del cuadrado: ";
    cin >> ladoCuadrado;
    cout << "El are del cuadrado es: " << area(ladoCuadrado) << endl;

    cout << "Ingrese el lado del cubo: ";
    cin >> ladoCubo;
    cout << "El area superficial del cubo es: " << area(ladoCubo, Cubo) << endl;

    return 0;
}