/*  Scrivere un programma che riceva un numero noto N = R · C di
interi e li salvi in una matrice M di dimensioni note R × C . */
#include <stdio.h>

#define R 3
#define C 2

typedef int matrice[R][C];

int main(){
    matrice M;
    int i,j;

    for (i = 0; i<R; i++){
        for (j = 0; j<C; j++){
            printf("Inserisci l'elemento nella posizione (%d,%d): ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    for (i = 0; i < R; i++){
        for (j = 0; j < C; j++){
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }

}
