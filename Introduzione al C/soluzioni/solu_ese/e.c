#include <stdio.h>

void main(){
    float e;
    int n, i, fat;

    n = 0;
    e = 0;
    while (n < 20){
        i = 1;
        fat = i;
        while (i <= n){
            fat = fat * n;
            i = i + 1;
        }

        printf("Il fattoriale di %d vale %d\n", n, fat);

        e = e + 1.0/fat;

        printf("Al termine %d, e vale %f\n", n, e);

        n = n+1;
    }
}

