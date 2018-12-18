function [p] = calcola_prob(N, truccata)
ris = partita(N, truccata);
vinte = ris(2:2:36);
p = sum(vinte) / N;
end
