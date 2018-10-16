#include <stdio.h>
#define N 10

int main(){
    int A[N];
    int B[N];
    int i;

    // LETTURA
    i = 0;
    while(i < N){
        printf("Inserisci il prossimo numero: ");
        scanf("%d", &A[i]);
        i++;
    }

    // COPIA
    i = 0;
    while (i < N){
        if (A[i] < 0)
            B[i] = -A[i];
        else
            B[i] = A[i];
        i++;
    }

    // VISUALIZZAZIONE
    i = 0;
    while (i <  N){
        printf("%d\t->\t%d\n", A[i], B[i]);
        i++;
    }
}

