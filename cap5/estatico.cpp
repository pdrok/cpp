// estatico.cpp
class Ejemplo
{
public:
    static int valor; // declarar miembro estatico
    int identificador;
};

int Ejemplo::valor; // definir miembro estatico

int main()
{
    Ejemplo objeto1;
    Ejemplo objeto2;
    objeto1.valor = 1; // uso del miembro dato estatico comun
    objeto2.valor = 10;
}