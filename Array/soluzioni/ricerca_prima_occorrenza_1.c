/* Dato un vettore ordinato di interi V ed un numero n, si scriva la
porzione di codice per implementare un algoritmo di ricerca e
stampare l’indice del primo elemento di V uguale ad n.
Si modifichi il programma per trovare più occorrenze dello stesso
numero (stampandone tutti gli indici).
 */
#include <stdio.h>
#define MAX_N 10

typedef int array[MAX_N];
typedef enum {false, true} bool;
/* nel dichiarare le enum booleane ricordativi di mettere come primo valore false */

void main(){
    array V;
    int n, i;
    bool trovato = false;

    /* Leggo il vettore */
    for (i=0; i < MAX_N; i++){
        printf("Inserisci l'elemento nella posizione %d: ", i);
        scanf("%d", &V[i]);
    }

    /* Leggo l'elemento da cercare */
    printf("Inserisci l'elemento da cercare: ");
    scanf("%d", &n);

    /* Cerco e stampo SOLO LA PRIMA */
    i = 0;
    while (i < MAX_N && !trovato)
    {
        if (V[i] == n){
            trovato = true;
            printf("L'elemento cercato si trova per la prima volta all'indice %d\n", i);
        }
        i++;
    }
    if (trovato == false)
        printf("L'elemento non è presente\n");

    /* Cerco e stampo tutte le occorrenze */
    for (i=0, trovato=false; i < MAX_N; i++){
        if (V[i] == n){
            trovato = true;
            printf("L'elemento cercato si trova all'indice %d\n", i);
        }
    }
    if (trovato == false)
        printf("L'elemento non è presente\n");
}

