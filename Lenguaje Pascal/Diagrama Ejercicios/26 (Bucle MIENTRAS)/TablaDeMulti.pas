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

//Iniciamos solicitando el numero al usuario
        writeln('Ingrese un numero entero para mostrar su tabla: ');
        readln(numero);

        writeln('Tabla de multiplicacion del ', numero, ':');

    i := 1;
    while i <= 10 do
    begin
    writeln(numero, ' x ', i, ' = ', numero * i);
    i := i + 1;
    end;


    writeln('Gracias por utilizar mis algoritmos.');
    readln();

end.