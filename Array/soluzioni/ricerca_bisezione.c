#include <stdio.h>

#define N 10

typedef int array[N];
typedef enum{false, true} bool;

void main(){
    array valori;
    int i, valore, z;
    int idx_min, idx_max;
    bool deve_inserire, trovato;

    /* Cicliamo fino a che l'utente deve_inserire */
    deve_inserire = true;
    while (deve_inserire == true){
        /* Acquisiamo i valori dall'utente */
        printf("Inserisci un vettore ordinato:\n");
        for (i=0; i<N; i++)
            scanf("%d", &valori[i]);

        /* Controlliamo che sia effettivamente ordinato. Supponiamo che l'array vada bene e cerchiamo un controesempio */
        deve_inserire = false;
        for (i=0; i < N-1; i++)
            if (valori[i] > valori[i+1])
                deve_inserire = true;
        /* Posso modificare il for in for(i=1; deve_inserire==false && i < N; i++) per uscire al primo controesempio trovato*/
    }



    /* In alternativa, possiamo richiedere all'utente di reinserire solo i valori non in ordine */
    printf("Inserisci un vettore ordinato modo 2\n");
    for (i=0; i<N; i++){
        printf("Inserisci un numero: ");
        scanf("%d", &valori[i]);
        /* Controllo che vada bene (solo dal secondo in poi) */
        while (i >= 1 && valori[i] < valori[i-1]){
            printf("Il numero non è valido, deve essere maggiore di %d\n", valori[i-1]);
            printf("Inserisci un numero: ");
            scanf("%d", &valori[i]);
        }
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

    /* Continuo il confronto fino a che non ho trovato il valore cercato e sto considerando un'array di lunghezza valida */
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
        /* Fine informazioni utili, riprende l'algoritmo vero e proprio */

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
        printf("Elemento trovato in indice %d.\n", i);
    else
        printf("L'elemento cercato non è presente.\n");
}







