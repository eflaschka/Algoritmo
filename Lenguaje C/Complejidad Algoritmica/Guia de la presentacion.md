# Guía de presentación: Búsqueda binaria y bitónica (10 minutos)

El programa `Complejidad.c` tiene un menú con las cuatro búsquedas, todas con traza
paso a paso y contador de comparaciones. La idea es mostrar **el mismo problema**
(buscar un valor) resuelto de distintas formas, y comparar cuánto cuesta cada una.

## Guion sugerido

### 0:00 - 1:30 · Introducción
- Problema: buscar un valor dentro de un arreglo.
- Dos preguntas que ordenan toda la charla: **¿los datos están ordenados?** y
  **¿cuántas comparaciones hacemos?**
- O(n) vs O(log n): duplicar los datos duplica el trabajo en una, y suma un solo
  paso en la otra.

### 1:30 - 4:00 · Búsqueda lineal (opción 1)
- Buscar `30` en el arreglo ordenado: hace **8 comparaciones**.
- Punto clave: no aprovecha que el arreglo está ordenado, revisa uno por uno.
- Peor caso: el valor no está o está al final → **n comparaciones**.

### 4:00 - 6:30 · Búsqueda binaria iterativa (opción 2)
- Mismo `30`: **2 comparaciones** (contra 8 de la lineal).
- Explicar la traza: se mira el medio (16), como 30 es mayor se descarta toda la
  mitad izquierda, se mira el nuevo medio (30) y listo.
- Cada paso parte el problema a la mitad: después de k pasos quedan n/2^k
  elementos. Cuando queda 1, k = log2(n). De ahí **O(log n)**.
- Detalle para lucirse: `medio = bajo + (alto - bajo) / 2` en vez de
  `(bajo + alto) / 2` evita desbordar con arreglos enormes.
- Condición indispensable: **el arreglo tiene que estar ordenado**.

### 6:30 - 7:30 · Versión recursiva (opción 3)
- Misma idea, misma cantidad de comparaciones (buscar `25`: 4 pasos en ambas).
- La diferencia es el **costo espacial**: la recursiva usa la pila de llamadas,
  O(log n) de memoria extra; la iterativa usa O(1).
- La recursiva es más corta de leer, la iterativa es más eficiente.

### 7:30 - 9:00 · Búsqueda bitónica (opción 4)
- El arreglo sube hasta un pico (28) y después baja. **No está ordenado**, así que
  una binaria normal no sirve.
- Dos etapas, cada una O(log n):
  1. `buscarPico`: comparo el medio con su vecino derecho. Si sube, el pico está a
     la derecha; si baja, está a la izquierda o es el medio.
  2. Una binaria en la mitad izquierda (ascendente) y, si no está, otra en la
     derecha (descendente).
- Total: **O(log n)**, con una constante más grande que la binaria.
- Valores para mostrar: `21` (mitad izquierda), `11` (mitad derecha), `28` (es el
  pico) y `99` (no está: recorre las dos mitades).

### 9:00 - 10:00 · Cierre con la tabla (opción 5)
- Mostrar la tabla de complejidades y las comparaciones reales.
- El número que cierra la charla: con **10.000** datos, la lineal hace 10.000
  comparaciones y la binaria **14**. Y con un millón de datos, la binaria hace 20.
- Frase final posible: "ordenar los datos una vez (O(n log n)) habilita buscar
  para siempre en O(log n)".

## Valores de prueba listos

| Opción | Valor | Qué muestra |
|--------|-------|-------------|
| 1 | 30 | 8 comparaciones, una por elemento |
| 2 | 30 | 2 comparaciones, contraste fuerte |
| 3 | 25 | misma traza que la iterativa |
| 4 | 21 | el pico y la mitad izquierda |
| 4 | 11 | la mitad derecha, descendente |
| 4 | 99 | valor ausente, recorre todo |
| 5 | - | tabla y crecimiento real |

## Preguntas probables

- **¿Por qué tiene que estar ordenado?** Porque al mirar el medio se decide
  descartar media lista; sin orden no se sabe de qué lado está el valor.
- **¿La bitónica necesita estar ordenada?** No entera: necesita tener **un solo
  cambio de dirección** (subir y después bajar). Por eso primero se busca el pico.
- **¿Qué pasa si hay valores repetidos?** La binaria encuentra *alguno* de ellos,
  no necesariamente el primero. Para eso se agrega una búsqueda hacia la izquierda
  al encontrarlo (búsqueda de la primera ocurrencia).
- **¿Cuál es el peor caso?** Valor ausente: la binaria hace piso(log2 n) + 1
  comparaciones; la bitónica, las del pico más las de las dos mitades.
- **¿Y si el arreglo no entra en memoria?** Ahí entra en juego el costo de acceso
  a disco, pero la cantidad de comparaciones sigue siendo O(log n).

## Nota sobre la compilación

```
gcc Complejidad.c ../Librerias/utils.c -Wall -o Complejidad.exe
```

La carpeta se llama "Complejidad Algoritmica" (sin tildes) para evitar problemas
de codificación en las rutas de Windows.
