program igualdad;
uses crt;

var
n1, n2, n3: integer;

begin
    clrscr();
    writeln('=====================================');
    writeln('===== Ejercicio Igualdad - Enri =====');
    writeln('=====================================');
    writeln();

//Comenzamos solicitando los 3 numeros al usuario
        writeln('Ingrese el primer numero: ');
        readln(n1);

        writeln('Ingrese el segundo numero: ');
        readln(n2);

        writeln('Ingrese el tercer numero: ');
        readln(n3);

//Iniciamos el condicional para conocer su relacion de igualdad
    if (n1 = n2) and (n2 = n3) then
    begin
        writeln('Los numeros son iguales.')
    end
    else
    begin
    if n1 = n2 then
        writeln('El primer y segundo numero son iguales.');
    if n1 = n3 then
        writeln('El primer y tercer numero son iguales.');
    if n2 = n3 then
        writeln('El segundo y tercer numero son iguales.');
    if (n1 <> n2) and (n1 <> n3) and (n2 <> n3) then
        writeln('Los numeros no son iguales.');
    end;

    writeln('Gracias por utilizar mis algoritmos.');
    readln();


end.