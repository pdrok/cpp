// nombre de archivo: getl.cpp
#include <iostream>
using namespace std;

int main()
{
    char ciudad[12];
    cin.getline(ciudad, 6);
    cout << "\n"
         << ciudad << "\n";
}