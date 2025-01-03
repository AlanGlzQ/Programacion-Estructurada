//Creacion de un arreglo unidimensional, multiplicarlo e imprimirlo sin utilizar estructuras de control iterativas
#include <stdio.h>
#define TAM_ARREGLO 10
int main() {
    //Declaracion de variables y arreglos
    int arreglo[TAM_ARREGLO];  //Arreglo para almacenar valores originales
    int resultado[TAM_ARREGLO];  //Arreglo para almacenar los resultados
    int multiplicador;

    //Llenar el arreglo con valores ingresados por el usuario
    printf("Introduce el primer numero: ");
    scanf("%d", &arreglo[0]);

    printf("Introduce el segundo numero: ");
    scanf("%d", &arreglo[1]);

    printf("Introduce el tercer numero: ");
    scanf("%d", &arreglo[2]);

    printf("Introduce el cuarto numero: ");
    scanf("%d", &arreglo[3]);

    printf("Introduce el quinto numero: ");
    scanf("%d", &arreglo[4]);

    printf("Introduce el sexto numero: ");
    scanf("%d", &arreglo[5]);

    printf("Introduce el septimo numero: ");
    scanf("%d", &arreglo[6]);

    printf("Introduce el octavo numero: ");
    scanf("%d", &arreglo[7]);

    printf("Introduce el noveno numero: ");
    scanf("%d", &arreglo[8]);

    printf("Introduce el decimo numero: ");
    scanf("%d", &arreglo[9]);

    printf("Introduce el multiplicador: ");
    scanf("%d", &multiplicador);

    //Multiplicar cada valor del arreglo y almacenar el resultado en el segundo arreglo
    resultado[0] = arreglo[0] * multiplicador;
    resultado[1] = arreglo[1] * multiplicador;
    resultado[2] = arreglo[2] * multiplicador;
    resultado[3] = arreglo[3] * multiplicador;
    resultado[4] = arreglo[4] * multiplicador;
    resultado[5] = arreglo[5] * multiplicador;
    resultado[6] = arreglo[6] * multiplicador;
    resultado[7] = arreglo[7] * multiplicador;
    resultado[8] = arreglo[8] * multiplicador;
    resultado[9] = arreglo[9] * multiplicador;

    //Imprimir el arreglo
    printf("Resultado:\n");
    printf("%d\n", resultado[0]);
    printf("%d\n", resultado[1]);
    printf("%d\n", resultado[2]);
    printf("%d\n", resultado[3]);
    printf("%d\n", resultado[4]);
    printf("%d\n", resultado[5]);
    printf("%d\n", resultado[6]);
    printf("%d\n", resultado[7]);
    printf("%d\n", resultado[8]);
    printf("%d\n", resultado[9]);

    return 0;
}

