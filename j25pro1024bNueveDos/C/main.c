//Calculadora simple solicitando operador y valores al usuario
#include <stdio.h>
#define CERO 0
//operadores para el switch
enum Operacion{
    SUMA = '+',
    RESTA = '-',
    MULTIPLICACION = '*',
    DIVISION = '/',
    MODULO = '%'
    };

int main(){
    int num1, num2, resultado;
    char operador;

    printf("Ingresa el operador que deseas utilizar(+, -, *, /, %%): ");
    scanf(" %c", &operador);
    getchar();
    printf("Ingresa el primer numero: ");
    scanf("%d", &num1);
    printf("Ingresa el segundo numero: ");
    scanf("%d", &num2);

    switch(operador){
    case SUMA:
       resultado= num1+num2;
       printf("%d %c %d = %d", num1, operador, num2, resultado);
       break;
    case RESTA:
        resultado= num1 - num2;
        printf("%d %c %d = %d", num1, operador, num2, resultado);
        break;
    case MULTIPLICACION:
        resultado= num1 * num2;
        printf("%d %c %d = %d", num1, operador, num2, resultado);
        break;

    //CASOS ESPECIALES DIVISION Y MODULO
    case DIVISION:
        if(num2 < CERO && num2 > CERO){
            resultado = num1 / num2;
            printf("%d %c %d = %d", num1, operador, num2, resultado);
        }else{
            printf("ERROR: La division entre %d no es posible.", CERO);
        }
        break;
    case MODULO:
        if(num2 < CERO && num2 > CERO){
            resultado= num1 % num2;
            printf("%d %c %d = %d", num1, operador, num2, resultado);
        }else{
            printf("ERROR: No es posible calcular el residuo(modulo) de una division entre %d.", CERO);
        }
        break;
    default:
        printf("Opcion no valida.");
        break;
    }

    return 0;
}
