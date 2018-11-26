function [ vMin vMax ] = split(m,x)
%split funzione (split) che data una variabile di ingresso m (scalare, vettore o matrice di numeri) ed un numero x restituisce due vettori vMin e vMax. 
%   vMin contiene tutti gli elementi della matrice minori di x, mentre vMax gli elementi maggiori di x.
vLin=m(:);
vMin = vLin(vLin<x);
vMax = vLin(vLin>x);
paperino=5;
end

