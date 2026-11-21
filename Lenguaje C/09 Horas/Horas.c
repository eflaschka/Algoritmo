/* Ejercicio 09 - Horas */

#include <stdio.h>
#include "../Librerias/utils.h"

int main() {
int horas, minutos, segundos;

limpiar();
mostrarBanner("Ejercicio Horas - Enri");

printf("Ingrese la cantidad de horas: ");
scanf("%d", &horas);
limpiarBuffer();

mostrarSeparador('-', 40);

if (horas < 0) {
    printf("Las horas no pueden ser negativas.\n");
}
else {
    minutos = horas * 60;
    segundos = horas * 3600;

    printf("%d horas equivalen a:\n", horas);
    printf("- %d minutos\n", minutos);
    printf("- %d segundos\n", segundos);
}

mostrarSeparador('-', 40);

pausar();

return 0;
}
