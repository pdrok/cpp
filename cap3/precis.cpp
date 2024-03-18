#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "123.4567 en formato por omision:";
    cout << "123.4567" << endl;

    cout << "123.4567 en prcision de dos digitos:";
    cout << setprecision(2) << 123.4567 << endl;

    // fijar la precision  por defecto
    cout << setprecision(0);
    cout << "123.4567 en notacion cientifica: ";
    cout << setiosflags(ios::scientific) << 123.4567 << endl;
}