program pares;
uses crt;

var
n, i, contador: integer;

begin
    clrscr();
    writeln('==========================================');
    writeln('===== Ejercicio Numeros Pares - Enri =====');
    writeln('==========================================');
    writeln();

//Comenzamos solicitando el valor de n al usuario
        writeln('Ingrese el valor de n: ');
        readln(n);

//Inicializamos el contador y luego el bucle de repeticion MIENTRAS
    contador := 0;
    i := 0;
    writeln('Los ', n, ' primeros numeros pares son: ');

    while contador < n do
    begin
    if i mod 2 = 0 then
    begin
        writeln(i);

    contador := contador + 1;
    end;
    i := i + 1;
    end;
    

    writeln('Gracias por utilizar mis algoritmos.');
    readln();

end.