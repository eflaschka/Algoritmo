#include <stdio.h>
#include "../Librerias/utils.h"

#define TAM_ORDENADO 10
#define TAM_BITONICO 12
#define TAM_MAX 10000

/* Arreglo ordenado de menor a mayor (para las busquedas lineal y binaria). */
int ordenado[TAM_ORDENADO] = {2, 5, 8, 12, 16, 21, 25, 30, 34, 40};

/* Arreglo bitonico: sube hasta 28 (posicion 6) y despues baja. */
int bitonico[TAM_BITONICO] = {1, 3, 6, 10, 15, 21, 28, 24, 18, 11, 5, 2};

/* Arreglo grande para medir el crecimiento de las comparaciones. */
int grande[TAM_MAX];

int leerEntero(const char *mensaje) {
int valor;

printf("%s", mensaje);

while (scanf("%d", &valor) != 1) {
    limpiarBuffer();
    printf("Ingrese un numero valido: ");
}

limpiarBuffer();

return valor;
}

void mostrarArreglo(const char *titulo, const int v[], int n) {
int i;

printf("%s\n\n", titulo);

for (i = 0; i < n; i++) {
    printf("%4d", v[i]);
}

printf("\n");

for (i = 0; i < n; i++) {
    printf("%4d", i);
}

printf("   <- indices\n");
}

void mostrarResultado(int posicion, int buscado, int comparaciones) {
mostrarSeparador('-', 55);

if (posicion == -1) {
    printf("El valor %d NO se encontro.\n", buscado);
}
else {
    printf("El valor %d esta en la posicion %d.\n", buscado, posicion);
}

printf("Comparaciones realizadas: %d\n", comparaciones);

mostrarSeparador('-', 55);
}

/* Busqueda lineal: recorre todo el arreglo. O(n). */
int busquedaLineal(const int v[], int n, int buscado, int traza, int *comparaciones) {
int i;

for (i = 0; i < n; i++) {
    (*comparaciones)++;

    if (traza) {
        printf("  Paso %2d: comparo v[%2d] = %2d con %2d\n",
               *comparaciones, i, v[i], buscado);
    }

    if (v[i] == buscado) {
        return i;
    }
}

return -1;
}

/* Busqueda binaria iterativa: parte el arreglo a la mitad en cada vuelta. O(log n). */
int busquedaBinariaIterativa(const int v[], int n, int buscado, int traza, int *comparaciones) {
int bajo = 0;
int alto = n - 1;
int medio;

while (bajo <= alto) {
    /* Se calcula asi y no (bajo + alto) / 2 para evitar desbordes. */
    medio = bajo + (alto - bajo) / 2;
    (*comparaciones)++;

    if (traza) {
        printf("  Paso %2d: bajo=%2d alto=%2d medio=%2d -> v[%2d] = %2d\n",
               *comparaciones, bajo, alto, medio, medio, v[medio]);
    }

    if (v[medio] == buscado) {
        return medio;
    }

    if (v[medio] < buscado) {
        bajo = medio + 1;
    }
    else {
        alto = medio - 1;
    }
}

return -1;
}

/* La misma busqueda binaria, pero recursiva. Cada llamada trabaja sobre un rango. */
int busquedaBinariaRecursiva(const int v[], int bajo, int alto, int buscado, int traza, int *comparaciones) {
int medio;

if (bajo > alto) {
    return -1;
}

medio = bajo + (alto - bajo) / 2;
(*comparaciones)++;

if (traza) {
    printf("  Paso %2d: bajo=%2d alto=%2d medio=%2d -> v[%2d] = %2d\n",
           *comparaciones, bajo, alto, medio, medio, v[medio]);
}

if (v[medio] == buscado) {
    return medio;
}

if (v[medio] < buscado) {
    return busquedaBinariaRecursiva(v, medio + 1, alto, buscado, traza, comparaciones);
}

return busquedaBinariaRecursiva(v, bajo, medio - 1, buscado, traza, comparaciones);
}

/* Busqueda binaria dentro de un rango, sabiendo si va de menor a mayor o al reves.
   Sirve para las dos mitades del arreglo bitonico. */
int busquedaEnRango(const int v[], int bajo, int alto, int buscado, int ascendente, int traza, int *comparaciones) {
int medio;

while (bajo <= alto) {
    medio = bajo + (alto - bajo) / 2;
    (*comparaciones)++;

    if (traza) {
        printf("  %s: bajo=%2d alto=%2d medio=%2d -> v[%2d] = %2d\n",
               ascendente ? "Ascendente " : "Descendente",
               bajo, alto, medio, medio, v[medio]);
    }

    if (v[medio] == buscado) {
        return medio;
    }

    /* Si la parte va subiendo, hay que ir a la derecha cuando el valor buscado
       es mayor. Si va bajando, al reves. */
    if ((ascendente && v[medio] < buscado) || (!ascendente && v[medio] > buscado)) {
        bajo = medio + 1;
    }
    else {
        alto = medio - 1;
    }
}

return -1;
}

/* Encuentra el pico del arreglo bitonico comparando con el vecino de la derecha. O(log n). */
int buscarPico(const int v[], int n, int traza, int *comparaciones) {
int bajo = 0;
int alto = n - 1;
int medio;

while (bajo < alto) {
    medio = bajo + (alto - bajo) / 2;
    (*comparaciones)++;

    if (traza) {
        printf("  Pico     : bajo=%2d alto=%2d medio=%2d -> v[%2d] = %2d, v[%2d] = %2d\n",
               bajo, alto, medio, medio, v[medio], medio + 1, v[medio + 1]);
    }

    if (v[medio] < v[medio + 1]) {
        bajo = medio + 1;
    }
    else {
        alto = medio;
    }
}

return bajo;
}

