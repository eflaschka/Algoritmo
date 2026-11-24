/* Ejercicio 28 - Temperatura */
#include <stdio.h>
#include "../Librerias/utils.h"

//Funcion encargada de convertir grados Celsius a Fahrenheit.
double celsiusAFahrenheit(double celsius) {
return 9.0 / 5.0 * celsius + 32;
}

//Funcion encargada de convertir grados Fahrenheit a Celsius.
double fahrenheitACelsius(double fahrenheit) {
return 5.0 / 9.0 * (fahrenheit - 32);
}

//Procedimiento encargado de mostrar el menu.
void mostrarMenu(void) {
puts("1 - Convertir Celsius a Fahrenheit");
puts("2 - Convertir Fahrenheit a Celsius");
puts("0 - Salir");
}

//Procedimiento encargado de pedir los grados y mostrar la conversion.
void convertirCelsius(void) {
double celsius;

printf("Grados Celsius: ");
scanf("%lf", &celsius);
limpiarBuffer();

printf("%.2f C = %.2f F\n", celsius, celsiusAFahrenheit(celsius));
}

//Procedimiento encargado de pedir los grados y mostrar la conversion.
void convertirFahrenheit(void) {
double fahrenheit;

printf("Grados Fahrenheit: ");
scanf("%lf", &fahrenheit);
limpiarBuffer();

printf("%.2f F = %.2f C\n", fahrenheit, fahrenheitACelsius(fahrenheit));
}

int main() {
int opcion;

do {
    limpiar();
    mostrarBanner("Ejercicio Temperatura - Enri");
    mostrarMenu();

    printf("\nOpcion: ");
    scanf("%d", &opcion);
    limpiarBuffer();

    mostrarSeparador('-', 50);

    switch (opcion) {

        case 1:
            convertirCelsius();
            break;

        case 2:
            convertirFahrenheit();
            break;

        case 0:
            printf("Fin del programa.\n");
            break;

        default:
            printf("Opcion incorrecta.\n");
            break;
    }

    mostrarSeparador('-', 50);

    if (opcion != 0) {
        pausar();
    }
} while (opcion != 0);

mostrarBanner("Gracias por utilizar mis algoritmos!");

pausar();

return 0;
}
