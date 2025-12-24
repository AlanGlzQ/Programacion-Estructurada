//Calcular la conversion de grados Celsius a Fahrenheit solicitando el valor al usuario
#include <iostream>
using namespace std;

#define SUMA_F 32
int main()
{
    float celsius, fahrenheit;

    cout << "Ingrese el valor en grados Celsius: ";

    cin >> celsius;

    //Operación formula F = 1.8 * C + 32
    fahrenheit = 1.8 * celsius + SUMA_F;

    //Respuesta con equivalencia
    cout << celsius << " grados Celsius equivalen a " << fahrenheit << " grados Fahrenheit." << endl;

    return 0;
}
