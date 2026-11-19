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

//Comenzamos solicitando el numero entero al usuario
        writeln('Ingrese un numero entero para mostrar su tabla: ');
        readln(numero);

    if numero <= 0 then
    begin
        writeln('El numero ingresado no es positivo.');
    end
    else
    begin
        writeln('Tabla de multiplicacion del ', numero, ':');
        for i := 1 to 10 do
    begin
        writeln(numero, ' x ', i, ' = ', numero * i);
    end;
    end;

        writeln('Gracias por utilizar mis algoritmos.');
        readln();


end.