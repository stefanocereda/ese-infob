% Riempimento matrice e selezione dati
%

N=5;

%non potete usare i j
ii=1;jj=1;
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
      if(matrice(ii,jj)>-10)
         a(l)=matrice(ii,jj);
         l=l+1;
      end
      jj=jj+1; 
   end
   ii=ii+1;
end

disp(a)

% cosa succede eseguendo due volte lo script?
