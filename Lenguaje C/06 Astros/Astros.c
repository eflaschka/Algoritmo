#include <stdio.h>
#include "../Librerias/utils.h"

//Datos del enunciado.
#define DISTANCIA_MILLAS 238857.0
#define KM_POR_MILLA 1.609

//Funcion encargada de convertir millas a kilometros.
double millasAKm(double millas) {
return millas * KM_POR_MILLA;
}

int main() {
double distanciaKm;

limpiar();
mostrarBanner("Ejercicio Astros - Enri");

distanciaKm = millasAKm(DISTANCIA_MILLAS);

printf("Distancia Luna - Tierra: %.0f millas\n", DISTANCIA_MILLAS);
printf("Equivalencia: 1 milla = %.3f km\n", KM_POR_MILLA);

mostrarSeparador('-', 35);

printf("Distancia Luna - Tierra: %.2f km\n", distanciaKm);

mostrarSeparador('-', 35);

pausar();

return 0;
}
