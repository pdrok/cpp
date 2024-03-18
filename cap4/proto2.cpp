// Archivo proto2.cpp
#include <iostream>
using namespace std;
// void visualizar(double) {}

void visualizar(double d)
{
    cout << "discriminante =" << d << endl;
}

void discriminante(double a, double b, double c)
{
    double d;
    d = b * b - 4 * a * c;
    visualizar(d);
}

int main()
{
    cout << "Teclear a b c";
    double a, b, c;
    cin >> a >> b >> c;
    discriminante(a, b, c);
}