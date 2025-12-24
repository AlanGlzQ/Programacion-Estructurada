//Calculadora que muestre el procedimiento
#include <iostream>
using namespace std;

int main() {

    double num1, num2, resultado;
    char operacion;

    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    cout << "Elige la operación a realizar (+, -, *, /): ";
    cin >> operacion;

    //Casos
    switch (operacion) {
        case '+':
            resultado = num1 + num2;
            cout << "El resultado de " << num1 << " + " << num2 << " = " << resultado << endl;
            break;
        case '-':
            resultado = num1 - num2;
            cout << "El resultado de " << num1 << " - " << num2 << " = " << resultado << endl;
            break;
        case '*':
            resultado = num1 * num2;
            cout << "El resultado de " << num1 << " * " << num2 << " = " << resultado << endl;
            break;
        case '/':
            if (num2 < 0 && num2 > 0) {
                resultado = num1 / num2;
                cout << "El resultado de " << num1 << " / " << num2 << " = " << resultado << endl;
            } else {
                cout << "Error: No se puede dividir por cero." << endl;//Mensaje en caso de que el segundo numero sea 0
            }
            break;
        default:
            cout << "Operación no valida." << endl;//mensaje default si se ingresa un valor fuera de los parametros
            break;
    }

    return 0;
}
