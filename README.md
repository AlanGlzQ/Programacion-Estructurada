# Programación Estructurada en C y C++

Conjunto de ejercicios en **C y C++** pensados para practicar desde lo más básico
hasta problemas más complejos de programación estructurada y modular.

El objetivo de este repositorio es servir como **campo de entrenamiento**:
un lugar donde reforzar lógica, sintaxis y buenas prácticas mientras se
resuelven ejercicios reales.

Puedes abrir los archivos en tu IDE/editor favorito
(VS Code, Code::Blocks, CLion, etc.) y configurar ahí la compilación.
---

##  Objetivo del repositorio

- Practicar los fundamentos de la programación estructurada.
- Reforzar el uso de **secuencias, condicionales e iteraciones**.
- Introducir el uso de **funciones, modularización y punteros**.
- Tener un histórico de ejercicios que muestren tu avance en C/C++.

---

##  Temas que se practican

A lo largo de las distintas carpetas se trabajan, entre otros, los siguientes temas:

- Entrada y salida de datos (`scanf/printf`, `cin/cout`).
- Operaciones aritméticas y lógicas.
- Estructuras de control:
  - `if`, `else`, `switch`
  - `while`, `for`, `do...while`
- Funciones y paso de parámetros.
- Arreglos y cadenas de caracteres.
- (Donde aplica) Punteros y manejo básico de memoria.
- (Donde aplica) Introducción a estructuras más grandes en C++.

> Nota: los nombres de las carpetas siguen la estructura usada en clase
> (por ejemplo: `j1pro...`, `j2pro...`, etc.), donde cada una agrupa
> un conjunto de ejercicios de una práctica o sesión.

---
## ⭐ Ejercicios recomendados para revisar primero ⭐

Si quieres ver algunos de los ejercicios más representativos, sugiero empezar por estos:

- **j8 – Conversión Fahrenheit → Celsius (C++)**  
  Programa que convierte grados Fahrenheit a Celsius de **dos maneras**:
  - una conversión **aproximada** en pasos (resta, división, ajuste),  
  - y una conversión **exacta** con la fórmula `C = 5/9 · (F - 32)` o `C = (F - 32) / 1.8`.  
  Muestra bien el uso de operaciones aritméticas y salida formateada.

- **j23 – Áreas de figuras con menú y `switch` (C++)**  
  Calcula el área de **círculo, cuadrado, triángulo o rectángulo** según una opción de menú.  
  Pide solo los datos necesarios para cada figura y usa la estructura `switch` para controlar
  el flujo. Es un buen ejemplo de selección múltiple y organización simple de casos.

- **j28 – Abecedario con `do-while` (C)**  
  Imprime el abecedario (mayúscula y minúscula: `Aa`, `Bb`, `Cc`, …) usando un ciclo
  `do-while`. Sirve como ejemplo de manejo de caracteres y de cómo recorrer rangos de
  letras en ASCII.
---
##  Ejercicios incluidos

Resumen de los ejercicios tipo `jX` que contiene este repositorio:

- **j1 – Área de triángulo (C)**  
  Calcula el área de un triángulo usando variables `a`, `b` y `h` de tipo `int`.  
  No solicita datos al usuario.

- **j2 – Área de triángulo (C)**  
  Igual que j1, pero usando variables `areaTriangulo`, `base` y `altura`.  
  No solicita datos al usuario.

- **j4 – Operaciones básicas con dos enteros (C)**  
  Pide dos enteros `a` y `b` y calcula: `a+b`, `a-b`, `b-a`, `a*b`, `a/b`, `b/a`, `a%b`, `b%a`, mostrando todos los resultados.

- **j5 – Área de círculo sin entrada (C)**  
  Calcula el área de un círculo con variables `a`, `r` y `pi` de tipo `float`.  
  No pide datos al usuario, solo imprime los valores.

- **j7 – Conversión °C → °F (C++)**  
  Pide una temperatura en grados Celsius y calcula Fahrenheit con  
  `F = 1.8 * C + 32`, mostrando ambos valores.

- **j8 – Conversión °F → °C aproximada y exacta (C++)**  
  Pide una temperatura en Fahrenheit y muestra:  
  - Conversión **aproximada**:  
    1) `F - 32`  
    2) resultado / 2  
    3) sumar 1/10 de ese valor  
  - Conversión **exacta** usando:  
    `C = 5/9 * (F - 32)` o `C = (F - 32) / 1.8`.

- **j9 – Área de círculo con entrada (C)**  
  Usa `scanf()` para leer el radio y calcula el área con `areaCirculo`, `radio` y  
  una constante `const PI = 3.1416`.

- **j11 – Intercambio de tres variables (C)**  
  Con variables `a`, `b` y `c`, muestra sus valores originales, luego los intercambia:  
  `a = valor inicial de c`, `b = valor inicial de a`, `c = valor inicial de b`,  
  y vuelve a imprimir los nuevos valores.

