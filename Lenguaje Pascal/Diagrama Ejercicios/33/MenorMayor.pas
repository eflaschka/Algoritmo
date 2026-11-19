program MenorMayor;
uses crt;

  //Funcion que devuelve el mayor entre dos numeros
  function obtenerMayor(a, b: integer): integer;
  begin
    if a > b then
      obtenerMayor := a
  else
      obtenerMayor := b;
  end;

  //Funcion que devuelve el menor entre dos numeros
  function obtenerMenor(a, b: integer): integer;
  begin
    if a < b then
      obtenerMenor := a
  else
      obtenerMenor := b;
  end;

  //Procedimiento que pide 10 numeros y busca el menor y el mayor
  procedure buscarMenorMayor();
  var
  i, numero, menor, mayor: integer;
  begin
    writeln('Ingrese el primer numero: ');
    readln(numero);

    menor := numero;
    mayor := numero;

  //Solicitamos los 9 numeros restantes al usuario y comparamos cada uno
  for i := 2 to 10 do
  begin
    writeln('Ingrese el numero ', i, ': ');
    readln(numero);

    mayor := obtenerMayor(mayor, numero);
    menor := obtenerMenor(menor, numero);
  end;

  writeln();
  writeln('El menor es: ', menor);
  writeln('El mayor es: ', mayor);
  end;

//Iniciamos el algoritmo
begin
  clrscr();
  writeln('==========================================');
  writeln('===== Ejercicio Menor y Mayor - Enri =====');
  writeln('==========================================');
  writeln();

  buscarMenorMayor();

  writeln('Gracias por utilizar mis algoritmos');
  readln();
end.