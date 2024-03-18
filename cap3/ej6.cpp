#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "x              f(x) \n\n ";
    cout << setiosflags(ios::showpoint);
    for (int i = 20; i <= 40; i += 2)
    {
        double x = i / 10.0;
        cout << setw(3) << setprecision(2) << x;
        cout << setw(15) << setprecision(10)
             << x * x + x + 1 / x << endl;
    }
}