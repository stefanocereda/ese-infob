% do per scontato che m esista e sia un vettore
p = m[m>=0]
n = m[m<0]

% se la specifica cambia, devo cambiare il codice in due punti
v1 = m[m>=x]
v2 = m[m<x]

% se nel workspace chiamante ho delle variabili p, n, v1 o v2, le ho sovrascritte irrimediabilmente
