program ClasificarNumeros;
uses crt;

var
i, numero: integer;
pares, impares, positivos, negativos: integer;

begin
clrscr();
  writeln('===========================================');
  writeln('===== Clasificacion de Numeros - Enri =====');
  writeln('===========================================');
  writeln();

pares := 0;
impares := 0;
positivos := 0;
negativos := 0;

//Iniciamos el algoritmo
    writeln('Ingrese 15 numeros para conocer su naturaleza: ');

//Pedimos los 15 numeros y clasificamos cada uno
    for i := 1 to 15 do
    begin
      writeln('Ingrese el numero ', i, ': ');
      readln(numero);

    if numero mod 2 = 0 then
      pares := pares + 1
    else
      impares := impares + 1;

    if numero > 0 then
      positivos := positivos + 1;

    if numero < 0 then
      negativos := negativos + 1;
  end;

  writeln();
  writeln('Pares: ', pares);
  writeln('Impares: ', impares);
  writeln('Positivos: ', positivos);
  writeln('Negativos: ', negativos);

  writeln('Gracias por utilizar mis algoritmos.');
  readln();
end.