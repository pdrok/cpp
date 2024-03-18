#include <iostream>
using namespace std;

float areacir(float radio)
{
    const float pi = 3.14159265358979323846;
    return pi * radio * radio;
}

int main()
{
    float radio;
    cout << "Ingrese el radio del ciruculo: ";
    cin >> radio;

    float area = areacir(radio);
    cout << "El are del circulo con radio " << radio << " es: " << area << endl;

    return 0;
}