#include <stdio.h>
#include "../Librerias/utils.h"

/* Los datos 24 y 5 de la formula son validos para estos anios. */
#define ANIO_MIN 1900
#define ANIO_MAX 2099

//Funcion encargada de calcular el dia y el mes del domingo de Pascua.
void calcularPascua(int anio, int *dia, int *mes) {
int a, b, c, d, e, n;

a = anio % 19;
b = anio % 4;
c = anio % 7;
d = (19 * a + 24) % 30;
e = (2 * b + 4 * c + 6 * d + 5) % 7;
n = 22 + d + e;

if (n <= 31) {
    *dia = n;
    *mes = 3;
}
else {
    *dia = n - 31;
    *mes = 4;
}
}

//Funcion encargada de devolver el nombre del mes de Pascua.
const char *nombreMes(int mes) {
if (mes == 3) {
    return "marzo";
}

return "abril";
}

//Procedimiento encargado de mostrar la fecha de Pascua de un anio.
void mostrarPascua(int anio) {
int dia, mes;

calcularPascua(anio, &dia, &mes);

printf("  %d: %d de %s\n", anio, dia, nombreMes(mes));
}

int main() {
int desde, hasta, anio, cantidad = 0;

limpiar();
mostrarBanner("Ejercicio Pascua - Enri");

printf("Domingos de Pascua para anios entre %d y %d\n\n", ANIO_MIN, ANIO_MAX);

printf("Anio desde: ");
scanf("%d", &desde);

printf("Anio hasta: ");
scanf("%d", &hasta);
limpiarBuffer();

mostrarSeparador('-', 45);

if (desde < ANIO_MIN || hasta > ANIO_MAX || desde > hasta) {
    printf("El rango debe estar entre %d y %d, con desde <= hasta.\n", ANIO_MIN, ANIO_MAX);
}
else {
    for (anio = desde; anio <= hasta; anio++) {
        mostrarPascua(anio);
        cantidad++;
    }

    mostrarSeparador('-', 45);
    printf("Total: %d fechas.\n", cantidad);
}

mostrarSeparador('-', 45);

mostrarBanner("Gracias por utilizar mis algoritmos!");

pausar();

return 0;
}
