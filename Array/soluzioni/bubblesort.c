#include <stdio.h>

#define N 10

typedef enum{false, true} bool;
void main(){
    int valori[N];
    int i, j, val;
    bool scambio;

    /* Acquisiamo i valori dall'utente */
    printf("Inserisci un vettore:\n");
    for (i=0; i<N; i++)
        scanf("%d", &valori[i]);
    
    /* Bubble sort */
    scambio = true;
    j = N-1;
    /* ripeto fino a quando completo un passaggio senza effettuare scambi */
    while (scambio == true){
        scambio = false;
        /* confronto tutte le coppie muovendomi verso destra.
         * Non è necessario controllare tutte le coppie ad ogni passata:
         * al termine del primo giro l'elemento massimo sarà a posto,
         * al termine del secondo giro il secondo elemento sarà a posto e cosi via.
         * Uso quindi j per sapere dove fermare i confronti */
        for (i=0; i < j; i++){
            if (valori[i] > valori[i+1]){
                /* Scambio le variabili */
                val = valori[i+1];
                valori[i+1] = valori[i];
                valori[i] = val;
                scambio = true;
            }
        }
	j--;
    }
    
    /* Stampiamo l'array ordinato */
    printf("Ecco l'array ordinato:\n");
    for (i=0; i<N; i++)
        printf("%d ", valori[i]);
    printf("\n");
}
