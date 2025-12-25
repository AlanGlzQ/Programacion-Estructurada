//Impresion de datos utilizando estructuras de control iterativas
#include<stdio.h>

int main(){
    char mayuscula = 'A';
    char minuscula = 'a';

    printf("Abecedario impreso de mayusculas y minusculas\n\n");

    do{
        printf("%c%c", mayuscula, minuscula);

        if(mayuscula != 'Z'){
            printf(", ");//Imprimir una , y espacio cada que se re-imprima
        }
        //Contadores
        mayuscula++;
        minuscula++;
    } while(mayuscula <= 'Z');//Repetir bucle hasta mientras sea menor o igual a Z

    printf("\n");

    return 0;
}
