/*  Data una matrice quadrata intera M, di dimensioni D × D, si
scriva il codice per calcolare e visualizzare la trasposta di M. */
#include <stdio.h>

#define R 2
#define C 3


int main(){
    int A[R][C];
    int i,j;

    for (i = 0; i<R; i++){
        for (j = 0; j<C; j++){
            printf("Inserisci l'elemento nella posizione (%d,%d): ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    for (j = 0; j < C; j++){
        for (i = R-1; i >= 0; i--){
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

}
