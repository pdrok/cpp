#include <stdio.h>
int numeros[10] = {100, 15, 405, 12, 20, 75, 500, 300, 400, -14};

// sumar arrays del numeros hasta que se alcance
// un valor negativo

int suma(int *nums)
{
    int s = 0;
    while (*nums >= 0)
        s += *nums++;
    return s;
}

int main()
{
    printf("La suma es:  %d\n", suma(numeros));
}