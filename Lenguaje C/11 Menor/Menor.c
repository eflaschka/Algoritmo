#include <stdio.h>
#include "../Librerias/utils.h"
#include "../Librerias/mates.h"

int main() {
int primero, segundo, tercero, menor;

limpiar();
mostrarBanner("Ejercicio Menor - Enri");

printf("Ingrese el primer numero: ");
scanf("%d", &primero);

printf("Ingrese el segundo numero: ");
scanf("%d", &segundo);

printf("Ingrese el tercer numero: ");
scanf("%d", &tercero);
limpiarBuffer();

//El menor de tres es el menor entre el primero y el menor de los otros dos.
menor = minimo(primero, minimo(segundo, tercero));

mostrarSeparador('-', 45);

printf("Numeros ingresados: %d, %d, %d\n", primero, segundo, tercero);
printf("El menor es: %d\n", menor);

mostrarSeparador('-', 45);

mostrarBanner("Gracias por utilizar mis algoritmos!");

pausar();

return 0;
}
