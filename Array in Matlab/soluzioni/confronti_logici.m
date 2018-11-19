N=input('Quanti numeri vuoi inserire? ');

x=1;
while(x<=N)
    a(x)=input(sprintf('Inserisci numero %d: ',x));
    x=x+1;
end

m=input('Inserisci numero da confrontare: ');

% (a < m) mi da un array logico (con le stesse dimensioni di a) che contiene degli 1 (vero) nelle posizioni di a in cui la condizione <m è verificata
% sum(a<m) somma questi 1 dandomi il numero di elementi di a per cui la condizione <m è verificata
% se sum(a<m) è uguale ad N vuol dire che la condizione è vera per tutti gli elementi di a

if(sum(a<m)==N)
   disp(['Tutti i numeri sono minori di ' num2str(m)]) 
elseif(sum(a>m)==N)
    disp(['Tutti i numeri sono maggiori di ' num2str(m)])
elseif(sum(a==m)==N)
    disp(['Tutti i numeri sono uguali a ' num2str(m)])
else
    disp(['I numeri non sono tutti uguali, maggiori o minori di ' num2str(m)])
end
