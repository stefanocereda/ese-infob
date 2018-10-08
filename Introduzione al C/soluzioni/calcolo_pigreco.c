/*
 * Scrivere un programma che calcoli il valore di pigreco usando la serie:
 * pi = 4 -4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...
 *
 * Visualizzare una tabella che mostri il valore della tabella dopo aver considerato 10, 20, 30, ... termini, arrestando il conto al termine 500.
*/

#include <stdio.h>

/* Se non avete ancora visto la define potete scrivere n < 500 nella condizione del while */ 
#define MAXITER 500

void main(){
    /* inizializziamo i valori considerando già il primo termine */
    int n=1;
    float pi=4;

    while(n < MAXITER){
        n += 1;
        if (n % 2 == 0)
            pi = pi - 4.0 / (2*n - 1);
            /* Cosa sarebbe successo se avessimo scritto solo 4 invece di 4.0? */
        else
            pi = pi + 4.0 / (2*n - 1);

        if (n % 10 == 0)
            printf("%d\t%f\n", n, pi);
    }
}

