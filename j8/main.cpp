//Calcular conversion de Fahrenheit a Celsius utilizando 2 metodos distintos y comprobar cuanta diferenciua existe entre ambos
#include <iostream>
#define PASO_1 32
#define PASO_2 2
#define PASO_3 10
#define DIV_CEL 1.8

using namespace std;

int main() {
    float fahrenheit, celsius_aprox, celsius_exact, diferencia;

    //Solicitar al usuario
    cout << "Ingrese el valor en grados Fahrenheit: ";
    cin >> fahrenheit;

    //Método Aproximado
    float paso1 = fahrenheit - PASO_1;//Adaptar el equivalente a la escala Fahrenheit
    float paso2 = paso1 / PASO_2;//Equivalente a multiplicar por 0.5
    float paso3 = paso2 / PASO_3;//Tomar 1/10 del valor anterior
    celsius_aprox = paso2 + paso3;//Sumar ambos valores obtenidos previamente

    //Método Exacto
    celsius_exact = (fahrenheit - PASO_1) / DIV_CEL;//Formula C = (F - 32)/1.8

    //Diferencia entre valores
    diferencia = (celsius_exact - celsius_aprox);


    cout << "Valor en Fahrenheit: " << fahrenheit << "F" << endl;
    cout << "Conversion aproximada: " << celsius_aprox << "C" << endl;
    cout << "Conversion exacta: " << celsius_exact << "C" << endl;
    cout << "Diferencia entre el valor exacto y el aproximado: " << diferencia << "C" << endl;

    return 0;
}
