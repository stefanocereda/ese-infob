% Risoluzione equazione di secondo grado

a=input('Inserisci a: ');
b=input('Inserisci b: ');
c=input('Inserisci c: ');

if(a~=0)
    delta=(b^2)-(4*a*c);
    if (delta==0)
        x = -b/(2*a)
    else
        x1 = (-b-sqrt(delta))/(2*a)
        x2 = (-b+sqrt(delta))/(2*a)
    end
else
   x = -c/b
end
