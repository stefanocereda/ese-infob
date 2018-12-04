function [ vMin vMax ] = split(m,x)
%split funzione (split) che data una variabile di ingresso m (scalare, vettore o matrice di numeri) ed un numero x restituisce due vettori vMin e vMax. 
%   vMin contiene tutti gli elementi della matrice minori di x, mentre vMax gli elementi maggiori di x.
vLin=m(:);
vMin = vLin(vLin<x);
vMax = vLin(vLin>x);
pippo=5;
end

% Ora è chiaro che la funzione abbia bisogno di una variabile m ed una variabile x (ed il commento ne specifica il tipo).
% Inoltre, se avessi delle variabili vLin vMin vMax nel workspace chiamante, queste non verrebbero sovrascritte.
% Allo stesso modo, la variabile pippo non è ritornata e quindi non ne troveremo traccia nel workspace.
