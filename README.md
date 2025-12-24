# Programación Estructurada en C y C++

Conjunto de ejercicios en **C y C++** pensados para practicar desde lo más básico
hasta problemas más complejos de programación estructurada y modular.

Este repositorio es un **campo de entrenamiento**: refuerza lógica, sintaxis y buenas prácticas
mientras resuelves ejercicios reales.

---

## Objetivo del repositorio

- Practicar los fundamentos de la programación estructurada.
- Reforzar el uso de **secuencias, condicionales e iteraciones**.
- Introducir **funciones, modularización y punteros** (cuando aplica).
- Mantener un histórico de ejercicios que muestre tu avance en C/C++.

---

## Temas que se practican

- Entrada y salida (`scanf/printf`, `cin/cout`).
- Operaciones aritméticas y lógicas.
- Estructuras de control:
  - `if`, `else`, `switch`
  - `while`, `for`, `do...while`
- Funciones y paso de parámetros.
- Arreglos y cadenas.
- (Donde aplica) Punteros y manejo básico de memoria.
- (Donde aplica) Introducción a estructuras más grandes en C++.

> Nota: los nombres de las carpetas siguen la estructura usada en clase
> (por ejemplo: `j1pro...`, `j2pro...`, etc.). Cada carpeta agrupa ejercicios de una práctica/sesión.

---

## Cómo usar este repo

- Abre la carpeta del ejercicio en tu IDE/editor (VS Code, Code::Blocks, CLion, etc.).
- Compila y ejecuta el archivo principal.
- Si quieres navegar rápido, usa la **tabla índice** de abajo.

> Tip: si usas VS Code, configura tareas de compilación para C y C++ (gcc/g++).

---

## ⭐ Recomendados para revisar primero

| Ejercicio | Tema | Qué practica | Link |
|---|---|---|---|
| j8 | Conversión °F→°C | Aritmética + salida formateada | [Ver j8](./j8) |
| j23 | Menú + `switch` | Selección múltiple + organización | [Ver j23](./j23) |
| j28 | `do-while` + chars | Ciclos + ASCII | [Ver j28](./j28) |

---

## Índice de ejercicios (tabla)

> Reemplaza los links `./jX` por la ruta real de cada carpeta (ej. `./j8pro...`).

| Ejercicio | Lenguaje | Tópico principal | Descripción corta | Link |
|---|---|---|---|---|
| j1 | C | Variables | Área de triángulo (sin entrada) | [Abrir](./j1) |
| j2 | C | Variables | Área de triángulo (sin entrada) | [Abrir](./j2) |
| j4 | C | Aritmética | Operaciones básicas con dos enteros | [Abrir](./j4) |
| j5 | C | Constantes / float | Área de círculo (sin entrada) | [Abrir](./j5) |
| j7 | C++ | Aritmética | Conversión °C → °F | [Abrir](./j7) |
| j8 | C++ | Aritmética | °F → °C aproximada y exacta | [Abrir](./j8) |
| j9 | C | Entrada/Salida | Área de círculo con `scanf` | [Abrir](./j9) |
| j11 | C | Variables | Intercambio de 3 variables | [Abrir](./j11) |
| j12 | C | Porcentajes | Porcentaje de asistencias | [Abrir](./j12) |
| j13 | C | Arreglos | Vector * factor (sin iteraciones) | [Abrir](./j13) |
| j14 | C | `struct` | Registro Alumno | [Abrir](./j14) |
| j15 | C | `struct` | Registros Árbol y Libro | [Abrir](./j15) |
| j16 | C | `struct` | Alumno + Carrera | [Abrir](./j16) |
| j17 | C++ | Condicional | Descuento con 1 variable y 1 `if` | [Abrir](./j17) |
| j18 | C++ | Comparación | 3 enteros en orden creciente | [Abrir](./j18) |
| j19 | C++ | Condicional | Incremento de salario por rangos | [Abrir](./j19) |
| j20 | C | `switch` / fechas | Mes, día y estación | [Abrir](./j20) |
| j21 | C | Condicional | Año bisiesto | [Abrir](./j21) |
| j22 | C++ | `switch` | Calculadora por operador | [Abrir](./j22) |
| j23 | C++ | Menú + `switch` | Áreas de figuras | [Abrir](./j23) |
| j24 | C++ | Menú + IVA | Peaje por tipo de vehículo | [Abrir](./j24) |
| j25 | C | Operadores | Operador elegido por usuario | [Abrir](./j25) |
| j26 | C | Condicional | Transformación usando una sola variable | [Abrir](./j26) |
| j27 | C | Tiempo | Diferencia de tiempos HH:MM:SS | [Abrir](./j27) |
| j28 | C | `do-while` / caracteres | Abecedario Aa, Bb, Cc… (mayús/minús) | [Abrir](./j28) |


