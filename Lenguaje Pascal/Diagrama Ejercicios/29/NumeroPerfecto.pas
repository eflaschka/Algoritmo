program NumerosPerfectos;
uses crt;

var
limite, numero: integer;

//Inicializamos la funcion numero perfecto
function EsNumeroPerfecto(num: integer): boolean;
var
sumaDivisores, divisor: integer;

    begin
    sumaDivisores := 0;
    for divisor := 1 to (num div 2) do
    begin
    if num mod divisor = 0 then
        sumaDivisores := sumaDivisores + divisor;
    end;

        EsNumeroPerfecto := (sumaDivisores = num);
end;

//Iniciamos el algoritmo
begin
    clrscr();
    writeln('====================================');
    writeln('===== Numeros Perfectos - Enri =====');
    writeln('====================================');
    writeln();

//Pedimos el limite al usuario
        writeln('Ingrese un numero para conocer los numeros perfectos que contiene: ');
        readln(limite);

        writeln('Numeros perfectos hasta ', limite, ':');

//Recorremos cada numero de 1 al limite y llamamos a la funcion
    for numero := 1 to limite do
    begin
    if EsNumeroPerfecto(numero) then
          writeln(numero);
end;

    writeln();
    writeln('Gracias por utilizar mis algoritmos.');
    readln();

end.