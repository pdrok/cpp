// Nombre del archivo pruebaal.cpp
// Visualiza tabla de nombres de equipos vencedores
// en un torneo de futbot
// su utiliza caracteres de conversion de modificacion de anchura

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setw(10) << "Carzola" << setw(10) << "Ubeda" << setw(10) << "Linares" << setw(10) << "Baeza" << setw(10) << "Carchelejo"
         << "\n";
    cout << setw(10) << 3 << setw(10) << 5 << setw(10) << 2 << setw(10) << 1 << setw(10) << 0 << "\n";
    cout << setw(10) << 2 << setw(10) << 5 << setw(10) << 1 << setw(10) << 0 << setw(10) << 1 << "\n";
    cout << setw(10) << 2 << setw(10) << 6 << setw(10) << 4 << setw(10) << 3 << setw(10) << 0 << "\n";
}