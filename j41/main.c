#include <stdio.h>

/**
 * Ejercicio: Matriz Secuencial con Sumatorias
 * Objetivo: Llenar una matriz 4x5, calcular sumas por filas/columnas y mostrarlas.
 */

#define FILAS 4
#define COLS 5

int main() {
    int matriz[FILAS][COLS];
    int sumas_filas[FILAS] = {0};
    int sumas_cols[COLS] = {0};
    int valor_inicial;

    // 1. Entrada de datos
    printf("Ingrese el valor inicial de la secuencia: ");
    if (scanf("%d", &valor_inicial) != 1) {
        printf("Error: Entrada no valida.\n");
        return 1;
    }

    // 2. Llenado de matriz y calculo de sumatorias
    int actual = valor_inicial;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLS; j++) {
            matriz[i][j] = actual;
            
            // Acumulamos en los vectores de sumas
            sumas_filas[i] += actual;
            sumas_cols[j] += actual;
            
            actual++; // Siguiente numero de la secuencia
        }
    }

    // 3. Impresion de la Matriz y Sumas de Filas
    printf("\nMatriz y Sumas Laterales:\n\n");
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLS; j++) {
            // %-4d alinea a la izquierda con 4 espacios de margen
            printf("%-4d ", matriz[i][j]); 
        }
        // Imprime el vector de suma de filas al lado
        printf("| %d\n", sumas_filas[i]);
    }

    // 4. Impresion de Sumas de Columnas (parte inferior)
    printf("--------------------------\n"); // Separador visual
    for (int j = 0; j < COLS; j++) {
        printf("%-4d ", sumas_cols[j]);
    }
    printf(" (Sumas Columnas)\n");

    return 0;
}
