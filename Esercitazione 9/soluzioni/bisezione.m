A = input('Inserisci vettore: ');
A = sort(A)

v = input('Inserisci valore: ');
trovato = false;

/* Esattamente equivalente al C, fatta eccezione per gli indici */

p = 1;
r = length(A);
if (v < A(p)) | (v > A(r))
    disp('Non trovato');
else
    while (~trovato) & (p <= r)
        q = floor((p+r)/2);
        disp(q);
    
        if A(q) == v
            disp(['Trovato in posizione ', num2str(q)]);
            trovato = true;
        elseif A(q) > v
            r = q-1;
        else
            p = q+1;
        end
    end
    
    if (~trovato)
        disp('non trovato');
    end
end
