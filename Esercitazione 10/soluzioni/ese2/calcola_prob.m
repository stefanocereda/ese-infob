function [p] = calcola_prob(n, truccata)
  ris = partita(n, truccata);
  vinte = ris(2:2:36); %numeri dispari hanno indice pari
  p = sum(vinte) / sum(ris);
end