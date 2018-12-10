ris = partita(100000, truccata=false);
ris_t = partita(100000, truccata=true);
plot(0:36, ris);
hold on
plot(0:36, ris_t);
xlabel('Numero generato');
ylabel('Frequenza');

calcola_prob(100000, truccata=false)
calcola_prob(100000, truccata=true)