#include <iostream>
#include <cmath>

using namespace std;

class CoordenadasPolares
{
public:
    double r;
    double angulo;

    CoordenadasPolares(double x, double y)
    {

        r = sqrt(x * x + y * y);
        angulo = atan2(y, x);
    }
    void mostrarPolares() const
    {
        cout << "Coordenadas Polares:\n";
        cout << "R (radio): " << r << "\n";
        cout << "Angulo (en grados): " << angulo * (180.0 / M_PI) << endl;
    }
};

int main()
{
    double x, y;
    cout << "Ingrese las coordenadas rectangulares (x, y): ";
    cin >> x >> y;

    CoordenadasPolares polares(x, y);
    polares.mostrarPolares();

    return 0;
}