#include <stdio.h>

void main(){
    int num, cifra, somma=0;

    printf("Inserisci un numero: ");
    scanf("%d", &num);

    while (num > 0){
        cifra = num % 10;
        num = num / 10;

        printf("Considero la cifra %d, rimane %d\n", cifra, num);
        somma += cifra; /* a+=b equivale ad a=a+b */
    }

    if (somma % 3 == 0) /* equivalente a if (!(somma % 3)) */
        printf("Il numero è divisibile per 3\n");
    else
        printf("Il numero non è divisibile per 3\n");


    /* Facciamo una seconda versione in cui si richiede di controllare la divisibilità della somma tramite lo stesso algoritmo, fino a quando si arriva ad una somma con una singola cifra */
    int num_inserito, num_controllo;
    printf("Inserisci un numero: ");
    scanf("%d", &num_inserito);

    num_controllo = num_inserito;
    while (num_controllo > 9){
        printf("Controllo %d\n", num_controllo);
        somma = 0;
        while (num_controllo > 0){
            cifra = num_controllo % 10;
            num_controllo = num_controllo / 10;

            printf("Considero la cifra %d, rimane %d\n", cifra, num_controllo);
            somma += cifra; /* a+=b equivale ad a=a+b */
        }
        num_controllo = somma;
    }

    if (somma % 3 == 0) /* o if (num_controllo % 3 == 0) */
        printf("Il numero è divisibile per 3\n");
    else
        printf("Il numero non è divisibile per 3\n");
}

