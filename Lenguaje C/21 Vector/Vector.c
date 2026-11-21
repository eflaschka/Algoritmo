#include <stdio.h>
#include "../Librerias/utils.h"

#define TAM 10

//Funcion encargada de sumar los elementos de un vector.
int sumarVector(const int v[], int n) {
int i;
int suma = 0;

for (i = 0; i < n; i++) {
    suma += v[i];
}

return suma;
}

int main() {
int vector[TAM];
int i;

limpiar();
mostrarBanner("Ejercicio Vector - Enri");

printf("Ingrese %d numeros enteros:\n\n", TAM);

for (i = 0; i < TAM; i++) {
    printf("Valor %2d: ", i);

    while (scanf("%d", &vector[i]) != 1) {
        limpiarBuffer();
        printf("  Ingrese un numero valido: ");
    }
}

limpiarBuffer();

mostrarSeparador('-', 55);

printf("Valores del vector:\n\n");

for (i = 0; i < TAM; i++) {
    printf("%5d", vector[i]);
}

printf("\n");

for (i = 0; i < TAM; i++) {
    printf("%5d", i);
}

printf("   <- indices\n");

mostrarSeparador('-', 55);

printf("Suma de los elementos: %d\n", sumarVector(vector, TAM));

mostrarSeparador('-', 55);

pausar();

return 0;
}
