program creciente;
uses crt;

var 
a, b, c: integer;

begin
    clrscr();
    writeln('====================================================');
    writeln('===== Ejercicio Creciente o Decreciente - Enri =====');
    writeln('====================================================');
    writeln();

//Iniciamos solicitando los 3 enteros al usuario
        writeln('Ingrese el primer numero: ');
        readln(a);

        writeln('Ingrese el segundo numero: ');
        readln(b);

        writeln('Ingrese el tercer numero: ');
        readln(c);

//Iniciamos el condicional if para conocer el orden de los numeros
    if (a < b) and (b < c) then
    begin
        writeln('Los numeros estan en orden creciente.');
    end
    else
    begin
        writeln('Los numeros estan en orden decreciente.');
        writeln('Por favor, intente nuevamente.');
    end;

        readln();

end.