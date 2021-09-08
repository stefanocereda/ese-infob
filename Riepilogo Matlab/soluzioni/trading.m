% soluzione punto 1
function [titoliOver, titoliUnder] = splittaMatrice(titoliTot, andamentoTot, soglia)
 
% Riceve in input la matrice titoliTot, il vettore andamentoTot e uno scalare soglia.
% Fornisce in output due matrici: titoliOver e titoliUnder
% - titoliOver include le righe di titoliTot corrispondenti agli elementi di andamentoTot
%   con valore maggiore o uguale di soglia
% - titoliUnder include le righe di titoliTot corrispondenti agli elementi di andamentoTot
%    con valore minore di soglia.
 
titoliOver  = titoliTot(andamentoTot >= soglia, :);
titoliUnder  = titoliTot(andamentoTot < soglia, :);
  
 

% soluzione punto 2.
close all; clear all; clc;
 
% 2.1
load('log.mat');
 
% 2.2
soglia = 0;
[titoliOver, titoliUnder] = splittaMatrice(titoli, andamento, soglia);
 
% 2.3
x = 1: 500; 

 
% 2.4
figure
ylabel('Valore titolo');
xlabel('Tempo');
title('Titoli positivi');
if titoliOver
   [r, c] = size(titoliOver);
   hold on;
   for ii=1:r
       plot(x, titoliOver(ii, :));
   end
   hold off;
end

figure
ylabel('Valore titolo');
xlabel('Tempo');
title('Titoli in decrecita');
if titoliUnder
   [r, c] = size(titoliUnder);
   hold on;
   for ii=1:r
       plot(x, titoliUnder(ii, :));
   end
   hold off;
end 
