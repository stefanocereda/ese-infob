%Calcolo fattoriale
% 13/11/2018 Stefano Cereda

n=input('Inserisci n: ');

%Matalb fornisce già la funzione fattoriale
factorial(n)

ris = 1;

while n > 1
    ris = ris * n;
    n=n-1;
end

ris


%Cosa succede se provate ad eseguire lo script ed in seguito lo modificate rimuovendo
%l'inizializzazione di ris e rieseguite lo script? Perché?
