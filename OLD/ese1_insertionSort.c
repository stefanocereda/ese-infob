#include <stdio.h>
#define N 10

typedef enum{false, true} bool;
int main(){
    int A[N];
    int i, j, k, val, v;
    int p,q,r;
    bool trovato = false;

    /* Inserimento non ordinato */
    for (i=0; i < N; i++){
        scanf("%d", &A[i]);
    }

    /* Insertion sort */
    for (i=1; i < N; i++){
        val = A[i]; /* valore da inserire */
        j = i-1; /* posizione di inserimento */
        
        /* Ora muovendoci verso sinistra spostiamo gli elementi verso destra finchè
         * creiamo lo spazio per val */
        while ((j >= 0) && (A[j] > val)){ 
            A[j+1] = A[j];
            j--;
        }
        
        /*ho creato lo spazio -> copio il valore */
        A[j+1] = val; 
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
