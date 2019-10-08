#include <stdio.h>
#include <math.h>

#define N 10
typedef float array[N];

void main(){
    array radici;
    float num;
    int i;

    for (i=0; i < N; i++){
        printf("Inserisci un numero positivo: ");
        scanf("%f", &num);

        while (num < 0){
            printf("Deve essere positivo! Riprova: ");
            scanf("%f", &num);
        }

        radici[i] = sqrt(num);
    }

    for (i = 0; i < N; i++){
        printf("%f ", radici[i]);
    }
    printf("\n");
}
