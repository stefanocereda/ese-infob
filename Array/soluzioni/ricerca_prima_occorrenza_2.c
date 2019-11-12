/* Dato un vettore ordinato di interi V ed un numero n, si scriva la
porzione di codice per implementare un algoritmo di ricerca e
stampare l’indice del primo elemento di V uguale ad n. (Esempio 1)
Si modifichi il programma per trovare più occorrenze dello stesso
numero (stampandone tutti gli indici).
Si modifichi il programma per creare un secondo array V2 in cui
inserire gli indici delle occorrenze (quelli stampati al punto
precedente). Si presti attenzione a non lasciare buchi in V2 . Al
termine si stampi V2 .
 */


#include <stdio.h>
#define MAX_N 10

typedef int array[MAX_N];

int main(){
    array V, V2;
    int n, i, j;

    /* Leggo il vettore */
    for (i=0; i<MAX_N; i++){
        printf("Inserisci l'elemento nella posizione con indice %d: ", i);
        scanf("%d", &V[i]);
    }

    /* Leggo l'elemento da cercare */
    printf("Inserisci l'elemento da cercare: ");
    scanf("%d", &n);

    /* Cerco l'elemento ed utilizzo un secondo indice per salvarne la posizione in V2 senza lasciare buchi */
    for (i=0, j=0; i < MAX_N; i++){
        if (V[i] == n){
            V2[j] = i;
            j++;
        }
    }

    /* Stampo. Abbiamo visto come j possa essere usato per terminare la scansione di V2 al punto esatto */
    for (i = 0; i < j; i++){
        printf("%d ", V2[i]);
    }
    printf("\n");

}
