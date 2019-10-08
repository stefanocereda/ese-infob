/*
Scrivere un programma che, ricevuto un array A di interi (con lunghezza nota N), copi il valore assoluto di ogni elemento di A in un nuovo array B.
*/

#include <stdio.h>

#define N 10
typedef int vettore[N];

void main(){
    int A[N];
    vettore B;
    /* A e B sono entrambi due array interi di lunghezza N */
    int i;

    i=0;
    while (i < N){
        printf("Inserisci un numero: ");
        scanf("%d", &A[i]);
        i++;
    }

    /* Lo stesso ciclo di lettura può essere realizzato con un for
    for (i=0; i<N; i++){
        printf("Inserisci un numero: ");
        scanf("%d", &A[i]);
    }
    */

    i=0;
    while (i < N){
        if (A[i] < 0)
            B[i] = -A[i];
        else
            B[i] = A[i];
        i++;
    }

    /* Con il for
    for (i=0; i<N; i++){
        if (A[i] < 0)
            B[i] = -A[i];
        else
            B[i] = A[i];
    }
    */

    printf("Ecco l'array in valore assoluto:\n");
    i=0;
    while (i < N){
        printf(" %d", B[i]);
        i++;
    }
    printf("\n");


    /* Con un for
    for (i=0; i<N; i++)
        printf(" %d", B[i]);
    printf("\n");
    */
}
