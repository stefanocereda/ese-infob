#include <stdio.h>

#define R 2
#define C 3


void main(){
    int A[R][C], B[R][C];
    int i, j;
    
    for (i=0; i<R; i++)
        for (j=0; j<C; j++)
            scanf("%d", &A[i][j]);
    
    for (i=0; i<R; i++)
        for (j=0; j<C; j++)
            if (A[i][j] >= 0)
                B[i][j] = A[i][j];
            else
                B[i][j] = -A[i][j];
            
    for (i=0; i<R; i++){
        for (j=0; j<C; j++)
            printf("%d\t", B[i][j]);
        printf("\n");
    }
}
