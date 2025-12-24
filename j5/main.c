//Calcular area de circulo
#include <stdio.h>
#include <stdlib.h>

#define PI 3.1416

int main()
{
    float a, r;
    printf("Programa para calcular el area de un circulo\n");
    printf("Ingrese el radio: ");
    scanf("%f", &r);

    a = PI*(r*r);//pi por radio al cuadrado


    printf("Radio = %.2f\n", r);
    printf("Pi = %f\n", PI);
    printf("Area = %.4f\n", a);

	return 0;
}
