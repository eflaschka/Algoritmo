program cuadradoycubo;
uses crt;

var nro, cuadrado, cubo: integer;

BEGIN
	clrscr();
	writeln('============================================');
	writeln('===== Ejercicio cuadrado y cubo - Enri =====');
	writeln('============================================');
	writeln();
	
//Se solicita el numero
write('Ingrese un numero del que quiera conocer su cubo y cuadrado: ');
readln(nro);

cuadrado := nro * nro;
writeln(nro, ' x ', nro, ' = ', cuadrado);

cubo := nro * nro * nro;
writeln(nro, ' x ', nro, ' x ', nro, ' = ', cubo);

readln();	
	
END.
