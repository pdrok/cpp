// TESTMEM.CPP. Este programa comprueba cuanta memoria esta disponible
#include <iostream>

int main()
{
    char *p;
    for (int i = 1;; i++)
    {
        p = new char[1024];

        if (p == 0)
            break;
        std::cout << "Asignado: " << 10 << "KB\n";
    }
}