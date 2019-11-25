% generiamo una matrice
A=magic(5)
% togliamo l'ultima riga per non averla quadrata
A = A(1:end-1, :)

% ordina le singole colonne
sort(A)

% ordina lungo le colonne
sort(A,1)
% ordina lungo le righe
sort(A,2)

% direzione dell'ordinamento
sort(A, 1, 'ascending')
sort(A, 1, 'descending')

% ordine totale: ordiniamo il vettore
v = sort(a(:))
% e torniamo alla forma di partenza
reshape(v, size(a))
