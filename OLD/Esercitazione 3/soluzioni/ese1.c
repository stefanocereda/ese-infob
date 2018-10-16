/* Scrivere un programma che legga un vettore di interi V ed un numero intero n,
 * si stampi l'indice di V corrispondente al primo elemento uguale ad n.*/

/* Programma visto a lezione */

/* Solita include per le operazioni di in/out */
#include <stdio.h>

/* Definiamo la lunghezza massima degli array */
#define MAX_N 10

/* Definiamo il tipo array */
typedef int array[MAX_N];

int main(){
    /* Definiamo una variabile di tipo array */
    array V;

    /* il numero da cercare */
    int n;

    /* e un indice per scorrere l'array */
    int i;


    /* Acquisiamo l'array con un for */
    for (i=0; i < MAX_N; i++){
        printf("Inserisci l'elemento in posizione %d: ", i);
        scanf("%d", &V[i]);
    }

    /* Chiediamo il numero da cercare */
    printf("Inserisci il numero da cercare: ");
    scanf("%d", &n);

    /* Cerchiamo la prima occorrenza dell'elemento tramite un while */
    i = 0;
    while (i < MAX_N && V[i] != n){
        i++;
    }

    /* Siamo usciti dal while, significa che siamo arrivati alla fine dell'array oppure che abbiamo trovato il numero */
    if (i == MAX_N)
        printf("Elemento non trovato\n");
    else
        printf("Elemento trovato in posizione %d\n", i);
}
