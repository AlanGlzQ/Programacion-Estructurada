//Calcular el importe a pagar en una autopista dependiendo del vehiculo
#include <iostream>
using namespace std;

enum {MOTO=1, AUTOMOVIL, CAMION};
//Precios base
const double PRECIO_BASE_MOTO = 35.0;
const double PRECIO_BASE_AUTOMOVIL = 48.50;
const double PRECIO_BASE_CAMION = 57.0;
const double COSTO_TONELADA_CAMION = 18.0;
//IVA
const double IVA = 0.16;

int main() {
    int tipoVehiculo;
    //Variables
    double toneladas = 0;
    double precioFinal = 0;

    cout << "Seleccione el tipo de vehiculo:\n\n";
    cout << MOTO << ". Motocicleta\n";
    cout << AUTOMOVIL << ". Automóvil\n";
    cout << CAMION << ". Camión\n";
    cout << "\nIngrese la opción: ";
    cin >> tipoVehiculo;
    //Casos
    switch (tipoVehiculo) {
        case MOTO:
            precioFinal = PRECIO_BASE_MOTO + (PRECIO_BASE_MOTO * IVA);
            cout << "\nEl vehículo es una motocicleta y el importe a pagar es: $" << precioFinal << endl;
            break;

        case AUTOMOVIL:
            precioFinal = PRECIO_BASE_AUTOMOVIL + (PRECIO_BASE_AUTOMOVIL * IVA);
            cout << "\nEl vehículo es un automóvil y el importe a pagar es: $" << precioFinal << endl;
            break;
        //Caso de camiones
        case CAMION:
            cout << "\nIngrese las toneladas del camión: ";
            cin >> toneladas;
            //Calculo por tonelada
            precioFinal = PRECIO_BASE_CAMION + (COSTO_TONELADA_CAMION * toneladas);
            precioFinal += precioFinal * IVA;//precioFinal = precioFinal + (precioFinal * IVA)
            cout << "\nEl vehículo es un camión y el importe a pagar es: $" << precioFinal << endl;
            break;

        default:
            cout << "\nOpción no válida." << endl;
            break;
    }

    return 0;
}
