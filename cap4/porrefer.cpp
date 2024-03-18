// porrefer.cpp
// Muestra el uso del parametros pasados por referencia
// y que una variable referencia utilizadas como parametro
// puede cambiar el valor de la variable parametro en el llamador
#include <iostream>
using namespace std;

void DemoLocal(int &valor)
{
    cout << "Dentro de DemoLocal, valor = " << valor << endl;
    valor = 75;
    cout << "Dentro de DemoLocal, valor = " << valor << endl;
}

int main()
{
    int n = 10;
    cout << "Antes de llamar a DemoLocal, n = " << n << endl;
    DemoLocal(n);
    cout << "Despues de llamar a DemoLocal, n = " << n << endl;
    cout << "Pulse into para contnuar";
    cin.get();
}