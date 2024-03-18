#include <iostream>
#include <cmath>

using namespace std;
typedef double (*FuncionPtr)(int);

double funSuma(int n, FuncionPtr f)
{
    double suma = 0.0;
    for (int i = 1; i <= n; ++i)
    {
        suma += f(i);
    }

    return suma;
}

double inversos(int k)
{
    return 1.0 / k;
}

double cuadrados(int k)
{
    return pow(k, 2);
}

int main()
{
    int n;
    cout << "Ingrese n para calcular la suma de los inversos: ";
    cin >> n;
    cout << "Suma de los inversos de 1 a " << n << funSuma(n, inversos) << endl;

    cout << "Ingrese n para calcular la suma de los cuadrados: ";
    cin >> n;
    cout << "Suma de los cuadrados de 1 a " << n << " es: " << funSuma(n, cuadrados) << endl;
}