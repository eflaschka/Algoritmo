#include <stdio.h>
#include "../Librerias/utils.h"

#define DESDE 1
#define HASTA 10

//Tabla de multiplicar usando MIENTRAS (while).
void tablaConWhile(int numero) {
int i = DESDE;

while (i <= HASTA) {
    printf("%d x %d = %d\n", numero, i, numero * i);
    i++;
}
}

//Tabla de multiplicar usando REPETIR (do-while).
void tablaConDoWhile(int numero) {
int i = DESDE;

do {
    printf("%d x %d = %d\n", numero, i, numero * i);
    i++;
} while (i <= HASTA);
}

//Tabla de multiplicar usando PARA (for).
void tablaConFor(int numero) {
int i;

for (i = DESDE; i <= HASTA; i++) {
    printf("%d x %d = %d\n", numero, i, numero * i);
}
}

int main() {
int numero;

limpiar();
mostrarBanner("Ejercicio Tabla - Enri");

printf("Ingrese un numero entero: ");
scanf("%d", &numero);
limpiarBuffer();

mostrarSeparador('=', 35);
printf("Tabla con MIENTRAS (while)\n");
mostrarSeparador('-', 35);
tablaConWhile(numero);

mostrarSeparador('=', 35);
printf("Tabla con REPETIR (do-while)\n");
mostrarSeparador('-', 35);
tablaConDoWhile(numero);

mostrarSeparador('=', 35);
printf("Tabla con PARA (for)\n");
mostrarSeparador('-', 35);
tablaConFor(numero);

mostrarSeparador('=', 35);

pausar();

return 0;
}
