#include <stdio.h>

#define N 10

typedef int array[N];
typedef enum{false, true} bool;

void main(){
    array valori;
    int i, valore, z;
    int idx_min, idx_max;
    bool acquisire, trovato;

    acquisire = true;
    while (acquisire == true){
        /* Acquisiamo i valori dall'utente */
        printf("Inserisci un vettore ordinato:\n");
        for (i=0; i<N; i++)
            scanf("%d", &valori[i]);

        /* Controlliamo che sia effettivamente ordinato */
        acquisire = false;
        for (i=1; i < N; i++)
            if (valori[i] < valori[i-1])
                acquisire = true;
    }

    /* chiediamo il valore da cercare */
    printf("Quale valore vuoi cercare?\n");
    scanf("%d", &valore);

    /* Effettuiamo la ricerca.
     * Iniziamo considerando tutto l'array */
    /* idx_min indica il primo elemento da considerare, idx_max l'ultimo.
     * useremo anche i per indicare l'elemento centrale (quello da usare per i confronti) */
    trovato = false;
    idx_min = 0;
    idx_max = N-1;

    /* Continuo il confronto fino a che ho trovato il valore cercato oppure sto considerando un'array di lunghezza negativa */
    while (trovato == false && idx_min <= idx_max){
        /* considero l'elemento centrale */
        i = (idx_max + idx_min) / 2;

        /* Stampiamo delle informazioni utili per capire come funziona l'algoritmo */
        for (z=0; z<N; z++){
            if (z >= idx_min && z <= idx_max)
                printf("%5d", valori[z]);
            else
                printf("     ");
        }
        printf("\n");
        for (z=0; z<N; z++){
            if (z == i)
                printf("    ↑");
            else
                printf("     ");
        }
        printf("\n");
        /* Fine informazioni utili */

        /* se il valore considerato è uguale a quello cercato ho finito, il risultato è in i */
        if (valori[i] == valore)
            trovato = true;

        /* altrimenti modifico gli indici in modo opportuno */
        else if (valori[i] < valore)
            /* L'elemento centrale è minore -> sposto a destra l'indice sinistro rimpicciolendo l'array considerato */
            idx_min = i+1;
        else
            /* L'elemento centrale è maggiore -> sposto a sinistra l'indice destro rimpicciolendo l'array considerato */
            idx_max = i-1;
    }

    if (trovato == true)
        printf("Elemento trovato in posizione %d.\n", i);
    else
        printf("L'elemento cercato non è presente.\n");
}







