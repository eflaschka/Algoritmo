#ifndef UTILS_H
#define UTILS_H

/* Limpia la pantalla de la terminal. */
void limpiar(void);

/* Imprime 'tam' veces el caracter 'simbolo' y salta de línea. */
void mostrarSeparador(char simbolo, int tam);

/* Muestra un texto encerrado entre dos líneas de '='. */
void mostrarBanner(const char *texto);

/* Descarta lo que quede en el buffer de entrada hasta el salto de línea. */
void limpiarBuffer(void);

/* Espera a que el usuario presione ENTER. */
void pausar(void);

#endif