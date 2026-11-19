program operaciones;

uses crt;
var a, b, result: integer; //declarar variables

BEGIN
//Pedir los numeros al usuario:
write('Ingrese el 1er valor: ');
readln(a);

write('Ingrese el 2do valor: ');
readln(b);

//Se inician los procesos y se muestran los resultados

//Suma
result := a + b;
writeln(a, ' + ', b, ' = ', result);

//Resta
result := a - b;
writeln(a, ' - ', b, ' = ', result);

//Multiplicacion
result := a * b;
writeln(a, ' x ', b, ' = ', result);

//Primero se verifica la division por cero 
	if (b = 0) then
	begin
		writeln('No se puede dividir por cero.');
	end
	else
	begin

//Se realiza la operacion si b no es 0
result := a div b;
writeln(a, ' / ', b, ' = ', result);
	end;
	
//Pausar la ejecución
readln();	
end.