- **j12 – Porcentaje de asistencias (C)**  
  Con `MAXIMO_ASISTENCIAS = 34`, pide cuántas faltas tiene un alumno y calcula el  
  porcentaje de asistencias mostrando los decimales correspondientes.

- **j13 – Vector y factor multiplicador (C)**  
  Lee 10 enteros en un arreglo, luego un factor. Multiplica cada elemento por el  
  factor y guarda el resultado en un segundo arreglo, que después se imprime.  
  *Restricción*: no usar estructuras iterativas.

- **j14 – Registro Alumno (C)**  
  Define un `struct Alumno` con 3 campos: cadena, entero y flotante.  
  Lee los datos desde consola e imprime los campos en el mismo orden.

- **j15 – Registros Arbol y Libro (C)**  
  Define `struct Arbol` (entero, carácter, cadena) y `struct Libro` (cadena, entero, flotante).  
  Lee todos los campos de ambos registros desde consola y luego los imprime.

- **j16 – Alumno + Carrera (C)**  
  Amplía el ejercicio 14:  
  - Define `struct Carrera` con `idCarrera` (int) y `nombre` (cadena).  
  - Agrega `idCarrera` a `struct Alumno`.  
  Se leen primero los datos de `Carrera` y luego los de `Alumno`, asignando el  
  `idCarrera` de la carrera al alumno.

- **j17 – Descuento en tienda (C++)**  
  Pide el importe total de compra de artículos de primera necesidad.  
  Si la compra es ≥ $50, aplica 20% de descuento; si no, se deja igual.  
  Muestra únicamente el monto a pagar.  
  *Restricciones*: usar solo una variable y un solo `if` sin `else`.

- **j18 – Tres enteros en orden creciente (C++)**  
  Recibe tres enteros distintos y determina si están en orden creciente, mostrando  
  exactamente uno de estos mensajes:  
  - `"están en orden creciente"`  
  - `"no están en orden creciente"`.

- **j19 – Incremento de salario (C++)**  
  Lee el salario de un profesor y calcula su nuevo salario aplicando el criterio de  
  incrementos dado (por rangos). Si no le aplica incremento, imprime el salario tal cual.

- **j20 – Mes, día y estación (C)**  
  Pide mes (1–12) y día (1–31). Imprime el nombre del mes y la estación del año  
  (por ejemplo: “marzo / primavera” o “marzo / invierno” según la fecha límite).

- **j21 – Año bisiesto (C)**  
  Pide un año y determina si es bisiesto con las reglas:  
  - múltiplos de 4 → bisiestos,  
  - múltiplos de 100 → no bisiestos,  
  - múltiplos de 400 → sí bisiestos.

- **j22 – Calculadora con switch (C++)**  
  Solicita dos valores numéricos y un operador (`+`, `-`, `*`, `/`, etc.).  
  Usa `switch` para realizar la operación e imprime operandos y resultado.  
  Acepta enteros o reales.

- **j23 – Áreas de figuras con menú (C++)**  
  Muestra un menú:  
  1) círculo, 2) cuadrado, 3) triángulo, 4) rectángulo.  
  Según la opción, pide los datos necesarios, calcula el área e imprime figura y resultado.  
  Usa `switch` y no repite la ejecución del programa.

- **j24 – Peaje en autopista (C++)**  
  Muestra un menú para tipo de vehículo: motocicleta, automóvil o camión.  
  Calcula el importe a pagar según:  
  - moto: $35 + IVA,  
  - auto: $48.50 + IVA,  
  - camión: $57 + $18 por tonelada + IVA (16%).  
  Imprime tipo de vehículo e importe final.

- **j25 – Operador elegido por el usuario (C)**  
  Pide primero un operador (`+`, `-`, `*`, `/`, `%`), luego los enteros `a` y `b`.  
  Muestra la operación realizada y su resultado.

- **j26 – Transformación de un solo valor (C)**  
  Pide un número `x` y trabaja siempre sobre la misma variable:  
  - Si `x` > 0: lo eleva al cuadrado; si el nuevo `x` es par, suma 5, si no, resta 5.  
  - Si `x` < 0: lo eleva al cubo, toma su valor absoluto; si el nuevo `x` > 100, suma 100,  
    en otro caso resta 100.  
  Imprime el valor final de `x`.

- **j27 – Diferencia de tiempos HH:MM:SS (C)**  
  Pide tiempo inicial (hora, minuto, segundo) y tiempo final.  
  Calcula el tiempo transcurrido en formato `HH:MM:SS` o avisa si el tiempo final es menor  
  que el inicial. Respeta rangos válidos (0–59 seg/min, 0–23 horas).

- **j28 – Abecedario con do-while (C)**  
  Imprime el abecedario (al menos el inglés) mostrando pares mayúscula/minúscula:  
  `Aa`, `Bb`, `Cc`, … usando la estructura de control `do-while`.
