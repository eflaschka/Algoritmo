program trapecios;

uses crt;
var L1, L2, A, superficie: integer;

BEGIN
	clrscr();
	writeln('======================================================');
	writeln('===== Ejercicio Superficie de un Trapecio - Enri =====');
	writeln('======================================================');
	writeln();
	
//Ingreso de datos
writeln('Ingrese la longitud del trapecio 1: ');
readln(L1);

writeln('Ingrese la longitud del trapecio 2: ');
readln(L2);

writeln('Ingrese la altura: ');
readln(A);

//Calculo de la Superficie
superficie := L1 + L2 div 2 * A;
writeln('La superficie de los trapecios es: ', superficie);

readln();
	
END.

