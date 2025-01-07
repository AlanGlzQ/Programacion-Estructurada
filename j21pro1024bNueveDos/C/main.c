//Determinacion de un a�o bisiesto
#include <stdio.h>
//Condiciones
#define BISIESTO 4
#define ANIO_0 0
#define EXCEPCION_ANIOS 100
#define EXCEPCION_BISIESTOS 400

int main() {
    int anio;

    //Solicitar el a�o al usuario
    printf("Ingrese un a%co: ", 164);
    scanf("%d", &anio);

    //Condiciones para determinar si es un a�o bisiesto
    if ((anio % BISIESTO == ANIO_0 && anio % EXCEPCION_ANIOS != ANIO_0) || (anio % EXCEPCION_BISIESTOS == ANIO_0)) {
        printf("%d es un a%co bisiesto\n", anio, 164);
    } else {
        printf("%d no es un a%co bisiesto\n", anio, 164);
    }

    return 0;
}

