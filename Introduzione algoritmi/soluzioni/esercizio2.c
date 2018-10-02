#include <stdio.h>

/* Scrivere un programma che, ricevuto in ingresso un numero positivo n, lo stampi in binario. Si utilizzi il metodo delle divisioni ripetute.
Per semplificare, si stampi separatamente ogni cifra del resto. Si stampi inoltre il risultato in ordine inverso. */

void main(){
    unsigned int n;

    printf("Inserisci un numero positivo da convertire in binario: ");
    scanf("%u", &n);
    printf("Il numero %u convertito in binario (al contrario), vale:\n", n);

    while (n>0){
        printf("%d", n%2);
        n = n / 2;
    }

    printf("\n");
}

