//Creacion de dos registrso con apartados distintos, reasignar valor de uno de los campos e impresion
#include<stdio.h>
#include<stdlib.h>
#define TAM_NOMBRE 70

//Registro Carrera
typedef struct {
    int idCarrera;
    char nombre[TAM_NOMBRE];
} Carrera;

//Registro Alumno
typedef struct {
    char nombre[TAM_NOMBRE];
    int edad;
    float promedio;
    int idCarrera;
} Alumno;

int main() {
    Alumno alumno;
    Carrera carrera;

    //Solicitud al usuario para Carrera
    printf("Ingrese el ID de la Carrera (solo n%cmeros): ", 163);
    scanf("%d", &carrera.idCarrera);
    getchar();
    printf("Ingrese el nombre de la Carrera: ");
    fgets(carrera.nombre, TAM_NOMBRE, stdin);

    //Solicitud al usuario para Alumno
    printf("Ingrese el nombre del Alumno: ");
    fgets(alumno.nombre, TAM_NOMBRE, stdin);
    printf("Ingrese la edad del Alumno: ");
    scanf("%d", &alumno.edad);
    printf("Ingrese el promedio del Alumno: ");
    scanf("%f", &alumno.promedio);

    //Asignar el ID de la carrera al apartado de carrera del registro alumno
    alumno.idCarrera = carrera.idCarrera;

    printf("\nDatos de la Carrera:\n");
    printf("ID de Carrera: %d\n", carrera.idCarrera);
    printf("Nombre de la Carrera: %s", carrera.nombre);

    printf("\nDatos del Alumno:\n");
    printf("Nombre del Alumno: %s", alumno.nombre);
    printf("Edad del Alumno: %d\n", alumno.edad);
    printf("Promedio del Alumno: %.2f\n", alumno.promedio);
    printf("ID de Carrera del Alumno: %d\n", alumno.idCarrera);

    return 0;
}

