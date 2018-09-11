/*  Data una matrice quadrata intera M, di dimensioni D × D, si
scriva il codice per calcolare e visualizzare la trasposta di M. */
#include <stdio.h>

#define D 3

int main(){
    int M1[D][D];
    int M2[D][D];
    int i,j;

    for (i = 0; i<D; i++){
        for (j = 0; j<D; j++){
            printf("Inserisci l'elemento nella posizione (%d,%d): ", i, j);
            scanf("%d", &M1[i][j]);
        }
    }

    for (i = 0; i < D; i++){
        for (j = 0; j < D; j++){
            M2[j][i] = M1[i][j];
        }
    }

    for (i = 0; i < D; i++){
        for (j = 0; j < D; j++){
            printf("%d\t", M2[i][j]);
        }
        printf("\n");
    }

}
