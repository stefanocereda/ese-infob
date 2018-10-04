#include <stdio.h>
#include <math.h> 

int main(){
    float num, max;
    float somma = 0;
    int i = 0;

    while (i < 5){
        printf("Inserisci numero: ");
        scanf("%f", &num);

        // max non è inizializzato!
        if ((num > max) || (i == 0)){
            max = num;
        }

        somma += num;
        i++;
    }

    printf("Massimo: %f\nMedia: %f\nRadice quadrata somma: %f\n",
            max, somma/i, sqrt(somma));

    /* per migliorare la leggibilità si può andare a capo.
     * Attenzione a scrivere sempre codice leggibile! */
}
