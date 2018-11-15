% Riempimento matrice triangolare e selezione dati
% 13/11/2018 Stefano Cereda

% Questa N in C sarebbe una define, in MATLAB le indichiamo all'inizio dello script
N=5;

%non potete usare i j come variabili per gli indici perché indicano l'unità immaginaria. La soluzione comune è usare ii e jj
ii=1;jj=1;

%Attenzione al fatto che in MATLAB gli indici partono da 1 e non da 0 come in C

% voglio acquisire tutte le righe
while(ii<=N)
   % nella singola riga acquisisco le colonne dopo la diagonale
   jj=ii;
   while(jj<=N)
      % non è necessario 'definire' la matrice, ogni volta che accediamo ad una nuova cella estendiamo la matrice
      matrice(ii,jj)=input('Inserisci valore in cella '); 
      jj=jj+1;
   end
   ii=ii+1;
end

% disp lo vedrete in futuro
disp(matrice)

% popoliamo il vettore a utilizzando un indice l
ii=1;l=1;
while(ii<=N)
   jj=ii; 
   while(jj<=N)
      if(matrice(ii,jj) > -10)
         a(l)=matrice(ii,jj);
         l=l+1;
      end
      jj=jj+1; 
   end
   ii=ii+1;
end

disp(a)

% cosa succede eseguendo due volte lo script? Attenzione al fatto che il vettore a non viene inizializzato e potrebbe già esistere nel workspace!
