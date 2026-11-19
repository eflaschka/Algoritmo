program Days;
uses crt;

var
mes, anio, dias: Integer;

begin
  clrscr();
  writeln('=================================');
  writeln('===== Ejercicio Days - Enri =====');
  writeln('=================================');
  writeln();

//Comenzamos solicitando el mes y anio al usuario
    writeln('Ingrese el mes (##): ');
    readln(mes);

    writeln('Ingrese el anio (####): ');
    readln(anio);

//Iniciamos el condicional para conocer la cantidad de dias en el mes
  case mes of
    1, 3, 5, 7, 8, 10, 12:
      dias := 31;
    4, 6, 9, 11:
      dias := 30;
    2:

  begin

//Verificacion de anio bisiesto
  if (anio mod 4 = 0) and ((anio mod 100 <> 0) or (anio mod 400 = 0)) then
      dias := 29
  else
      dias := 28;
      end;
  else
    dias := -1; // Mes invalido
  end;

//Mostramos el resultado
  if dias <> -1 then
    writeln('Los dias del mes son: ', dias)
  else
    writeln('Por favor, ingrese un numero valido, del 1 al 12.');

  writeln('Gracias por utilizar mis algoritmos!.');
  readln();
end.