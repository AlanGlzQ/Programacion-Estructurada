//
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Ingrese el primer valor: ";
    cin >> a;
    cout << "Ingrese el segundo valor: ";
    cin >> b;
    cout << "Ingrese el tercer valor: ";
    cin >> c;

    //Comparador "si a es menor que b y b es menor que c"
    if (a < b && b < c) {
        cout << "Están en orden creciente" << endl;
    } else {//Mensaje de caso contrario
        cout << "No están en orden creciente" << endl;
    }

    return 0;
}

