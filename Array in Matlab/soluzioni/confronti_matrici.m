m = [-2 2 3; 4 5 6];
[r c]=size(m);

x=1; somma=0;
while(x<=r)
    y=1;
    while(y<=c)
        somma=somma+m(x,y);
        y=y+1;
    end
    x=x+1;
end

media=somma/(r*c); %oppure media = sum(sum(m)) / (r*c) saltando i due while precedenti

% per ogni elemento della matrice controllo la condizione e scrivo il valore corretto nella posizione corrispondenete della nuova matrice
x=1;
while(x<=r)
    y=1;
    while(y<=c)
        if(m(x,y)<media)
            mr(x,y)=-1;
        elseif(m(x,y)>media)
            mr(x,y)=1;
        else
            mr(x,y)=m(x,y);
        end
        y=y+1;
    end
    x=x+1;
end

disp(m)
disp(mr)


% e versione matriciale che utilizza gli array logici come nell'esercizio precedente
mr2(m < media) = -1;
mr2(m > media) = 1;
mr2(m == media) = m(m==media);
disp(mr2)
% notate che in questo caso mr è un array, non una matrice come dovrebbe essere.
%mr2(mr < media) infatti procede così:
%   costruisce l'array logico m < media. Ad esempio: [0 1 0; 1 1 0]
%   Prende le posizioni dell'array logico in cui sono presenti degli 1, ma lo fa utilizzando gli indici posizionali, non quelli [riga, colonna]. Nel caso precedente considera quindi le posizioni [2 3 4] della matrice logica
%   Uso questi indice per accedere ai valori di mr2. Quindi mr2[2 3 4]
%   Non avendo noi definito mr2, matlab non può sapere che mr2 ha le stesse dimensioni di mr, quindi lo tratta come un array monodimensionale.

%Possiamo risolvere il problema inizializzando mr2=mr in modo da darne le dimensioni corrette
mr3 = mr;
mr3(m < media) = -1;
mr3(m > media) = 1;
mr3(m == media) = m(m==media);
disp(mr3)
