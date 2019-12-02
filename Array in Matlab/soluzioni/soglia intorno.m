m = input('Inserisci matrice: ');
r = input('Inserisci indice riga: ');
c = input('Inserisci indice colonna: ');
soglia = input('Inserisci valore di soglia: ');

% Soluzione "stile C"
soddisfa = true;
for ii=[r-1:r+1]
    for jj=[c-1:c+1]
        if ii ~= jj
            if m(ii,jj) > soglia
                soddisfa = false;
            end
        end
    end
end

% Soluzione "stile MATLAB"
% creiamo una matrice logica per indicare il quadrato 3x3 di nostro interesse
indici = zeros(size(m));
% "accendo" il quadrato
indici(r-1:r+1, c-1:c+1) = 1;
% "spengo" il centro
indici(r,c) = 0
% converto in matrice logica
indici = logical(indici);
if all(m(indici) < soglia)
	disp('si');
else
	disp('no');
end

% Ci sono dei problemi nel caso in cui l'elemento centrale (r,c) sia sul bordo della matrice, possiamo risolverli così:
% calcoliamo gli indici di riga e colonna degli elementi in alto a sinistra e in basso a destra della matrice 3x3 intorno all'elemento indicato dall'uetnte
[nrighe ncolonne] = size(m);
ulr = max(1, r-1) % upper left row
ulc = max(1, c-1) % upper left column
lrr = min(nrighe, r+1) % lower right row
lrc = min(ncolonne, c+1) % lower right column
indici = zeros(size(m))
indici(ulr:lrr, ulc:lrc) = 1;
indici(r, c) = 0;
indici = logical(indici);
if all(m(indici) < soglia)
	disp('si');
else
	disp('no');
end
