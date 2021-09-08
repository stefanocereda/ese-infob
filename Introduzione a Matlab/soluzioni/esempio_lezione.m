% Funzioni min (e anche max) applicate a vettori e matrici
b = [4 7 2 6 5]
min(b) % (con un solo risultato) dà il valore del minimo
[x y] = min(b) % con due ruisultati da anche la posizione del minimo

a = [24 28 21; 32 25 27; 30 33 31; 22 29 26]
min(a) % per una matrice dà vettore dei minimi nelle colonne
[x y] = min(a) % per una matrice, con due risultati dà due vettori dei valori minimi nelle colonne e della loro posizione (riga)


N = ~mod(M, 2); % N è la matrice che contiene 1 in corrispondenza degli elementi di M divisibili per 2
A = sum(N); % A è un vettore che contiene la somma degli elementi di ciascuna colonna di N
maxVal = max(A);
disp(['il maggior numero di numeri pari per colonna è ', num2str(maxVal)]);
