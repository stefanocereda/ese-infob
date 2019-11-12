Stazione stazioneMI;
int i;

// punto 1
// algoritmo di ricerca dell'indice di massimo in un array: scorriamo gli elementi tenendo traccia di massimo ed indice
// gestiamo anche il caso in cui nessun treno sia in attesa
boolean trenoInAttesa = falso;
int maxAttesaTreno = 0;
int indiceMaxAttesaTreno = 0;
Banchina p;

for (i = 0; i < stazioneMI.nBanchine; i++) {
  p = stazioneMI.banchine[i];
  if (p.stBanchina == occupato && p.trenoSosta.stTreno == attesaOut) {
    trenoInAttesa = vero;
    if (maxAttesaTreno < p.trenoSosta.minutiAttesaOut) {
      indiceMaxAttesaTreno = i;
      maxAttesaTreno = p.trenoSosta.minutiAttesaOut;
    }
  }
}
if (trenoInAttesa) {
  printf("Treno con priorita' in attesa alla banchina n. %d",
         indiceMaxAttesaTreno);
}


// punto 2
Treno trenoInManovra;
int j;

if (stazioneMI.bloccata == falso && stazioneMI.nTreniInCoda > 0) {
  stazioneMI.bloccata = vero;
  trenoInManovra = stazioneMI.codaTreni[0];
  trenoInManovra.stTreno = inIngresso;
  for(j = 0; j < (stazioneMI.nTreniInCoda-1); j++) {
    stazioneMI.codaTreni[j] = stazioneMI.codaTreni[j + 1];
  }
  stazioneMI.nTreniInCoda--;
} 
