#include <iostream>
using namespace std;

struct Punto
{
    float x;
    float y;
};

Punto sumaPuntos(const Punto &p1, const Punto &p2)
{
    Punto resultado;
    resultado.x = p1.x + p2.x;
    resultado.y = p1.y + p2.y;
    return resultado;
}

int main()
{
    Punto punto1, punto2, puntoZ;

    cout << "Ingrese las coordenadas del primer punto (x y): ";
    cin >> punto1.x >> punto1.y;

    cout << "Ingrese las coordenadas del segundo punto (x y ): ";
    cin >> punto2.x >> punto2.y;

    puntoZ = sumaPuntos(punto1, punto2);

    cout << "El punto Z resultante de la suma es: (" << puntoZ.x << ", " << puntoZ.y << ")" << endl;

    return 0;
}