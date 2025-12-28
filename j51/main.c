#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Ejercicio: Sistema de Gestion de Biblioteca (ABC)
 * Objetivo: Demostrar el uso de estructuras, arreglos de registros y
 * programacion modular para la gestion de datos.
 */

#define MAX_LIBROS 5
#define TAM_CADENA 100

typedef struct {
    char titulo[TAM_CADENA];
    char autor[TAM_CADENA];
    int anio;
    bool ocupado; // Flag para saber si el registro tiene datos
} Libro;

// --- PROTOTIPOS DE FUNCIONES ---
void inicializarBiblioteca(Libro b[], int n);
void mostrarMenu();
void altaLibro(Libro b[], int n);
void bajaLibro(Libro b[], int n);
void listarLibros(Libro b[], int n);
void buscarLibro(Libro b[], int n);
void limpiarBuffer();
void quitarSaltoLinea(char cadena[]);

int main() {
    Libro biblioteca[MAX_LIBROS];
    int opcion;

    inicializarBiblioteca(biblioteca, MAX_LIBROS);

    do {
        mostrarMenu();
        printf("Seleccione una opcion: ");
        if (scanf("%d", &opcion) != 1) {
            limpiarBuffer();
            continue;
        }
        limpiarBuffer();

        switch (opcion) {
            case 1: altaLibro(biblioteca, MAX_LIBROS); break;
            case 2: bajaLibro(biblioteca, MAX_LIBROS); break;
            case 3: listarLibros(biblioteca, MAX_LIBROS); break;
            case 4: buscarLibro(biblioteca, MAX_LIBROS); break;
            case 5: printf("Saliendo del sistema...\n"); break;
            default: printf("Opcion no valida.\n");
        }
        if (opcion != 5) {
            printf("\nPresione Enter para continuar...");
            getchar();
        }
    } while (opcion != 5);

    return 0;
}

// --- IMPLEMENTACION DE MODULOS ---

void inicializarBiblioteca(Libro b[], int n) {
    for (int i = 0; i < n; i++) {
        b[i].ocupado = false;
    }
}

void mostrarMenu() {
    printf("\n========= BIBLIOTECA VIRTUAL =========\n");
    printf("1. Registrar nuevo libro (Alta)\n");
    printf("2. Eliminar libro (Baja)\n");
    printf("3. Listar todos los libros\n");
    printf("4. Buscar libro por posicion\n");
    printf("5. Salir\n");
    printf("======================================\n");
}

void altaLibro(Libro b[], int n) {
    int indice = -1;
    for (int i = 0; i < n; i++) {
        if (!b[i].ocupado) {
            indice = i;
            break;
        }
    }

    if (indice == -1) {
        printf("Error: La biblioteca esta llena.\n");
        return;
    }

    printf("Titulo: ");
    fgets(b[indice].titulo, TAM_CADENA, stdin);
    quitarSaltoLinea(b[indice].titulo);

    printf("Autor: ");
    fgets(b[indice].autor, TAM_CADENA, stdin);
    quitarSaltoLinea(b[indice].autor);

    printf("Anio de publicacion: ");
    scanf("%d", &b[indice].anio);
    limpiarBuffer();

    b[indice].ocupado = true;
    printf("Libro registrado exitosamente en la posicion %d.\n", indice + 1);
}

void bajaLibro(Libro b[], int n) {
    int pos;
    printf("Ingrese la posicion a eliminar (1-%d): ", n);
    scanf("%d", &pos);
    limpiarBuffer();

    if (pos >= 1 && pos <= n && b[pos - 1].ocupado) {
        b[pos - 1].ocupado = false;
        printf("Registro eliminado correctamente.\n");
    } else {
        printf("Error: Registro no encontrado o posicion invalida.\n");
    }
}

void listarLibros(Libro b[], int n) {
    printf("\n--- LISTADO DE LIBROS ---\n");
    printf("%-5s %-20s %-20s %-5s\n", "POS", "TITULO", "AUTOR", "ANIO");
    bool hayDatos = false;

    for (int i = 0; i < n; i++) {
        if (b[i].ocupado) {
            printf("%-5d %-20s %-20s %-5d\n", i + 1, b[i].titulo, b[i].autor, b[i].anio);
            hayDatos = true;
        }
    }

    if (!hayDatos) printf("No hay libros registrados.\n");
}

void buscarLibro(Libro b[], int n) {
    int pos;
    printf("Ingrese posicion a consultar: ");
    scanf("%d", &pos);
    limpiarBuffer();

    if (pos >= 1 && pos <= n && b[pos - 1].ocupado) {
        printf("\nDetalles del Libro:\n");
        printf("Titulo: %s\nAutor: %s\nAnio: %d\n", b[pos - 1].titulo, b[pos - 1].autor, b[pos - 1].anio);
    } else {
        printf("Registro vacio o fuera de rango.\n");
    }
}

// --- UTILIDADES ---

void limpiarBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void quitarSaltoLinea(char cadena[]) {
    int len = strlen(cadena);
    if (len > 0 && cadena[len - 1] == '\n') {
        cadena[len - 1] = '\0';
    }
}
