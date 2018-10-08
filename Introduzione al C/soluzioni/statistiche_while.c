#include <stdio.h>
#include <math.h> 

int main(){
    float num, max, somma;
    int inseriti;

    /* Chiediamo il primo numero ed inizialiazziamo le variabili */
    printf("Inserisci numero: ");
    scanf("%f", &num);
    max = num;
    somma = num;
    inseriti = 1;

    while (num != 0){
        printf("Inserisci numero: ");
        scanf("%f", &num);

        if (num > max)
            max = num;
        somma = somma + num;
        inseriti = inseriti + 1;
    }

    printf("Massimo: %f\nMedia: %f\nRadice quadrata somma: %f\n",
            max, somma/inseriti, sqrt(somma));

    /* per migliorare la leggibilità si può andare a capo.
     * Attenzione a scrivere sempre codice leggibile! */
}
