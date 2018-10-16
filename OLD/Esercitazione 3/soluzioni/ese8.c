#include <stdio.h>
#define N 10

int main(){
    int A[N];
    int B[N];
    int i;

    // LETTURA
    for (i=0; i<N; i++){
        printf("Inserisci il prossimo numero: ");
        scanf("%d", &A[i]);
    }

    // COPIA
    for (i=0; i<N; i++)
        B[i] = A[i]*A[i];

    // VISUALIZZAZIONE
    for (i=0; i<N; i++)
        printf("%d\t->\t%d\n", A[i], B[i]);
}


int main(){
    int A[N];
    int B[N];
    int i = 0;

    for (i=0; i<N; i++){
        printf("Inserisci il prossimo numero: ");
        scanf("%d", &A[i]);
        B[i] = A[i]*A[i];
    }
        
    for (i=0; i<N; i++)
        printf("%d\t->\t%d\n", A[i], B[i]);
}
