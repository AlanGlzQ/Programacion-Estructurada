//Usar un registro con diferentes apartados
#include<stdio.h>
#include<stdlib.h>
#define TAM_CADENA 70

//Registro
typedef struct
{
    char nombre[TAM_CADENA];
    int edad;
    float promedio;

}Alumno;

int main()
{
    Alumno alumno;//Declaracion de variable tipo Alumno

    printf("Ingrese el nombre del Alumno: ");
    fgets(alumno.nombre, TAM_CADENA, stdin);//Utilizar fgets para almacenar variables tipo char
    printf("Ingrese la edad del Alumno: ");
    scanf("%d", &alumno.edad);
    printf("Ingrese la promedio del Alumno: ");
    scanf("%f", &alumno.promedio);

    printf("\nEl nombre del Alumno es %s\n", alumno.nombre);
    printf("\nLa edad del Alumno es %d\n", alumno.edad);
    printf("\nEl promedio del Alumno es %.2f\n", alumno.promedio);

    return 0;
}


