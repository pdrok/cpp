#include <iostream>
using namespace std;

double FahhenheitACelsius(double tempFahrenheit)
{
    return (tempFahrenheit - 32) * 5 / 9;
}

double CelsiusAFahrenheit(double tempCelsius)
{
    return (tempCelsius * 9 / 5) + 32;
}

int main()
{
    int opcion;
    double temperatura, resultado;

    cout << "Programa de conversion de Temperatura" << endl;
    cout << "1. Convertir Fahrenheit a Celsius" << endl;
    cout << "2. Convertir Celsius a Fahrenheit" << endl;
    cout << "Seleccione una opcion (1 o 2): ";
    cin >> opcion;

    if (opcion == 1)
    {
        cout << "Ingrese la temperatura en Fahrenheit: ";
        cin >> temperatura;
        resultado = FahhenheitACelsius(temperatura);
        cout << "Temperatura en Celsius: " << resultado << endl;
    }
    else if (opcion == 2)
    {
        cout << "Ingrese la temperatura en Celsius: ";
        cin >> temperatura;
        resultado = CelsiusAFahrenheit(temperatura);
        cout << "Temperatura en Fahrenheit: " << resultado << endl;
    }
    else
    {
        cout << "Opcion no valida." << endl;
    }
}
