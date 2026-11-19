program positivos;
uses crt;

var
cont: integer;
respuesta: char;

begin
    clrscr();
    writeln('=========================================');
    writeln('===== Ejercicio 50 Positivos - Enri =====');
    writeln('=========================================');
    writeln();

//Iniciamos preguntando al usuario si desea conocer los primeros 50 numeros positivos
        writeln('Desea conocer los primeros 50 numeros positivos? (S/N)');
        readln(respuesta);

    if (respuesta = 'S') or (respuesta = 's') then
    begin
        cont := 1;
    while (cont <= 50) do
    begin
    write(cont, ' ');
        cont := cont + 1;
    end;
    end
    else
    begin
        writeln('No se mostraran los numeros.');
    end;

        writeln('Gracias por utilizar mis algoritmos.');
        readln();


end.