#include <stdio.h>

/**
 * Ejercicio: Multiplicacion de Matrices Cuadradas
 * Objetivo: Multiplicar dos matrices (A y B) inicializadas con valores 
 * secuenciales y mostrar el proceso completo.
 */

#define N 3 // Tamaño de la matriz (N x N)

int main() {
    int matrizA[N][N], matrizB[N][N], resultado[N][N] = {0};
    int valor;

    // 1. Entrada de datos
    printf("Ingrese el valor inicial para las matrices: ");
    if (scanf("%d", &valor) != 1) {
        printf("Error: Entrada invalida.\n");
        return 1;
    }

    // 2. Llenado secuencial de ambas matrices
    // Primero llenamos A por completo, luego B
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrizA[i][j] = valor++;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrizB[i][j] = valor++;
        }
    }

    // 3. Algoritmo de Multiplicacion Matricial
    // O(n^3): Itera sobre filas de A, columnas de B y elementos intermedios
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    // 4. Salida de resultados con formato
    printf("\n--- Matriz A ---\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) printf("%-5d ", matrizA[i][j]);
        printf("\n");
    }

    printf("\n--- Matriz B ---\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) printf("%-5d ", matrizB[i][j]);
        printf("\n");
    }

    printf("\n--- Resultado (A * B) ---\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) printf("%-7d ", resultado[i][j]);
        printf("\n");
    }

    return 0;
}
