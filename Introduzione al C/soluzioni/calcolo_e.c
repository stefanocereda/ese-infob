#include <stdio.h>

/* Se non avete ancora visto la define potete scrivere n < 20 nella condizione del primo while */
#define TERMINI 20

void main(){
    float e;
    int n, i, fat;

    n = 0;
    e = 0;
    while (n < TERMINI){
        /* calcolo del fattoriale di n */
        i = 1;
        fat = i;
        while (i <= n){
            fat = fat * i;
            i = i + 1;
        }

        printf("Il fattoriale di %d vale %d\n", n, fat);

        e = e + 1.0 / fat;
        printf("Al termine %d e vale %f\n", n, e);

        n = n+1;
    }
    
    printf("Dopo avere considerato %d termini, e vale %f\n", n-1, e);
}
