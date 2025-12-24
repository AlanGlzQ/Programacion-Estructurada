//Intercambio de valores de 3 variables solicitando valores iniciales al usuario
#include <stdio.h>
#include <stdlib.h>

int main(){
    //Variables
    int a,b,c,aux;

    //Solicitud al usuario
    printf("Ingrese 3 valores enteros: \n");
    printf("Valor a: ");
    scanf("%d", &a);
    printf("\nValor b: ");
    scanf("%d", &b);
    printf("\nValor c: ");
    scanf("%d", &c);

    //Valores originales
    printf("\nValores Originales: \n");
    printf("a = %d \n", a);
    printf("b = %d \n", b);
    printf("c = %d \n", c);

    //Cambio de varoles
    aux= a;
    a=b;
    b=c;
    c=aux;

    printf("\nLos nuevos valores son: ");

    printf("\na = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    return 0;


}
