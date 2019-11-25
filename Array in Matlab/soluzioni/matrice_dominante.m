% versione bella
[r c] = size(m);
if r ~= c
    res = -1;
else
    d = abs(diag(m)); % diagonale in valore assoluto
    m(logical(eye(size(m)))) = 0; % rimuovo la diagonale per calcolare la somma degli elementi restati
    sum_rows = sum(m')'; % calcolo la somma lungo le colonne dellta trasposta (quindi le righe della matrice originale) e traspongo il risultato per avere un vettore colonna come d
    res = all(sum_rows < d); % per ogni riga controllo che la somma sia minore alla diagonale
end
res

%versione meno bella
dim = size(m);
if dim(1) ~= dim(2)
    ris = -1;
else
    ris = 1;

    for ii = 1:dim
        somma = sum(abs(m(ii, 1:ii-1))) + sum(abs(m(ii, ii+1:end)));
        if somma >= abs(m(ii, ii))
            ris = 0;
        end
    end
end
ris

