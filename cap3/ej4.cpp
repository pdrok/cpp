#include <iostream>
using namespace std;
int main()
{
    cout << "a. " << endl;
    int maxFilasA = 5;

    for (int fila = 1; fila <= maxFilasA; fila++)
    {
        for (int num = 1; num <= fila; num++)
        {
            cout << num << "  ";
        }
        cout << endl;
    }

    cout << endl
         << "b. " << endl;
    int maxFilasB = 5;

    for (int fila = maxFilasB; fila > 0; fila--)
    {
        for (int num = 1; num <= fila; num++)
        {
            cout << num << "  ";
        }
        cout << endl;
    }
}