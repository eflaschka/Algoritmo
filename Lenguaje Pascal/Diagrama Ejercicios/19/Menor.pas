program menor;
uses crt;

var
n1, n2, n3: integer;

begin
    clrscr();
    writeln('==================================');
    writeln('===== Ejercicio Menor - Enri =====');
    writeln('==================================');
    writeln();

//Iniciamos pidiendo los 3 numeros al usuario
        writeln('Ingrese el primer numero');
        readln(n1);

        writeln('Ingrese el segundo numero');
        readln(n2);

        writeln('Ingrese el tercer numero');
        readln(n3);

//Iniciamos el condicional para comparar los numeros
    if (n1 < n2) and (n1 < n3) then
        writeln(n1, ' es el numero menor.')
    else if (n2 < n1) and (n2 < n3) then
        writeln(n2, ' es el numero menor.')
    else if (n3 < n1) and (n3 < n2) then
        writeln(n3, ' es el numero menor.')
    else if (n1 = n2) and (n1 = n3) then
        writeln('Los numeros son iguales.')
    else
        writeln('Los numeros no son validos.');
    
        writeln('Gracias por utilizar mis algoritmos.');
        readln();


end.