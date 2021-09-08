% versione bella
[r c] = size(m);
if r ~= c
    res = -1;
else
    d = abs(diag(m)); % diagonale in valore assoluto
    m(logical(eye(size(m)))) = 0; % rimuovo la diagonale per calcolare la somma degli elementi restati
    sum_rows = sum(abs(m)')'; % calcolo la somma lungo le colonne della trasposta (quindi le righe della matrice originale) e traspongo il risultato per avere un vettore colonna come d
    res = all(sum_rows < d); % per ogni riga controllo che la somma sia minore alla diagonale
end
res

%versione meno bella, suppongo sia giusta e cerco il controesempio
[r c] = size(m);
if r ~= c
    ris = -1;
else
    ris = 1;

    for ii = 1:r
	%calcolo la somma della parte a sinistra della diagonale e di quella a destra, poi faccio il totale
        somma = sum(abs(m(ii, 1:ii-1))) + sum(abs(m(ii, ii+1:end)));
        if somma >= abs(m(ii, ii))
            ris = 0;
        end
    end
end
ris
