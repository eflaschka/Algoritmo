program TablaDeMulti;
uses crt;

var
numero, i: integer;

begin
    clrscr();
    writeln('====================================================');
    writeln('===== Ejercicio Tabla de Multiplicacion - Enri =====');
    writeln('====================================================');
    writeln();

//Iniciamos la estructura repetir y dentro de la misma pedimos el numero al usuario


    repeat
        write('Ingrese un numero entero para mostrar su tabla: ');
        readln(numero);
    until numero > 0;

    writeln('Tabla de multiplicacion del ', numero, ':');
        i := 1;
    repeat
        writeln(numero, ' x ', i, ' = ', numero * i);
        i := i + 1;
    until i > 10;

    writeln('Gracias por utilizar mis algoritmos.');
    readln();


end.