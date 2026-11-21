/* Ejercicio 01 - Naturaleza */

#include <stdio.h>
#include <stdlib.h>  

int main(void) {
    int numero;

puts("====================================================");
puts("===== Ejercicio Naturaleza de un número - Enri =====");
puts("====================================================");

system("cls");  

//Pedir y leer el numero
printf("Ingrese un numero entero: ");
if (scanf("%d", &numero) != 1) {
    printf("Entrada invalida.\n");
    return 1;
}

//Determinar el signo
if (numero > 0) {
    printf("%d es POSITIVO\n", numero);
} else if (numero < 0) {
    printf("%d es NEGATIVO\n", numero);
} else {
    printf("%d es NEUTRO\n", numero);
}

system("pause");
return 0;
}