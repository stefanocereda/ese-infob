#include <stdio.h>

#define N 5

typedef int matrice[N][N];

void main(){
    matrice ide;
    int i, j;
    
    /* Perchè questa versione è sbagliata?
     * for (i=0; i<N; i++)
     *    ide[i][j] = 1;
     */
    
    for (i=0; i<N; i++)
        for (j=0; j<N; j++)
            if (i==j)
                ide[i][j] = 1;
            else
                ide[i][j] = 0;
            
    for (i=0; i<N; i++){
        for (j=0; j<N; j++)
            printf("%d\t", ide[i][j]);
        printf("\n");
    }
}
