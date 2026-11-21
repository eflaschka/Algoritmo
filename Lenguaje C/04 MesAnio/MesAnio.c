#include <stdio.h>
#include "../Librerias/utils.h"

//Funcion encargada de determinar el mes del año.
void determinarMes(int numero) {

if (numero == 1) {
    printf("El mes es ENERO.\n");
}
else if (numero == 2) {
    printf("El mes es FEBRERO.\n");
}
else if (numero == 3) {
    printf("El mes es MARZO.\n");
}
else if (numero == 4) {
    printf("El mes es ABRIL.\n");
}
else if (numero == 5) {
    printf("El mes es MAYO.\n");
}
else if (numero == 6) {
    printf("El mes es JUNIO.\n");
}
else if (numero == 7) {
    printf("El mes es JULIO.\n");
}
else if (numero == 8) {
    printf("El mes es AGOSTO.\n");
}
else if (numero == 9) {
    printf("El mes es SEPTIEMBRE.\n");
}
else if (numero == 10) {
    printf("El mes es OCTUBRE.\n");
}
else if (numero == 11) {
    printf("El mes es NOVIEMBRE.\n");
}
else if (numero == 12) {
    printf("El mes es DICIEMBRE.\n");
}
else {
   printf("Numero incorrecto. Ingrese un valor del 1 al 12.\n");
}
}

int main() {
int numero;

limpiar();
mostrarBanner("Ejercicio MesAnio - Enri");

printf("Ingrese un numero del 1 al 12: ");
scanf("%d", &numero);
limpiarBuffer();

mostrarSeparador('-', 35);

determinarMes(numero);

mostrarSeparador('-', 35);

mostrarBanner("Gracias por utilizar mis algoritmos!");

pausar();

return 0;
}