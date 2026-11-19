program SumarImpares;
uses crt;

var
n, i, contador, suma: integer;

begin
    clrscr();
    writeln('============================================');
    writeln('===== Ejercicio Suma de Impares - Enri =====');
    writeln('============================================');
    writeln();

//Comenzamos solicitando el valor de n al usuario
        writeln('Ingrese el valor de n: ');
        readln(n);

//Iniciamos el contador y el bucle de repeticion mientras
    contador := 0;
    suma := 0;
    i := 1;

    while contador < n do
    begin
    if i mod 2 <> 0 then
    begin
        writeln(i);

    suma := suma + i;
    contador := contador + 1;
    end;
    i := i + 1;
    end;
        writeln('La suma de los primeros ', n, ' numeros impares es: ', suma);


    writeln('Gracias por utilizar mis algoritmos.');
    readln();


end.