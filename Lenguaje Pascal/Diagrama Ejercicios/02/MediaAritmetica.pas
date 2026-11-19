program MediaAritmetica;

	var
	x, y, z: integer;
	media: real;

begin
	
	writeln('=====================================');
	writeln('====== Media Aritmetica - Enri ======');
	writeln('=====================================');

//Solicitar los valores para la operacion
write('Ingrese el valor de x: ');
readln(x);

write('Ingrese el valor de y: ');
readln(y);

write('Ingrese el valor de z: ');
readln(z);

//Inicia el proceso de Media Aritmetica
media := (x + y + z) / 3;

//Se muestra el resultado
writeln('La media aritmetica de ', x, ', ', y, ', ', z, ' es: ', media:0:2);
readln();


end.
