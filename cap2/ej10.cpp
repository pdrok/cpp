#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cadena;

    cout << "Ingrese una cadena de caracteres: ";
    getline(cin, cadena);

    for (char c : cadena)
    {
        cout << c << " ";
    }

    cout << endl;

    return 0;
}