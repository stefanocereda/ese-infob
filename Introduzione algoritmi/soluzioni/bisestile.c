#include <stdio.h>

void main(){
    int anno;

    printf("Dimmi un anno: ");
    scanf("%d", &anno);

    if (anno % 4 == 0)
        if (anno % 100 == 0)
            if (anno % 400 == 0)
                printf("%d è un anno bisestile\n", anno);
            else
                printf("%d non è un anno bisestile\n", anno);
        else
            printf("%d è un anno bisestile\n", anno);
    else
        printf("%d non è un anno bisestile\n", anno);

    /* Le indentazioni sono inutili per il C, servono a noi
    * Questo è lo stesso codice, ma è incomprensibile*/
    if (anno % 4 == 0) if (anno % 100 == 0) if (anno % 400 == 0) printf("%d è un anno bisestile\n", anno); else printf("%d non è un anno bisestile\n", anno); else printf("%d è un anno bisestile\n", anno); else printf("%d non è un anno bisestile\n", anno);

    /* L'istruzione if controlla che la condizione nelle parentesi tonde sia vera,
     * ma il C rappresenta il vero/falso tramite dei numeri. In particolare, il valore
     * falso è rappresentato dal numero 0, mentre qualsiasi altro valore significa vero.
     * Questo può essere sfruttato per rendere le condizioni più compatte: (X == 0) è infatti
     * totalmente equivalente a (!X) */

    if (!(anno % 4))
        if (!(anno % 100))
            if (!(anno % 400))
                printf("%d è un anno bisestile\n", anno);
            else
                printf("%d non è un anno bisestile\n", anno);
        else
            printf("%d è un anno bisestile\n", anno);
    else
        printf("%d non è un anno bisestile\n", anno);
}
