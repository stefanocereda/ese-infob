% versione bella
[r c] = size(m);
if r ~= c
    res = -1;
else
    d = abs(diag(m)); % diagonale in valore assoluto
    m(logical(eye(size(m)))) = 0; % rimuovo la diagonale per calcolare la somma degli elementi restati
    sum_rows = sum(m')';
    res = all(sum_rows < d);
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

