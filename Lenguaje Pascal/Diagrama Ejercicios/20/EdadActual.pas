program edadactual;
uses crt;

var
dn, mn, an: integer;   //Fecha de nacimiento
da, ma, aa: integer;   //Fecha actual
edad: integer;

begin
    clrscr();
    writeln('========================================');
    writeln('===== Ejercicio Edad Actual - Enri =====');
    writeln('========================================');
    writeln();
    
//Comenzamos solicitando la fecha actual y de nacimiento al usuario
        writeln('Ingrese el dia actual: ');
        readln(da);

        writeln('Ingrese el mes actual: ');
        readln(ma);
        
        writeln('Ingrese el anio actual: ');
        readln(aa);

//Fecha de nacimiento
        writeln('Ingrese el dia de nacimiento: ');
        readln(dn);

        writeln('Ingrese el mes de nacimiento: ');
        readln(mn);
        
        writeln('Ingrese el anio de nacimiento: ');
        readln(an);

//Iniciamos el condicional para conocer la edad
    if (ma < mn) or ((ma = mn) and (da < dn)) then
    begin
        edad := aa - an - 1;
    end
    else
    begin
        edad := aa - an;
    end;
        writeln('Tienes ', edad,' anios.');
        writeln('Gracias por utilizar mis algoritmos.');
        readln();

end.