// Archivo proto1.cpp
#include <iostream>
using namespace std;
void discriminate(a, b, c); // ERROR: antiguo estilo C

double a, b, c;
{
    double d;
    d = b * b - 4 * a * c;
    visualizard(d); // ERROR: ningun prototipo antes de utilizar
}

void visualizar(d);
double d;
{
    cout << "discriminante =" << d << endl 1;
}
int main()
{
    cout << "Teclear a b c";
    double a, b, c;
    cin >> a >> b >> d;
    discriminate(a, b, c);
}