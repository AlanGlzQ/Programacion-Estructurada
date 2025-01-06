//Calcular un descuento dependiendo del precio a pagar en la compra
#include <iostream>
#define PRECIO_DESC 50

using namespace std;

int main() {
    float total;

    cout << "Ingrese el monto total de la compra: ";
    cin >> total;

    //Validador
    if (total >= PRECIO_DESC) {
            total *= 0.8;// total = total * 0.8
    }

    //Impresión de datos
    cout << "El monto a pagar es: " << total << endl;

    return 0;
}
