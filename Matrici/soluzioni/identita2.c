#include <stdio.h>

#define N 5

typedef int matrice[N][N];

void main(){
    matrice ide;
    int n, i, j;
    
    n = 0;
    while(n <= 0 || n >= N){
        printf("inserisci numero righe e colonne: ");
        scanf("%d", &n);
    }
    
    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
            if (i==j)
                ide[i][j] = 1;
            else
                ide[i][j] = 0;
            
    for (i=0; i<n; i++){
        for (j=0; j<n; j++)
            printf("%d\t", ide[i][j]);
        printf("\n");
    }
}
