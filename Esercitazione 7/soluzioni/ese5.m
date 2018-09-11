m = input('Inserisci matrice: ');
r = input('Inserisci indice riga: ');
c = input('Inserisci indice colonna: ');
soglia = input('Inserisci valore di soglia: ');

[nrighe, ncolonne] = size(m);

% calcoliamo gli indici di riga e colonna degli elementi in alto a sinistra e in basso a destra della matrice 3x3 intorno all'elemento indicato dall'uetnte
% upper left row, upper low column, lower left row, lower left column
ulr = max(1, r-1);
ulc = max(1, c-1);
lrr = min(nrighe, r+1);
lrc = min(ncolonne, c+1);

% il confrontro mi da una matrice logica. Usando all(all(..)) ci riconduciamo ad un singolo valore logico
ris = all(all(m(ulr:lrr, ulc:lrc) < soglia))
