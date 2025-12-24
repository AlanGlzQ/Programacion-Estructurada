//NueveDos
#include <stdio.h>

int main() {
    //Declaracion de variables y arreglos
    int arreglo[10];  //Arreglo para almacenar los 10 n�meros
    int resultado[10];  //Arreglo para almacenar los resultados
    int multiplicador;

    // Solicitud al usuario
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

    //Solicitud del multiplicador
    printf("Introduce el multiplicador: ");
    scanf("%d", &multiplicador);

    //Multiplicar cada n�mero por el multiplicador y almacenar en el arreglo resultado
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

    //Imprimir el arreglo resultado, cada valor en una nueva l�nea
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

