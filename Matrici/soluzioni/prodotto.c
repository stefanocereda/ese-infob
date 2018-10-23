/* Date due matrici intere A, B si scriva un programma che ne calcoli
il prodotto C = A × B */

#include <stdio.h>

/* Non è necessario che la seconda matrice abbia N1 colonne */
#define N1 3
#define N2 2

int main(){
    int A[N1][N2];
    int B[N2][N1];

    int C[N1][N1];

    int i, j, k;

    for (i = 0; i<N1; i++){
        for (j = 0; j<N2; j++){
            printf("Inserisci l'elemento nella posizione (%d,%d) della matrice A: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i<N2; i++){
        for (j = 0; j<N1; j++){
            printf("Inserisci l'elemento nella posizione (%d,%d) della matrice B: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    /* Stampiamole */
    printf("A vale:\n");
    for (i = 0; i < N1; i++){
        for (j = 0; j < N2; j++){
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("B vale:\n");
    for (i = 0; i < N2; i++){
        for (j = 0; j < N1; j++){
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }


    /* Calcolo il prodotto */
    for (i = 0; i < N1; i++){
        for (j = 0; j < N1; j++){
            C[i][j] = 0;
            /* devo calcolare C[i][j] */
            for (k = 0; k < N2; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Il risultato vale:\n");
    for (i = 0; i < N1; i++){
        for (j = 0; j < N1; j++){
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

}
