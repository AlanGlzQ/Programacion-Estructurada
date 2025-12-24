//NueveDos
#include <stdio.h>
#include <math.h>
#define PI 3.1416

int main()
{
    //Declaración de Variables
    float areaCirculo, radio;
    
    //Solicitud al usuario y presentación del programa
    printf("Este programa calcula el area de cualquier circulo en base a su radio \n");
    printf("Ingresa el radio: ");
    scanf("%f", &radio);
    
    //Operación 
    areaCirculo = PI * pow(radio, 2);

    return 0;
}
