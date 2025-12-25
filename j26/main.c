//Manejo de variables
#include <stdio.h>
#include <stdlib.h> // Para abs()

//Constantes
const int SUMA_POR_PAR = 5;
const int RESTA_POR_IMPAR = 5;
const int VALOR_UMBRAL = 100;
const int SUMA_FINAL = 100;
const int RESTA_FINAL = 100;

int main() {
    int x;

    //Solicitud al usuario
    printf("Ingrese un n%cmero: ",163);
    scanf("%d", &x);

    if (x >= 0) {
        //Elevar al cuadrado
        x = x * x;

        //Par: sumar 5, impar: restar 5
        if (x % 2 == 0) {
            x += SUMA_POR_PAR;
        } else {
            x -= RESTA_POR_IMPAR;
        }
    } else {
        //Negativo, elevar al cubo
        x = x * x * x;

        //Valor absoluto de x
        x = abs(x);

        //Sumar o restar 100
        if (x > VALOR_UMBRAL) {
            x += SUMA_FINAL;
        } else {
            x -= RESTA_FINAL;
        }
    }


    printf("El valor final de x es: %d\n", x);

    return 0;
}
