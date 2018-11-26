#include <stdio.h>
#define N 10

typedef enum{false, true} bool;
int main(){
    int A[N];
    int i, j, k, val, v;
    int p,q,r;
    bool trovato = false;

    /* Inserimento ordinato fatto la volta scorsa */
    j = 0;
    for(i=0;i<N;i++){
        printf("Inserisci valore: ");
        scanf("%d", &val);
        
        while(j<i && A[j]<=val){
            j++;
        }

        for(k=i;k>j;k--){
            A[k]=A[k-1];
        }
        
        A[j]=val;
        j=0;
    }

    for (i=0; i < N; i++){
        printf("%d ", A[i]);
    }
    printf("\n");

    /* Valore da cercare */
    scanf("%d", &v);


    /* Ricerca dicotomica */
    /* Utilizziamo tre indici p,q,r per tenere traccia del sottoarray che stiamo considerando.
     * p punterà all'elemento sinistro, r a quello destro e q a quello centrale */
    p = 0;
    r = N-1;

    /* Se v è minore del minimo valore di A (o maggiore del massimo) sicuramente non lo troveremo nell'array */
    if ((v < A[0]) || (v > A[N-1])){
        printf("Non trovato\n");
    }
    
    else{
        /* Cerchiamolo finchè non lo abbiamo trovato o arriviamo a considerare un array di lunghezza nulla */
        while ((trovato == false) && (p <= r)){
            q = (p+r)/2;

            if (A[q] == v){
                printf("trovato in posizione %d\n", q);
                trovato = true;
            }
            else if (A[q] > v){
                /* L'elemento centrale è maggiore -> sposto a sinistra l'indice destro rimpicciolendo l'array considerato */
                r = q-1;
            }
            else{
                /* L'elemento centrale è minore -> sposto a destra l'indice sinistro rimpicciolendo l'array considerato */
                p = q+1;
            }
        }

        if (trovato == false){
            printf("non trovato\n");
        }
    }
}
