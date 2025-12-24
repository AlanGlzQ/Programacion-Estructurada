//Calcular la estacion del a�o a partir del mes y dia proporcionados por el usuario
#include <stdio.h>
#include <stdlib.h>

//Meses inicializados en 1
enum {ENERO = 1, FEBRERO, MARZO, ABRIL, MAYO, JUNIO, JULIO, AGOSTO, SEPTIEMBRE, OCTUBRE, NOVIEMBRE, DICIEMBRE};

//D�as
enum {dia20 = 20, dia21, dia22, dia23, dia24};

int main() {
    //Variables
    int dia, mes;
    char* salidaMes;
    char* salidaEstacion;

    //Solicitud al usuario
    printf("Ingrese el d%ca: ", 161);
    scanf("%d", &dia);
    printf("Ingrese el n%cmero del mes (1-12): ",163);
    scanf("%d", &mes);

    //Validadores mes
    if (mes == ENERO) {
        salidaMes = "Enero";
    } else if (mes == FEBRERO) {
        salidaMes = "Febrero";
    } else if (mes == MARZO) {
        salidaMes = "Marzo";
    } else if (mes == ABRIL) {
        salidaMes = "Abril";
    } else if (mes == MAYO) {
        salidaMes = "Mayo";
    } else if (mes == JUNIO) {
        salidaMes = "Junio";
    } else if (mes == JULIO) {
        salidaMes = "Julio";
    } else if (mes == AGOSTO) {
        salidaMes = "Agosto";
    } else if (mes == SEPTIEMBRE) {
        salidaMes = "Septiembre";
    } else if (mes == OCTUBRE) {
        salidaMes = "Octubre";
    } else if (mes == NOVIEMBRE) {
        salidaMes = "Noviembre";
    } else if (mes == DICIEMBRE) {
        salidaMes = "Diciembre";
    }

    if ((mes == MARZO && dia >= dia21) || mes == ABRIL || mes == MAYO || (mes == JUNIO && dia <= dia20)) {
        salidaEstacion = "Primavera";//Se utiliza el lapso de duracion de cada estacion como condicion
    } else if ((mes == JUNIO && dia >= dia21) || mes == JULIO || mes == AGOSTO || (mes == SEPTIEMBRE && dia <= dia23)) {
        salidaEstacion = "Verano";
    } else if ((mes == SEPTIEMBRE && dia >= dia24) || mes == OCTUBRE || mes == NOVIEMBRE || (mes == DICIEMBRE && dia <= dia21)) {
        salidaEstacion = "Oto�o";
    } else if ((mes == DICIEMBRE && dia >= dia22) || mes == ENERO || mes == FEBRERO || (mes == MARZO && dia <= dia20)) {
        salidaEstacion = "Invierno";
    }

    printf("\nEl mes es %s y la estaci%cn es %s\n", salidaMes, 162, salidaEstacion);
    //Imprimir el mes y la estacion
    return 0;

}


