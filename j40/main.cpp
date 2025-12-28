#include <iostream>

/**
 * Ejercicio: Patrones Numéricos, Sumas y Multiplicaciones
 * Objetivo: Demostrar el uso de bucles anidados y acumuladores.
 */

int main() {
    int k;

    // 1. Entrada de datos con validación básica
    std::cout << "Ingrese un valor entero positivo k: ";
    if (!(std::cin >> k) || k <= 0) {
        std::cerr << "Error: Por favor, ingrese un numero entero mayor a 0." << std::endl;
        return 1; // Salida con error
    }

    // 2. Bucle externo: Controla el numero actual (de 1 a k)
    for (int i = 1; i <= k; ++i) {
        long long suma = 0;
        long long multiplicacion = 1; // Usamos long long para evitar desbordamiento en k grandes

        // --- PARTE A: Procesar y mostrar la SUMA ---
        for (int j = 1; j <= i; ++j) {
            suma += i;
            std::cout << i;
            if (j < i) std::cout << " + ";
        }
        std::cout << " = " << suma << ", ";

        // --- PARTE B: Procesar y mostrar la MULTIPLICACIÓN ---
        for (int j = 1; j <= i; ++j) {
            multiplicacion *= i;
            std::cout << i;
            if (j < i) std::cout << " * ";
        }
        std::cout << " = " << multiplicacion << std::endl;
    }

    return 0;
}
