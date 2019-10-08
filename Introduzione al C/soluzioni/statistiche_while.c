#include <stdio.h>
#include <math.h>

int main(){
    float somma;
    int num, inseriti, max;

    /* Inizializzazione */
    somma = 0;
    inseriti = 0;

    /* Chiediamo il primo numero ed entriamo nel ciclo */
    printf("Inserisci numero: ");
    scanf("%d", &num);
    max = num;
    while (num != 0){
        if (num > max)
            max = num;
        somma = somma + num;
        inseriti = inseriti + 1;
        printf("Inserisci numero: ");
        scanf("%d", &num);
    }

    /* Cosa farebbe questa versione?
       printf("Inserisci numero: ");
       scanf("%d", &num);
       max = num;
       somma = num;
       inseriti = 1;
       while (num != 0){
           printf("Inserisci numero: ");
           scanf("%d", &num);

           if (num > max)
               max = num;
           somma = somma + num;
           inseriti = inseriti + 1;
       }
       */


    printf("Massimo: %d\nMedia: %f\nRadice quadrata somma: %f\n",
            max, somma/inseriti, sqrt(somma));

    /* per migliorare la leggibilità si può andare a capo.
     * Attenzione a scrivere sempre codice leggibile! */
}
