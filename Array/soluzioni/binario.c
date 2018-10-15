#include <stdio.h>

#define N 10
#define MAX_NUM 1024

void main(){
    int num;
    int bin[N];
    int i;

    printf("Inserisci un numero minore di %d: ", MAX_NUM);
    scanf("%d", &num);

    while(num >= MAX_NUM){
        printf("Ho detto minore di %d! Riprova: ", MAX_NUM);
        scanf("%d", &num);
    }

    i = N-1;
    while (i >= 0){
        if (num > 0){
            bin[i] = num % 2;
            num /= 2;
        }
        else
            bin[i]=0;
        i--;
    }

    i = 0;
    while(i<N){
        printf("%d", bin[i]);
        i++;
    }
    printf("\n");
}

