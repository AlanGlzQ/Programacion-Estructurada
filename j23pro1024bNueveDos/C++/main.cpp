//Calculadora de areas de diferentes figuras geometricas
#include <iostream>
#include <cmath>  //Para utilizar M_PI y pow
#define NUM_DOS 2
using namespace std;

enum{CIRCULO=1, CUADRADO, TRIANGULO, RECTANGULO};

int main() {
    int opcion;
    double area = 0;

    // Mostrar menú de opciones
    cout << "Elige una figura para calcular el area:\n\n";
    cout << CIRCULO << ". Círculo\n";
    cout << CUADRADO << ". Cuadrado\n";
    cout << TRIANGULO << ". Triángulo\n";
    cout << RECTANGULO << ". Rectángulo\n";
    cout << "\nIngresa la opción: ";
    cin >> opcion;

    switch (opcion) {
        case CIRCULO: {
            double radio;
            cout << "\nIngresa el radio: ";
            cin >> radio;
            area = M_PI * pow(radio, NUM_DOS);
            cout << "\nEl area del círculo es: " << area << endl;
            break;
        }
        case CUADRADO: {
            double lado;
            cout << "\nIngresa el lado del cuadrado: ";
            cin >> lado;
            area = pow(lado, NUM_DOS);
            cout << "\nEl area del cuadrado es: " << area << endl;
            break;
        }
        case TRIANGULO: {
            double base, altura;
            cout << "\nIngresa la base del triángulo: ";
            cin >> base;
            cout << "Ingresa la altura del triángulo: ";
            cin >> altura;
            area = (base * altura) / NUM_DOS;
            cout << "\nEl area del triángulo es: " << area << endl;
            break;
        }
        case RECTANGULO: {
            double base, altura;
            cout << "\nIngresa la base del rectángulo: ";
            cin >> base;
            cout << "Ingresa la altura del rectángulo: ";
            cin >> altura;
            area = base * altura;
            cout << "\nEl area del rectángulo es: " << area << endl;
            break;
        }
        default:
            cout << "\nOpción no válida." << endl;
    }

    return 0;
}
