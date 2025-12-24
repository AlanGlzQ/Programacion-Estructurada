//Crear dos registros, solicitar datos al usuario e imprimirlos aparte
#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX_NOMBRES 30

//Registro Arbol
typedef struct{
    int numArbol;
    float alturaArbol;
    char tipoArbol[TAM_MAX_NOMBRES];//utilizar una cadena
} Arbol;

//Registro Libro
typedef struct{
    char nombreLibro[TAM_MAX_NOMBRES];//utilizar una cadena
    int numEdicion;
    float precioLibro;
} Libro;

int main()
{
    //Variables del tipo registro
    Arbol arboles;
    Libro miLibro;

    //Solicitud al usuario para Arbol
    printf("Ingrese el n%cmero de %crboles que hay en su parque m%cs cercano: ", 163, 160, 160);
    scanf("%d", &arboles.numArbol);
    printf("Ingrese la altura aproximada de uno de los %crboles en metros:  ", 160);
    scanf("%f", &arboles.alturaArbol);
    printf("Ingrese el nombre del tipo de %crbol: ", 160);
    getchar();
    fgets(arboles.tipoArbol, TAM_MAX_NOMBRES, stdin);

    //Solicitud al usuario para Libro
    printf("\nIngrese el nombre del libro que le interesa: ");
    fgets(miLibro.nombreLibro, TAM_MAX_NOMBRES, stdin);
    printf("Ingrese el n%cmero de edici%cn: ", 163, 162);
    scanf("%d", &miLibro.numEdicion);
    printf("Ingrese el precio del libro: ");
    scanf("%f", &miLibro.precioLibro);
    getchar();

    //Imprimir los datos de Arbol
    printf("\n**DATOS ARBOL**\n");
    printf("\nN%cmero de Arboles                   %d\n", 163, arboles.numArbol);
    printf("\nAltura del %crbol en metros          %.2f\n", 160, arboles.alturaArbol);
    printf("\nTipo de Arbol                       %s\n", arboles.tipoArbol);

    //Imprimir los datos de Libro
    printf("\n**DATOS LIBRO**\n");
    printf("\nNombre del libro                    %s", miLibro.nombreLibro);
    printf("\nN%cmero de edicion                   %d\n", 163, miLibro.numEdicion);
    printf("\nPrecio de libro                     $%.2f\n", miLibro.precioLibro);

    return 0;
}




