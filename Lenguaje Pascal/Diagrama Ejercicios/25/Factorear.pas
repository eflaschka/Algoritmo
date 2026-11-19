program factorear;
uses crt;

var
n, i: integer;
factorial: longint;

begin
    clrscr();
    writeln('======================================');
    writeln('===== Ejercicio Factorear - Enri =====');
    writeln('======================================');
    writeln();

//Comenzamos solicitando el numero a factorear al usuario
        writeln('Ingrese un numero entero positivo: ');
        readln(n);

//Iniciamos el condicional
    if n < 0 then
    begin
        writeln('El numero ingresado no es positivo.');
    end
    else
    begin
        factorial := 1;
        for i := 1 to n do
        begin
        factorial := factorial * i;
        end;
        writeln('El factorial de ', n, ' es: ', factorial);
        end;

    writeln('Gracias por utilizar mis algoritmos.');
    readln();

end.