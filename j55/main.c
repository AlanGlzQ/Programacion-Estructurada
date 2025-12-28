#include <stdio.h>
#include <string.h>

/**
 * Ejercicio: Gestion de Materias y Prerrequisitos (ABC)
 * Objetivo: Implementar la tecnica de reutilizacion de registros mediante
 * un arreglo de estado (materiasLibres).
 */

#define MAX_MATERIAS 10
#define TAM_NOMBRE 50
#define MAX_REQUISITOS 3

typedef struct {
    char requisito[TAM_NOMBRE + 1];
} Requisito;

typedef struct {
    char clave[TAM_NOMBRE + 1];
    char nombre[TAM_NOMBRE + 1];
    Requisito requisitos[MAX_REQUISITOS];
    int numRequisitos;
} Materia;

// Variables Globales (Segun el diseño original solicitado)
Materia materias[MAX_MATERIAS];
int materiasLibres[MAX_MATERIAS]; // 1 = Disponible, 0 = Ocupado

// --- PROTOTIPOS ---
void inicializar();
void altaMateria();
void bajaMateria();
void listarMaterias();
void limpiarBuffer();

int main() {
    int opcion;
    inicializar();

    do {
        printf("\n--- GESTION DE MATERIAS ---\n");
        printf("1. Alta de Materia\n");
        printf("2. Baja de Materia\n");
        printf("3. Listar Materias\n");
        printf("4. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);
        limpiarBuffer();

        switch(opcion) {
            case 1: altaMateria(); break;
            case 2: bajaMateria(); break;
            case 3: listarMaterias(); break;
            case 4: printf("Saliendo...\n"); break;
            default: printf("Opcion no valida.\n");
        }
    } while(opcion != 4);

    return 0;
}

void inicializar() {
    for (int i = 0; i < MAX_MATERIAS; i++) {
        materiasLibres[i] = 1; // Todos los espacios inician libres
    }
}

void altaMateria() {
    int indice = -1;
    // Buscamos el primer registro marcado como libre
    for (int i = 0; i < MAX_MATERIAS; i++) {
        if (materiasLibres[i] == 1) {
            indice = i;
            break;
        }
    }

    if (indice == -1) {
        printf("Error: No hay espacio para mas materias.\n");
        return;
    }

    printf("Clave de la materia: ");
    fgets(materias[indice].clave, TAM_NOMBRE, stdin);
    materias[indice].clave[strcspn(materias[indice].clave, "\n")] = 0;

    printf("Nombre de la materia: ");
    fgets(materias[indice].nombre, TAM_NOMBRE, stdin);
    materias[indice].nombre[strcspn(materias[indice].nombre, "\n")] = 0;

    printf("¿Cuantos requisitos tiene? (Max %d): ", MAX_REQUISITOS);
    scanf("%d", &materias[indice].numRequisitos);
    limpiarBuffer();

    for (int j = 0; j < materias[indice].numRequisitos; j++) {
        printf("  Requisito %d: ", j + 1);
        fgets(materias[indice].requisitos[j].requisito, TAM_NOMBRE, stdin);
        materias[indice].requisitos[j].requisito[strcspn(materias[indice].requisitos[j].requisito, "\n")] = 0;
    }

    materiasLibres[indice] = 0; // Marcamos como ocupado
    printf("Materia registrada exitosamente.\n");
}

void bajaMateria() {
    char claveBuscada[TAM_NOMBRE];
    printf("Ingrese la clave de la materia a eliminar: ");
    fgets(claveBuscada, TAM_NOMBRE, stdin);
    claveBuscada[strcspn(claveBuscada, "\n")] = 0;

    for (int i = 0; i < MAX_MATERIAS; i++) {
        if (!materiasLibres[i] && strcmp(materias[i].clave, claveBuscada) == 0) {
            materiasLibres[i] = 1; // Simplemente marcamos como libre
            printf("Materia eliminada (espacio liberado para reutilizacion).\n");
            return;
        }
    }
    printf("Materia no encontrada.\n");
}

void listarMaterias() {
    printf("\n%-10s | %-25s | %s\n", "CLAVE", "NOMBRE", "PRERREQUISITOS");
    printf("------------------------------------------------------------------\n");
    for (int i = 0; i < MAX_MATERIAS; i++) {
        if (!materiasLibres[i]) { // Solo procesamos registros ocupados
            printf("%-10s | %-25s | ", materias[i].clave, materias[i].nombre);
            for (int j = 0; j < materias[i].numRequisitos; j++) {
                printf("%s%s", materias[i].requisitos[j].requisito, 
                       (j < materias[i].numRequisitos - 1) ? ", " : "");
            }
            printf("\n");
        }
    }
}

void limpiarBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
