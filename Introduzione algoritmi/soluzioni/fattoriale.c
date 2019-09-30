/*
 * Scrivere un programma che, ricevuto in ingresso un numero n, ne calcoli e visualizzi il fattoriale.
 * Si assuma che l'utente non inserisca mai numeri minori di 1.
 * Si ricorda che il fattoriale di n è definito come il prodotto di tutti i numeri fra n ed 1
*/

#include <stdio.h>

void main(){
    int n, i, ris;

    printf("Inserisci un numero positivo: ");
    scanf("%d", &n);

    /* Calcoliamo il fattoriale in modo iterativo:
       utilizziamo una variabile accumulatore (ris) dove calcolare i prodotti parziali
       ed una variabile contatore (i) che tiene traccia di quante iterazioni abbiamo eseguito.
       Ad ogni iterazione, la variabile accumulatore verrà moltiplicata per il contatore.
       */

    i=1;
    ris=1;
    while(i < n){
        i = i+1;
        ris = ris * i;
    }

    printf("Il fattoriale di %d vale %d\n", n, ris);
}
