//Area de un triangulo con variables nombradas
#include <stdio.h>

#define DIV_AREA_TRIANGULO 2

int main(){
    int areaTriangulo, base, altura;

    printf("Calcular area de un triangulo solicitando valores.\n");

    printf("Ingresa la medida de la base: ");
    scanf("%d",&base);
    printf("\nIngresa la medida de la altura: ");
    scanf("%d",&altura);

    areaTriangulo = (base*altura)/DIV_AREA_TRIANGULO;
    printf("\nResultado: %d", areaTriangulo);
    return 0;
}
