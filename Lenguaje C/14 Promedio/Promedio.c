#include <stdio.h>
#include "../Librerias/utils.h"
#include "../Librerias/mates.h"

#define CANT_ALUMNOS 10
#define CANT_NOTAS 3

int main() {
int alumno;
double nota1, nota2, nota3;
double sumaAlumno, sumaTotal = 0;

limpiar();
mostrarBanner("Ejercicio Promedio - Enri");

printf("Ingrese %d notas por cada uno de los %d alumnos.\n", CANT_NOTAS, CANT_ALUMNOS);

mostrarSeparador('-', 55);

for (alumno = 1; alumno <= CANT_ALUMNOS; alumno++) {
    printf("\nAlumno %d\n", alumno);

    printf("  Nota 1: ");
    scanf("%lf", &nota1);

    printf("  Nota 2: ");
    scanf("%lf", &nota2);

    printf("  Nota 3: ");
    scanf("%lf", &nota3);

    sumaAlumno = nota1 + nota2 + nota3;
    sumaTotal += sumaAlumno;

    printf("  Notas: %.2f - %.2f - %.2f | Promedio: %.2f\n",
           nota1, nota2, nota3, promedio(sumaAlumno, CANT_NOTAS));
}

limpiarBuffer();

mostrarSeparador('-', 55);

printf("Promedio general de los %d alumnos: %.2f\n",
       CANT_ALUMNOS, promedio(sumaTotal, CANT_ALUMNOS * CANT_NOTAS));

mostrarSeparador('-', 55);

mostrarBanner("Gracias por utilizar mis algoritmos!");

pausar();

return 0;
}
