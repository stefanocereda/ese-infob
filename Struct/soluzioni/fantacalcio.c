/* STRUTTURA DATI */
#define N 20

typedef char stringa[50];

typedef struct {
    stringa nome;
    stringa cognome;
    int NCoppe;
} allenatore;

typedef struct {
    stringa nome;
    stringa colore;
    allenatore all;
    int punteggio;
} fantasquadra;

typedef fantasquadra fantacalcio[N];
fantacalcio campionato;




/* ALLENATORI CON ALMENO UNA COPPA */
int i;
int NAllConCoppa = 0;
for (i = 0; i < N; i++)
    if (campionato[i].all.NCoppe > 0)
        NAllConCoppa++;

printf("\n\n Il numero di allenatori che hanno vinto almeno una coppa è : %d", NAllConCoppa);

/* Come posso fare per controllare che un allenatore non abbia più di una
 * squadra? */
