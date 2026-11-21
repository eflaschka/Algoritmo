/* Ejercicio 02 - ParImpar */

#include <stdio.h>
#include "utils.h"

//Funcion encargada de determinar si un numero es par o impar.
int esPar(int numero) {
return numero % 2 == 0;
}

int main() {
int numero;

limpiar();
mostrarBanner("NUMERO PAR O IMPAR");

printf("Ingrese un numero entero: ");
scanf("%d", &numero);
limpiarBuffer();

mostrarSeparador('-', 35);

if (esPar(numero)) {
    printf("El numero %d es PAR.\n", numero);
}
else {
    printf("El numero %d es IMPAR.\n", numero);
}

mostrarSeparador('-', 35);

pausar();

return 0;
}