#include <stdio.h>

void main(){
    int nb, nd, div, pot, cifra;

    printf("Inserisci un numero in base 2: ");
    scanf("%d", &nb);

    /* Inizializziamo a zero il numero decimale */
    nd = 0;

    /* Prendiamo una ad una le cifre del numero binario, partendo dalla minore. Per fare ciò possiamo utilizzare gli
     * operatori di divisione e modulo */
    div = 1;
    pot = 1;

    /* Fino a che abbiamo cifre da considerare */
    while (nb / div > 0){
        /* Scarto le cifre già considerate */
        cifra = nb / div;
        printf("%d\n", cifra);
        /* e quelle che guarderemo dopo */
        cifra = cifra % 10;

        printf("%d %d\n", cifra, div);

        /* Consideriamo il valore della cifra attuale */
        nd = nd + cifra * pot;

        /* E passiamo alla potenza successiva */
        div = div * 10;
        pot = pot * 2;
    }

    printf("Il numero binario %d vale %d in base dieci.\n", nb, nd);
}
