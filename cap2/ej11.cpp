#include <iostream>
using namespace std;

bool esBisiesto(int anio)
{
    if (anio % 400 == 0)
        return true;
    if (anio % 100 == 0)
        return false;
    return anio % 4 == 0;
}

bool fechaValida(int dia, int mes, int anio)
{
    int diasMeses[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (esBisiesto(anio))
    {
        diasMeses[1] = 29;
    }

    return mes >= 1 && mes <= 12 && dia >= 1 && dia <= diasMeses[mes - 1];
}

int diasTranscurridos(int dia, int mes, int anio)
{
    int diasMeses[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (esBisiesto(anio))
    {
        diasMeses[1] = 29;
    }

    int totalDias = 0;
    for (int i = 0; i < mes - 1; ++i)
    {
        totalDias += diasMeses[i];
    }

    totalDias += dia;

    return totalDias;
}

int main()
{
    int dia, mes, anio;
    do
    {
        cout << "Ingrese una fecha (dia mes anio): ";
        cin >> dia >> mes >> anio;

        if (!fechaValida(dia, mes, anio))
        {
            cout << "Fecha invalida. Por favor, intente nuevamente. " << endl;
        }
    } while (!fechaValida(dia, mes, anio));
    cout << "Dias transcurridos desde el 1 de enero: "
         << diasTranscurridos(dia, mes, anio) << endl;
}