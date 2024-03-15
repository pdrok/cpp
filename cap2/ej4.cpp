#include <iostream>

using namespace std;

int main()
{
    float num1, num2, resultado;
    char operador;

    while (true)
    {
        cout << "Introduzca el primer numero: ";
        cin >> num1;
        cout << "Introduzca el operador (+, -, *, /): ";
        cin >> operador;
        cout << "Introduzca el segundo numero: ";
        cin >> num2;

        switch (operador)
        {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 == 0)
            {
                cout << "Error: Division por cero. " << endl;
                break;
            }
            resultado = num1 / num2;
            break;

        default:
            cout << "Operador no valido." << endl;
            break;
        }

        if (operador == '+' || operador == '-' || operador == '*' || (operador == '/' && num2 != 0))
        {
            cout << "El resultado de " << num1 << " " << operador << " " << num2 << " es: " << resultado << endl;
        }

        char respuesta;
        cout << "Desea realizar otra operacion? (S/N): ";
        cin >> respuesta;
        if (respuesta != 'S')
        {
            break;
        }
    }
    return 0;
}