/* Ejercicio 25 - Circulo */

#include <stdio.h>
#include "../Librerias/utils.h"
#include "../Librerias/mates.h"

//Funcion encargada de calcular el diametro del circulo.
double calcularDiametro(double radio) {
return 2 * radio;
}

//Funcion encargada de calcular el area del circulo.
double calcularArea(double radio) {
return PI * radio * radio;
}

//Funcion encargada de calcular la longitud de la circunferencia.
double calcularLongitud(double radio) {
return 2 * PI * radio;
}

//Procedimiento encargado de mostrar los resultados del circulo.
void mostrarResultados(double radio) {
printf("Radio: %.2f\n", radio);
printf("Diametro: %.2f\n", calcularDiametro(radio));
printf("Area del circulo: %.2f\n", calcularArea(radio));
printf("Longitud de la circunferencia: %.2f\n", calcularLongitud(radio));
}

int main() {
double radio;

limpiar();
mostrarBanner("Ejercicio Circulo - Enri");

printf("Radio del circulo: ");
scanf("%lf", &radio);
limpiarBuffer();

mostrarSeparador('-', 45);

if (radio <= 0) {
    printf("El radio debe ser mayor que cero.\n");
}
else {
    mostrarResultados(radio);
}

mostrarSeparador('-', 45);

pausar();

return 0;
}
