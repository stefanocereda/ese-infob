%Punto 1
function [M] = cornici(N, P)
% Questa funzione iterativa prende come parametro una dimensione e un numero  
% e restituisce al chiamante una matrice quadrata della dimensione data che
% contiene nella prima riga, prima colonna, ultima riga e ultima colonna
% il numero dato e nelle altre righe e colonne numeri crescenti in
% modo da formare cornici concentriche. 
 
M = P * ones(N);
ii = 1;
while ii < N/2
	M(ii+1:N-ii, ii+1:N-ii) = P + ii;
	ii = ii + 1;
end
end

%Punto 2
% script
N = input('Inserisci la dimensione della matrice: ');
P = input('Inserisci il numero di partenza: ');
M = cornici(N, P)

%Punto 3
function [M] = corniciRic(N, P)
% Questa funzione ricorsiva prende come parametro una dimensione e un numero  
% e restituisce al chiamante una matrice quadrata della dimensione data che
% contiene nella prima riga, prima colonna, ultima riga e ultima colonna
% il numero dato e nelle altre righe e colonne numeri crescenti in
% modo da formare cornici concentriche. 

M = P * ones(N);
if N > 2
	M(2:end-1, 2:end-1) = corniciRic(N-2, P+1);
end
end 
