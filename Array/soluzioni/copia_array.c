/*
Scrivere un programma che, ricevuto un array A di interi (con lunghezza nota N), copi il valore assoluto di ogni elemento di A in un nuovo array B. 
*/

#include <stdio.h>

#define N 10

void main(){
    int A[N], B[N];
    int i;

    i=0;
    while (i < N){
        printf("Inserisci un numero: ");
        scanf("%d", &A[i]);
        i++;
    }

    i=0;
    while (i < N){
        if (A[i] < 0)
            B[i] = -A[i];
        else
            B[i] = A[i];
        i++;
    }

    printf("Ecco l'array in valore assoluto:\n");
    i=0;
    while (i < N){
        printf(" %d", B[i]);
        i++;
    }
    printf("\n");
}
