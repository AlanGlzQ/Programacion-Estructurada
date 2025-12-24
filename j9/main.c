//Calcular el area de un circulo declarando PI como una constante
#include <stdio.h>
#include <math.h>
const float PI = 3.1416;
int main()
{
    //Declaración de Variables y Constantes
    float areaCirculo, radio;


    //Solicitud al usuario y presentación del programa
    printf("Este programa calcula el area de cualquier circulo en base a su radio \n");
    printf("Ingresa el radio: ");
    scanf("%f", &radio);

    //Operación
    areaCirculo = PI * pow(radio, 2);

    printf("Resultado: %.4f", areaCirculo);

    return 0;
}
