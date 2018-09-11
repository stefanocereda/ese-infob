#include <stdio.h>
#define N 10

typedef enum{false, true} bool;
int main(){
    int A[N];
    int i, j, k, val, v;
    int p,q,r;
    bool trovato = false;
    bool scambio = false;

    /* Inserimento non ordinato */
    for (i=0; i < N; i++){
        scanf("%d", &A[i]);
    }

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
        for (i=0; i < j+1; i++){ //QUA ERA J--
            if (A[i] > A[i+1]){
                /* Scambio le variabili */
                val = A[i+1];
                A[i+1] = A[i];
                A[i] = val;
                scambio = true;
            }
        }
	j--; // QUESTO MANCAVA
    }


    for (i=0; i < N; i++){
        printf("%d ", A[i]);
    }
    printf("\n");

    /* Valore da cercare */
    scanf("%d", &v);


    /* Ricerca dicotomica */
    p = 0;
    r = N-1;

    if ((v < A[p]) || (v > A[r])){
        printf("Non trovato\n");
    }
    else{
        while ((trovato == false) && (p <= r)){
            q = (p+r)/2;

            if (A[q] == v){
                printf("trovato in posizione %d\n", q);
                trovato = true;
            }
            else if (A[q] > v){
                r = q-1;
            }
            else{
                p = q+1;
            }
        }

        if (trovato == false){
            printf("non trovato\n");
        }
    }
}
