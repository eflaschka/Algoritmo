/* Ejercicio 22 - Matriz */

#include <stdio.h>
#include "../Librerias/utils.h"

#define FILAS 3
#define COLUMNAS 4

//Funcion encargada de sumar una fila de la tabla.
int sumarFila(const int t[FILAS][COLUMNAS], int fila) {
int c;
int suma = 0;

for (c = 0; c < COLUMNAS; c++) {
    suma += t[fila][c];
}

return suma;
}

//Funcion encargada de sumar una columna de la tabla.
int sumarColumna(const int t[FILAS][COLUMNAS], int columna) {
int f;
int suma = 0;

for (f = 0; f < FILAS; f++) {
    suma += t[f][columna];
}

return suma;
}

int main() {
int tabla[FILAS][COLUMNAS];
int f, c, total = 0, sumaFilaActual;

limpiar();
mostrarBanner("Ejercicio Matriz - Enri");

printf("Ingrese los %d valores de la tabla (%dx%d):\n\n",
       FILAS * COLUMNAS, FILAS, COLUMNAS);

for (f = 0; f < FILAS; f++) {
    for (c = 0; c < COLUMNAS; c++) {
        printf("Valor [%d][%d]: ", f, c);

        while (scanf("%d", &tabla[f][c]) != 1) {
            limpiarBuffer();
            printf("  Ingrese un numero valido: ");
        }
    }
}

limpiarBuffer();

mostrarSeparador('=', 60);

printf("%-10s", "");

for (c = 0; c < COLUMNAS; c++) {
    printf("Col %-6d", c);
}

printf("Suma fila\n");

mostrarSeparador('-', 60);

for (f = 0; f < FILAS; f++) {
    printf("Fila %-5d", f);

    for (c = 0; c < COLUMNAS; c++) {
        printf("%-10d", tabla[f][c]);
    }

    sumaFilaActual = sumarFila(tabla, f);
    total += sumaFilaActual;

    printf("%d\n", sumaFilaActual);
}

mostrarSeparador('-', 60);

printf("%-10s", "Suma col");

for (c = 0; c < COLUMNAS; c++) {
    printf("%-10d", sumarColumna(tabla, c));
}

printf("%d\n", total);

mostrarSeparador('=', 60);

printf("Suma total de los elementos: %d\n", total);

mostrarSeparador('=', 60);

pausar();

return 0;
}
