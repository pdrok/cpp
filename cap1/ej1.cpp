#include <iostream>

using namespace std;

int main()
{
    int valores[] = {125, 7450, 12500, 16500};
    int anioInicial = 2000;

    for (int i = 0; i < 4; ++i)
    {
        cout << anioInicial + 1 << "  " << valores[i] << "\n";
    }
}