#include <iostream>
class incrementar
{
public:
    int i;
    int j;
    int sumar_dos(int i, int j);
};

class decrementar
{
public:
    int k;
    int restar_uno(int k);
};

incrementar var1; // var1 es una instancia de la clase incrementar
decrementar var2; // var2 es una instancia de la clase decrementar

int main()
{
    int x, y;
    var1.i = 1;
    var1.j = 2;
    x = var1.incrementar::sumar_dos(var1.i, var1.j);
    var2.k = 10;
    y = var2.decrementar::restar_uno(var2.k);
    std::cout << "x es :" << x << "\n";
    std::cout << "y es :" << y << "\n";
}

// funcion sumar_dos
int incrementar::sumar_dos(int i, int j)
{
    int S;
    S = i + j;
    return S;
}

// funcion restar_uno
int decrementar::restar_uno(int k)
{
    k -= 1;
    return k;
}