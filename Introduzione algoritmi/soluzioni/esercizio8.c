/* Scrivere lo pseudocodice per eseguire la moltiplicazione di numeri negativi tramite somme ripetute. */

/* Includiamo stdlib per la funzione abs */
#include <stdio.h>
#include <stdlib.h> 

void main(){
    int op1, op2, num, min, ris;

    printf("Inserisci due numeri interi: ");
    scanf("%d%d", &op1, &op2);

    if (abs(op1) < abs(op2)){
        num = abs(op2);
        min = abs(op1);
    }
    else{
        num = abs(op1);
        min = abs(op2);
    }

    if ((op1 < 0 && op2 >= 0) || (op1 >= 0 && op2 < 0)){
        num = -num;
    }

    ris = 0;
    while (min > 0){
        ris = ris + num;
        min = min - 1;
    }

    printf("Il prodotto di %d e %d vale %d\n", op1, op2, ris);
}

