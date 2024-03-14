#include <iostream>
using namespace std;

struct Telefono
{
    int codigoProvincial;
    int codigoArea;
    int numero;
};

bool sonIguales(const Telefono &t1, const Telefono &t2)
{
    return (t1.codigoProvincial == t2.codigoProvincial) &&
           (t1.codigoArea == t2.codigoArea) &&
           (t1.numero == t2.numero);
}

int main()
{
    Telefono telefono1 = {926, 22, 5050};
    Telefono telefono2;

    cout << "Ingrese su numero de telefono en el formato (codigo provincial) codigo de area - numero" << endl;
    cout << "Por ejemplo, para el numero (926) 22-5050, ingrese: 926 22 5050" << endl;
    cin >> telefono2.codigoProvincial >> telefono2.codigoArea >> telefono2.numero;

    if (sonIguales(telefono1, telefono2))
    {
        cout << "Los numeros de telefono son iguales. " << endl;
    }
    else
    {
        cout << "Los numeros de telefono son diferentes. " << endl;
    }

    return 0;
}