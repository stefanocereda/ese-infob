% Risoluzione equazione di secondo grado
% 13/11/2018 Stefano Cereda

a=input('Inserisci a: ');
b=input('Inserisci b: ');
c=input('Inserisci c: ');

if (a==0)
    % Grado < 2
    if (b ~= 0)
        % Grado = 1
        % non metto il ; in modo da stampare il risultato
        x = -c/b
    end
else
    % Grado = 2
    delta=(b^2)-(4*a*c);
    if (delta==0)
        x = -b/(2*a)
    else
        x1 = (-b-sqrt(delta))/(2*a)
        x2 = (-b+sqrt(delta))/(2*a)
    end
end
