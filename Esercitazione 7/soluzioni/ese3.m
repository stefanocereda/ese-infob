A=magic(5)
 
%Si può pensare di ordinare gli elementi utilizzando  la funzione 'sort'
%che ordina le colonne di una matrice (vedi help sort per maggiori informazioni).
%Per non eliminare la matrice di partenza, ci si appoggia su una matrice
%ausiliaria
aux=sort(A)
 
%Si può pensare di effettuare la trasposta della matrice, per poi ripetere
%l'operazione
aux=aux'
disp('Ordinato per colonne')
ordinato=sort(aux)

%Se voglio ordinare per righe, è sufficiente eseguire la trasposta del
%risultato ottenuto
disp('Ordinato per righe')
ordinato=ordinato'
