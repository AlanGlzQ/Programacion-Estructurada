//Calcular la diferencia de tiempos ingresados
#include <stdio.h>
#include <stdlib.h>
//Constantes
#define SEGUNDOS_POR_MINUTO 60
#define SEGUNDOS_POR_HORA 3600


int main() {
    //Variables
    int horaInicial, minutoInicial, segundoInicial;
    int horaFinal, minutoFinal, segundoFinal;
    int tiempoInicialSegundos, tiempoFinalSegundos, diferenciaSegundos;
    int difHoras, difMinutos, difSegundos;

    //Datos iniciales
    printf("Ingrese la hora inicial: ");
    scanf("%d", &horaInicial);
    printf("Ingrese los minutos iniciales: ");
    scanf("%d", &minutoInicial);
    printf("Ingrese los segundos iniciales: ");
    scanf("%d", &segundoInicial);

    //Datos finales
    printf("\nIngrese la hora final: ");
    scanf("%d", &horaFinal);
    printf("Ingrese los minutos finales: ");
    scanf("%d", &minutoFinal);
    printf("Ingrese los segundos finales: ");
    scanf("%d", &segundoFinal);

    //Convertir datos iniciales y finales a segundos
    tiempoInicialSegundos = horaInicial * SEGUNDOS_POR_HORA + minutoInicial * SEGUNDOS_POR_MINUTO + segundoInicial;
    tiempoFinalSegundos = horaFinal * SEGUNDOS_POR_HORA + minutoFinal * SEGUNDOS_POR_MINUTO + segundoFinal;

    //Diferencia
    diferenciaSegundos = tiempoFinalSegundos - tiempoInicialSegundos;

    //Advertencia
    if (tiempoFinalSegundos < tiempoInicialSegundos) {
        printf("\nTiempo final inferior al tiempo inicial\n");
    } else {
        //Convertir datos al formato HH:MM:SS
        difHoras = diferenciaSegundos / SEGUNDOS_POR_HORA;
        diferenciaSegundos %= SEGUNDOS_POR_HORA;
        difMinutos = diferenciaSegundos / SEGUNDOS_POR_MINUTO;
        difSegundos = diferenciaSegundos % SEGUNDOS_POR_MINUTO;

        //Impresi�n de datos
        printf("\nDiferencia %02d:%02d:%02d\n", difHoras, difMinutos, difSegundos);
    }

    return 0;
}

