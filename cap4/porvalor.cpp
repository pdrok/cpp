// porvalor.cpp
// Muestra que los parametros pasados por valor
// se puede modificar dentro de la funcion sin
// cambiar la variable que representa al parametro en el llamador
#include <iostream>
using namespace std;

void DemoLocal(int valor)
{
    cout << "Dentro de DemoLocal, valor = " << valor << endl;
    valor = 75;
    cout << "Dentro del DemoLocal, valor = " << valor << endl;
}

int main()
{
    int n = 10;
    cout << "Antes de llamar a DemoLocal, n = " << n << endl;
    DemoLocal(n);
    cout << "Despues de llamar a DemoLocal, n = " << n << endl;
    cout << "Pulse Intro para continuar";
    cin.get();
}