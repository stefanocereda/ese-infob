/* Dato un vettore ordinato di interi V ed un numero n, si scriva la
porzione di codice per implementare un algoritmo di ricerca e
stampare l’indice del primo elemento di V uguale ad n.
Si modifichi il programma per trovare più occorrenze dello stesso
numero (stampandone tutti gli indici).
 */
#include <stdio.h>
#define MAX_N 10

typedef int array[MAX_N];
typedef enum {true, false} bool;
int main(){
    array V;
    int n, i;
    bool trovato = false;

    /* Leggo il vettore */
    i = 0;
    while (i < MAX_N){
        printf("Inserisci l'elemento nella posizione %d: ", i);
        scanf("%d", &V[i]);
        i++;
    }

    /* Leggo l'elemento da cercare */
    printf("Inserisci l'elemento da cercare: ");
    scanf("%d", &n);

    /* Cerco e stampo*/
    i = 0;
    while (i < MAX_N){
        if (V[i] == n){
            trovato = true;
            printf("L'elemento cercato si trova all'indice %d\n", i);
        }
        i++;
    }

    if (trovato == false)
        printf("L'elemento non è presente\n");
}

