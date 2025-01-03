//Area de un triangulo
#include <stdio.h>
#define DIVISION_AREA_TRIANGULO 2

int main(){
    int a, b, h;
    printf("Programa para calcular el área de un triángulo con valores hardcodeados.\n");

    b=5;

    h=2;

    a = (b*h)/DIVISION_AREA_TRIANGULO;

    printf("Base: %d", b);
    printf("\nAltura: %d", h);
    printf("\nResultado: %d",a);

    return 0;
}
