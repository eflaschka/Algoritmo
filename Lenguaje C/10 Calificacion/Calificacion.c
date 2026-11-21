#include <stdio.h>
#include "../Librerias/utils.h"

//Funcion encargada de mostrar la calificacion correspondiente a una nota.
void mostrarCalificacion(double nota) {

if (nota < 6) {
    printf("Suspenso\n");
}
else if (nota < 8) {
    printf("Aprobado\n");
}
else if (nota < 9) {
    printf("Distinguido\n");
}
else if (nota < 10) {
    printf("Sobresaliente\n");
}
else {
    printf("Matricula de honor\n");
}
}

int main() {
double nota;

limpiar();
mostrarBanner("Ejercicio Calificacion - Enri");

printf("Ingrese la nota (0 a 10): ");
scanf("%lf", &nota);
limpiarBuffer();

mostrarSeparador('-', 40);

if (nota < 0 || nota > 10) {
    printf("Nota incorrecta. Ingrese un valor entre 0 y 10.\n");
}
else {
    printf("Nota: %.2f\n", nota);
    printf("Calificacion: ");
    mostrarCalificacion(nota);
}

mostrarSeparador('-', 40);

pausar();

return 0;
}
