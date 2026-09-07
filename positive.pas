program positive;

var nro: integer;

BEGIN
//Ingreso de numero
write('Ingrese el valor: ');
readln(nro);

//Comienzo del condicional
if nro < 0 then
writeln('El numero es negativo')

else if nro > 0 then
writeln('El numero es positivo')

else
writeln('El numero es neutro');
	
readln();
	
END.

