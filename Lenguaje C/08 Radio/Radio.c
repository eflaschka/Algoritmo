#include <stdio.h>
#include "../Librerias/utils.h"
#include "../Librerias/mates.h"

//Funcion encargada de calcular la longitud de la circunferencia.
double calcularLongitud(double radio) {
return 2 * PI * radio;
}

//Funcion encargada de calcular el area del circulo.
double calcularArea(double radio) {
return PI * radio * radio;
}

int main() {
double radio, longitud, area;

limpiar();
mostrarBanner("Ejercicio Radio - Enri");

printf("Radio del circulo: ");
scanf("%lf", &radio);
limpiarBuffer();

mostrarSeparador('-', 40);

if (radio < 0) {
    printf("El radio no puede ser negativo.\n");
}
else {
    longitud = calcularLongitud(radio);
    area = calcularArea(radio);

    printf("Radio: %.2f\n", radio);
    printf("Longitud de la circunferencia: %.2f\n", longitud);
    printf("Area del circulo: %.2f\n", area);
}

mostrarSeparador('-', 40);

mostrarBanner("Gracias por utilizar mis algoritmos!");

pausar();

return 0;
}
