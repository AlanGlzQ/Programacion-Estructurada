//Utilizar variables en diferentes operaciones
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b;
    printf("Programa para reutilizar valores en distintas operaciones.\n");
	printf("Ingresa dos valores\n");
	printf("Primer valor: ");
	scanf("%d" ,&a);
	printf("\nSegundo valor: ");
	scanf("%d" ,&b);

	//Operaciones
	printf("\n%d + %d = %d\n", a,b , a + b);
	printf("%d - %d = %d\n", a,b , a - b);
	printf("%d - %d = %d\n", b,a , b - a);
	printf("%d * %d = %d\n", a,b , a * b);
	printf("%d / %d = %d\n", a,b , a / b);
	printf("%d / %d = %d\n", b,a , b / a);
	printf("%d %% %d = %d\n", a,b , a % b);
	printf("%d %% %d = %d", b,a , a % b);


	return 0;
}
