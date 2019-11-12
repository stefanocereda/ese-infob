#include <stdio.h>

void main(){
    int num, base;
    int mul, ris;

    printf("Dimmi un numero e la sua base: ");
    scanf("%d%d", &num , &base);
    /* Modificate il programma per controllare che il numero sia coerente con la base */

    mul = 1;
    ris = 0;
    while (num > 0){
        /* Considero la cifra meno significativa (n%10) e la moltiplico per base^esponente (valore che salviamo in mul) */
        ris += (num % 10) * mul;

        /* Calcoliamo il prossimo moltiplicatore e togliamo la cifra considerata */
        num = num / 10;
        mul *= base;
    }

    printf("Il numero vale %d in base 10\n", ris);
}
