#include <stdio.h>

/**
 * Ejercicio: Analisis de Matriz Real 4x4
 * Objetivo: Calcular estadisticas (suma, promedio, min/max) y realizar
 * conteos condicionales sobre los elementos.
 */

#define DIM 4

// Prototipos de funciones para mantener main limpio
void leerMatriz(float m[DIM][DIM]);
void mostrarMatriz(float m[DIM][DIM]);
void analizarDatos(float m[DIM][DIM]);

int main() {
    float matriz[DIM][DIM];

    printf("--- ANALISIS DE MATRIZ 4x4 ---\n");
    leerMatriz(matriz);
    
    printf("\n--- RESULTADOS ---\n");
    mostrarMatriz(matriz);
    analizarDatos(matriz);

    return 0;
}

void leerMatriz(float m[DIM][DIM]) {
    for (int i = 0; i < DIM; i++) {
        for (int j = 0; j < DIM; j++) {
            printf("Ingrese valor para [%d][%d]: ", i + 1, j + 1);
            scanf("%f", &m[i][j]);
        }
    }
}

void mostrarMatriz(float m[DIM][DIM]) {
    printf("\na) Contenido de la matriz:\n");
    for (int i = 0; i < DIM; i++) {
        for (int j = 0; j < DIM; j++) {
            printf("%8.2f ", m[i][j]);
        }
        printf("\n");
    }
}

void analizarDatos(float m[DIM][DIM]) {
    double suma = 0;
    float min = m[0][0], max = m[0][0];

    // Primera pasada: Suma, Minimo y Maximo
    for (int i = 0; i < DIM; i++) {
        for (int j = 0; j < DIM; j++) {
            suma += m[i][j];
            if (m[i][j] < min) min = m[i][j];
            if (m[i][j] > max) max = m[i][j];
        }
    }

    printf("\nb) Suma total: %.2f", suma);
    printf("\nc) Promedio: %.2f", suma / (DIM * DIM));

    // Segunda pasada: Posiciones y Conteos
    int c_igual_min = 0, c_igual_max = 0;
    int c_mayor_min = 0, c_menor_max = 0;

    printf("\n\nd) Posicion(es) del elemento menor (%.2f):", min);
    printf("\ne) Posicion(es) del elemento mayor (%.2f):", max);

    // Reiniciamos flujo para imprimir posiciones mientras contamos
    printf("\n\n--- Detalle de Posiciones ---");
    for (int i = 0; i < DIM; i++) {
        for (int j = 0; j < DIM; j++) {
            if (m[i][j] == min) {
                printf("\nMinimo encontrado en: [%d, %d] = %.2f", i + 1, j + 1, min);
                c_igual_min++;
            } else if (m[i][j] > min) {
                c_mayor_min++;
            }

            if (m[i][j] == max) {
                printf("\nMaximo encontrado en: [%d, %d] = %.2f", i + 1, j + 1, max);
                c_igual_max++;
            } else if (m[i][j] < max) {
                c_menor_max++;
            }
        }
    }

    printf("\n\n--- Estadisticas de Frecuencia ---");
    printf("\nf) Iguales al menor: %d", c_igual_min);
    printf("\ng) Iguales al mayor: %d", c_igual_max);
    printf("\nh) Mayores al menor: %d", c_mayor_min);
    printf("\ni) Menores al mayor: %d\n", c_menor_max);
}