/* Busqueda bitonica: primero el pico, despues una binaria en cada mitad. O(log n). */
int busquedaBitonica(const int v[], int n, int buscado, int traza, int *comparaciones) {
int pico;
int posicion;

pico = buscarPico(v, n, traza, comparaciones);

if (traza) {
    printf("  Pico encontrado en v[%d] = %d\n", pico, v[pico]);
}

(*comparaciones)++;

if (v[pico] == buscado) {
    return pico;
}

/* Mitad izquierda: ordenada de menor a mayor. */
posicion = busquedaEnRango(v, 0, pico - 1, buscado, 1, traza, comparaciones);

if (posicion != -1) {
    return posicion;
}

/* Mitad derecha: ordenada de mayor a menor. */
return busquedaEnRango(v, pico + 1, n - 1, buscado, 0, traza, comparaciones);
}

void ejecutarBinariaIterativa(void) {
int buscado, posicion, comparaciones = 0;

mostrarArreglo("Arreglo ordenado:", ordenado, TAM_ORDENADO);
buscado = leerEntero("\nValor a buscar: ");

printf("\nTraza de la busqueda binaria iterativa:\n\n");
posicion = busquedaBinariaIterativa(ordenado, TAM_ORDENADO, buscado, 1, &comparaciones);

mostrarResultado(posicion, buscado, comparaciones);

pausar();
}

void ejecutarBinariaRecursiva(void) {
int buscado, posicion, comparaciones = 0;

mostrarArreglo("Arreglo ordenado:", ordenado, TAM_ORDENADO);
buscado = leerEntero("\nValor a buscar: ");

printf("\nTraza de la busqueda binaria recursiva:\n\n");
posicion = busquedaBinariaRecursiva(ordenado, 0, TAM_ORDENADO - 1, buscado, 1, &comparaciones);

mostrarResultado(posicion, buscado, comparaciones);

pausar();
}

void ejecutarBitonica(void) {
int buscado, posicion, comparaciones = 0;

mostrarArreglo("Arreglo bitonico (sube hasta 28 y despues baja):", bitonico, TAM_BITONICO);
buscado = leerEntero("\nValor a buscar: ");

printf("\nTraza de la busqueda bitonica:\n\n");
posicion = busquedaBitonica(bitonico, TAM_BITONICO, buscado, 1, &comparaciones);

mostrarResultado(posicion, buscado, comparaciones);

pausar();
}

void mostrarTabla(void) {
int tamanios[4] = {10, 100, 1000, 10000};
int compLineal, compBinaria, i, j, n;

limpiar();
mostrarBanner("Complejidad de los algoritmos");

printf("%-24s %-12s %-14s %-12s\n", "Algoritmo", "Mejor caso", "Caso promedio", "Peor caso");
mostrarSeparador('-', 64);
printf("%-24s %-12s %-14s %-12s\n", "Busqueda lineal", "O(1)", "O(n)", "O(n)");
printf("%-24s %-12s %-14s %-12s\n", "Busqueda binaria", "O(1)", "O(log n)", "O(log n)");
printf("%-24s %-12s %-14s %-12s\n", "Busqueda bitonica", "O(1)", "O(log n)", "O(log n)");
mostrarSeparador('-', 64);

printf("\nComparaciones reales buscando el ultimo elemento (peor caso):\n\n");
printf("%-10s %-22s %-22s\n", "n", "Busqueda lineal", "Busqueda binaria");

for (i = 0; i < 4; i++) {
    n = tamanios[i];

    for (j = 0; j < n; j++) {
        grande[j] = j * 2;
    }

    compLineal = 0;
    busquedaLineal(grande, n, grande[n - 1], 0, &compLineal);

    compBinaria = 0;
    busquedaBinariaIterativa(grande, n, grande[n - 1], 0, &compBinaria);

    printf("%-10d %-22d %-22d\n", n, compLineal, compBinaria);
}

mostrarSeparador('-', 64);
puts("Con 10.000 datos, la lineal hace 10.000 comparaciones y la binaria");
puts("como maximo 14, porque 2^14 = 16.384. Esa es la diferencia entre");
puts("O(n) y O(log n).");

pausar();
}

void mostrarMenu(void) {
puts("1. Busqueda binaria iterativa");
puts("2. Busqueda binaria recursiva");
puts("3. Busqueda bitonica (pico + dos mitades)");
puts("4. Tabla de complejidad y crecimiento");
puts("0. Salir");
}

int main() {
int opcion;

do {
    limpiar();
    mostrarBanner("Complejidad Algoritmica - Enri");
    mostrarMenu();

    opcion = leerEntero("\nOpcion: ");

    switch (opcion) {

        case 1:
            limpiar();
            mostrarBanner("Busqueda binaria iterativa - O(log n)");
            ejecutarBinariaIterativa();
            break;

        case 2:
            limpiar();
            mostrarBanner("Busqueda binaria recursiva - O(log n)");
            ejecutarBinariaRecursiva();
            break;

        case 3:
            limpiar();
            mostrarBanner("Busqueda bitonica - O(log n)");
            ejecutarBitonica();
            break;

        case 4:
            mostrarTabla();
            break;

        case 0:
            break;

        default:
            printf("\nOpcion incorrecta.\n");
            pausar();
            break;
    }
} while (opcion != 0);

return 0;
}
