#include <iostream>
using namespace std;

void menorAcero(int &a, int &b)
{
    if (a < b)
    {
        a = 0;
    }
    else if (b < a)
    {
        b = 0;
    }
}

int main()
{
    int x, y;
    cout << "Ingrese el primer numero: ";
    cin >> x;
    cout << "Ingrese el segundo numero: ";
    cin >> y;

    menorAcero(x, y);

    cout << "Despues de aplicar menorAcero: \n";
    cout << "Primer numero: " << x << "\nSegundo numero: " << y << endl;

    return 0;
}