/* Ejercicio 24 - Hipotenusa */

#include <stdio.h>
#include <math.h>
#include "../Librerias/utils.h"
#include "../Librerias/mates.h"

//Funcion encargada de calcular la hipotenusa a partir de los catetos.
double calcularHipotenusa(double catetoA, double catetoB) {
return sqrt(catetoA * catetoA + catetoB * catetoB);
}

//Funcion encargada de calcular un angulo agudo en grados.
double calcularAngulo(double opuesto, double adyacente) {
return atan(opuesto / adyacente) * 180.0 / PI;
}

//Procedimiento encargado de mostrar los resultados del triangulo.
void mostrarResultados(double catetoA, double catetoB) {
double hipotenusa, anguloA, anguloB;

hipotenusa = calcularHipotenusa(catetoA, catetoB);
anguloA = calcularAngulo(catetoA, catetoB);
anguloB = calcularAngulo(catetoB, catetoA);

printf("Cateto a: %.2f\n", catetoA);
printf("Cateto b: %.2f\n", catetoB);

mostrarSeparador('-', 50);

printf("Hipotenusa (c): %.2f\n", hipotenusa);
printf("Angulo opuesto a 'a': %.2f grados\n", anguloA);
printf("Angulo opuesto a 'b': %.2f grados\n", anguloB);
printf("Suma de los angulos agudos: %.2f grados\n", anguloA + anguloB);
}

int main() {
double catetoA, catetoB;

limpiar();
mostrarBanner("Ejercicio Hipotenusa - Enri");

printf("Cateto a: ");
scanf("%lf", &catetoA);

printf("Cateto b: ");
scanf("%lf", &catetoB);
limpiarBuffer();

mostrarSeparador('-', 50);

if (catetoA <= 0 || catetoB <= 0) {
    printf("Los catetos deben ser mayores que cero.\n");
}
else {
    mostrarResultados(catetoA, catetoB);
}

mostrarSeparador('-', 50);

pausar();

return 0;
}
