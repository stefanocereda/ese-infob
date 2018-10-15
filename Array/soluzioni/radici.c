#include <stdio.h>
#include <math.h>

#define N 10

void main(){
    float radici[N];
    float num;
    int i;

    i=0;
    while (i < N){
        printf("Inserisci un numero positivo: ");
        scanf("%f", &num);

        while (num < 0){
            printf("Deve essere positivo! Riprova: ");
            scanf("%f", &num);
        }

        radici[i] = sqrt(num);
        i++;
    }

    i = 0;
    while (i < N){
        printf("%f ", radici[i]);
        i++;
    }
    printf("\n");
}
