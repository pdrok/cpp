#include <iostream>
class fibonacci
{
public:
    // constructor ordinario

    fibonacci()
    {
        var1 = 0;
        var2 = 1;
        resultado = var1 + var2;
    }

    // constructor de copia
    fibonacci(const fibonacci &p)
    {
        var1 = p.var1;
        var2 = p.var2;
        resultado = p.resultado;
    }

    void incrementar()
    {
        var1 = var2;
        var2 = resultado;
        resultado = var1 + var2;
    }
    void visualizar()
    {
        std::cout << resultado;
    }

private:
    unsigned long int var1, var2, resultado;
};

int main()
{
    fibonacci primer_numero; // llamada al constructor ordinario
    for (int contador = 0; contador < 30; contador++)
    {
        primer_numero.visualizar();
        primer_numero.incrementar();
        std::cout << std::endl;
    }
    fibonacci segundo_numero = primer_numero; // llama al constructor copia

    for (int contador = 0; contador < 30; contador++)
    {
        segundo_numero.visualizar();
        segundo_numero.incrementar();
        std::cout << std::endl;
    }
}