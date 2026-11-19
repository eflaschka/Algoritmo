program PrimoCompuesto;
uses crt;

//Funcion que determina si un numero es primo
function esPrimo(numero: integer): boolean;
var
    divisor: integer;
    primo: boolean;
begin
//Cortamos el caso del 1 y numeros menores, que no son primos
    if numero < 2 then
    begin
        esPrimo := false;
        exit;
    end;

    primo := true;

//Recorremos posibles divisores hasta numero div 2
    for divisor := 2 to (numero div 2) do
    begin
    if numero mod divisor = 0 then
        primo := false;
    end;

    esPrimo := primo;
end;

//Procedimiento que pide el numero y muestra si es primo o compuesto
procedure verificarPrimo();
var
    numero: integer;
    begin
        writeln('Ingrese un numero: ');
        readln(numero);

    if esPrimo(numero) then
        writeln(numero, ' es primo.')
    else
        writeln(numero, ' es compuesto.');
end;

//Iniciamos el algoritmo
begin
    clrscr();
    writeln('==============================================');
    writeln('===== Ejercicio Primo o Compuesto - Enri =====');
    writeln('==============================================');
    writeln();

//Llamamos al procedimiento
    verificarPrimo();

    writeln('Gracias por utilizar mis algoritmos.');
    readln();
end.