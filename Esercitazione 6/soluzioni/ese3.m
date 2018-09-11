N=input('Quanti numeri vuoi inserire? ');

x=1;
while(x<=N)
    a(x)=input(fprintf('Inserisci numero %d: ',x));
    x=x+1;
end

m=input('Inserisci numero da confrontare: ');

% Il controllo di tutti minori (o maggiori o uguali) utilizza delle flag con la stessa logica dell'esercizio precedente
minori=1;maggiori=1;uguali=1;

x=1;
while(x<=N)
    if(a(x)<m)
        maggiori=0;
        uguali=0;
    elseif(m<a(x))
        minori=0;
        uguali=0;
    else % se falliscono entrambi gli if vuol dire che sono uguali
        maggiori=0;
        minori=0;
    end
    x=x+1;
end

if(minori == 1)
   disp(['Tutti i numeri sono minori di ' num2str(m)]) 
elseif(maggiori == 1)
    disp(['Tutti i numeri sono maggiori di ' num2str(m)])
elseif(uguali == 1)
    disp(['Tutti i numeri sono uguali a ' num2str(m)])
else
    disp(['I numeri non sono tutti uguali, maggiori o minori di ' num2str(m)])
end
