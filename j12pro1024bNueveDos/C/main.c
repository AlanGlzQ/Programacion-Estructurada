//Calculo de porcentaje de asistencias utilizando typecasting
#include <stdio.h>
//Constante
#define MAXIMO_ASISTENCIAS 34//Maximo de asistencias posibles y criterio de evaluacion
#define PORCENTUAL 100//Se evalua las asistencias en base a 100

int main ()
{
    int faltas;
    float porcentajeAsistencias;

    printf("*CALCULA TUS PORCENTAJE DE ASISTENCIAS*\n");
    printf("\nIngresa la cantidad de faltas: ");
    scanf("%d", &faltas);

    //Calculo, utilizando typecasting
    porcentajeAsistencias = ((MAXIMO_ASISTENCIAS - faltas) / (float)MAXIMO_ASISTENCIAS) * PORCENTUAL;

    printf("\nTu porcentaje de asistencias es: %.2f\n", porcentajeAsistencias);

    return 0;
}

