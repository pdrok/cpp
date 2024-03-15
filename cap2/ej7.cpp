#include <iostream>
using namespace std;

struct Distancia
{
    int metros;
    int centimetros;
};

struct Volumen
{
    Distancia longitud;
    Distancia anchura;
    Distancia altura;
};

double distanciaEnMetros(const Distancia &d)
{
    return d.metros + (d.centimetros / 100.0);
}

double calcularVolumen(const Volumen &v)
{
    double longitudMetros = distanciaEnMetros(v.longitud);
    double anchuraMetros = distanciaEnMetros(v.anchura);
    double alturaMetros = distanciaEnMetros(v.altura);
    return longitudMetros * anchuraMetros * alturaMetros;
}

int main()
{
    Volumen habitacion;

    cout << "Ingrese la longitud de la habitacion (metros centimetros): ";
    cin >> habitacion.longitud.metros >> habitacion.longitud.centimetros;

    cout << "Ingrese la anchura de la habitacion (metros centrimetros): ";
    cin >> habitacion.anchura.metros >> habitacion.anchura.centimetros;

    cout << "Ingrese la altura de la habitacion (metros centrimestos): ";
    cin >> habitacion.altura.metros >> habitacion.altura.centimetros;

    cout << "El volumen de la habitacion es: "
         << calcularVolumen(habitacion) << " en metros cubicos" << endl;
}