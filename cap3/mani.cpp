// Manipuladores de formato bits

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i = 100;
    cout << setfill('.');

    cout << setiosflags(ios::left);
    cout << setw(20) << "Decimal";
    cout << resetiosflags(ios::left);
    cout << setw(6) << dec << i << endl;

    cout << setiosflags(ios::left);
    cout << setw(20) << "Hexadecimal";
    cout << resetiosflags(ios::left);
    cout << setw(6) << hex << i << endl;

    cout << setiosflags(ios::left);
    cout << setw(20) << "Octal";
    cout << resetiosflags(ios::left);
    cout << setw(6) << oct << i << endl;
}
