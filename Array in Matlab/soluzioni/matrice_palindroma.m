dim = size(m); % dimensione matrice  
res = 1; % risultato di partenza  
for i = 1:floor(dim(1)/2) % faccio controlli solo su metà delle righe  
    % controllo che riga attuale e la corrispettiva dal fondo
    % siano uguali tramite comparazione tra vettori logici
     if any(m(i,:) ~= m(end-i+1,:))  
         res = 0;
     end
end
res

m = rot90(m')
