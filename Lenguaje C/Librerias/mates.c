#include "mates.h"

int esBisiesto(int anio) {
return (anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0;
}

int minimo(int a, int b) {
return a < b ? a : b;
}

int maximo(int a, int b) {
return a > b ? a : b;
}

double promedio(double suma, int cantidad) {
if (cantidad <= 0) {
    return 0;
}

return suma / cantidad;
}
