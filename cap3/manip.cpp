// manip: programa de demostracion de manipuladores
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << endl;
    cout << "Izquierda          Derecha         Hexa-\n";
    cout << "Justificada a      Justificada  a  decimal \n";
    for (int i = 5; i <= 10; i++)
    {
        cout << setiosflags(ios::left);
        cout << setw(5) << i << setw(8) << i * i * i;

        cout << setiosflags(ios::left);
        cout << setw(2) << i << setw(8) << i * i * i;

        cout << setiosflags(ios::hex | ios::showbase); // operador OR
        cout << setw(8) << i << setw(8) << i * i * i << endl;
        cout << resetiosflags(ios::hex);
    }
}