---

## Descripción detallada (por ejercicio)

<details>
<summary><b>j1 – Área de triángulo (C)</b></summary>

Calcula el área de un triángulo usando variables `a`, `b` y `h` de tipo `int`.
No solicita datos al usuario.

</details>

<details>
<summary><b>j2 – Área de triángulo (C)</b></summary>

Igual que j1, pero usando variables `areaTriangulo`, `base` y `altura`.
No solicita datos al usuario.

</details>

<details>
<summary><b>j4 – Operaciones básicas con dos enteros (C)</b></summary>

Pide dos enteros `a` y `b` y calcula:
`a+b`, `a-b`, `b-a`, `a*b`, `a/b`, `b/a`, `a%b`, `b%a`, mostrando resultados.

</details>

<details>
<summary><b>j5 – Área de círculo sin entrada (C)</b></summary>

Calcula el área de un círculo con variables `a`, `r` y `pi` de tipo `float`.
No pide datos al usuario.

</details>

<details>
<summary><b>j7 – Conversión °C → °F (C++)</b></summary>

Pide una temperatura en Celsius y calcula Fahrenheit con `F = 1.8 * C + 32`.

</details>

<details>
<summary><b>j8 – Conversión °F → °C aproximada y exacta (C++)</b></summary>

Pide Fahrenheit y muestra conversión aproximada y exacta.

</details>

<details>
<summary><b>j9 – Área de círculo con entrada (C)</b></summary>

Usa `scanf()` para leer el radio y calcula el área.

</details>

<details>
<summary><b>j11 – Intercambio de tres variables (C)</b></summary>

Muestra valores originales, intercambia `a`, `b`, `c` y vuelve a imprimir.

</details>

<details>
<summary><b>j12 – Porcentaje de asistencias (C)</b></summary>

Con `MAXIMO_ASISTENCIAS = 34`, pide faltas y calcula porcentaje.

</details>

<details>
<summary><b>j13 – Vector y factor multiplicador (C)</b></summary>

Lee 10 enteros, luego un factor. Multiplica y guarda en un segundo arreglo.
<i>Restricción: no usar estructuras iterativas.</i>

</details>

<details>
<summary><b>j14 – Registro Alumno (C)</b></summary>

`struct Alumno` con 3 campos: cadena, entero y flotante.

</details>

<details>
<summary><b>j15 – Registros Arbol y Libro (C)</b></summary>

`struct Arbol` y `struct Libro`, lectura e impresión.

</details>

<details>
<summary><b>j16 – Alumno + Carrera (C)</b></summary>

Agrega `struct Carrera` y relaciona `idCarrera` con `Alumno`.

</details>

<details>
<summary><b>j17 – Descuento en tienda (C++)</b></summary>

Si compra ≥ $50 aplica 20% de descuento.
<i>Restricción: solo 1 variable y 1 `if` sin `else`.</i>

</details>

<details>
<summary><b>j18 – Tres enteros en orden creciente (C++)</b></summary>

Determina si tres enteros distintos están en orden creciente.

</details>

<details>
<summary><b>j19 – Incremento de salario (C++)</b></summary>

Calcula nuevo salario aplicando criterio por rangos.

</details>

<details>
<summary><b>j20 – Mes, día y estación (C)</b></summary>

Imprime nombre del mes y estación del año según fecha.

</details>

<details>
<summary><b>j21 – Año bisiesto (C)</b></summary>

Reglas 4/100/400 para bisiesto.

</details>

<details>
<summary><b>j22 – Calculadora con switch (C++)</b></summary>

Solicita operandos + operador y resuelve con `switch`.

</details>

<details>
<summary><b>j23 – Áreas de figuras con menú (C++)</b></summary>

Menú de figuras y cálculo de área con `switch`.

</details>

<details>
<summary><b>j24 – Peaje en autopista (C++)</b></summary>

Importe por tipo de vehículo + IVA (16%).

</details>

<details>
<summary><b>j25 – Operador elegido por el usuario (C)</b></summary>

Pide operador, luego `a` y `b`, imprime operación y resultado.

</details>

<details>
<summary><b>j26 – Transformación de un solo valor (C)</b></summary>

Manipula `x` con reglas según signo, paridad y rangos.

</details>

<details>
<summary><b>j27 – Diferencia de tiempos HH:MM:SS (C)</b></summary>

Calcula tiempo transcurrido o avisa si final < inicial.

</details>

<details>
<summary><b>j28 – Abecedario con `do-while` (C)</b></summary>

Imprime el abecedario en formato `Aa`, `Bb`, `Cc`, … usando un ciclo `do...while`.
Sirve como ejemplo de manejo de caracteres y recorrido de rangos en ASCII.

</details>

