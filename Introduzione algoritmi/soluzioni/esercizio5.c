/*
 Scrivere un programma che, ricevuto in ingresso un numero n, dica se questo è un numero primo oppure no.
 Si assuma che n sia sempre un numero positivo maggiore di 1.
*/

#include <stdio.h>

void main(){
    int n, d, primo;

    printf("Inserisci un numero intero: ");
    scanf("%d", &n);

    /* Usiamo una variabile intera primo per indicare se il numero è primo oppure no.
     * La variabile sarà una variabile sentinella, ovvero verrà usata per indicata se una condizione è verificata o
     * meno.
     * In C, valori diversi da 0 hanno significato vero.
     */
    primo = 1;

    /* d è la variabile divisore che usiamo per controllare se n è primo */
    d = 2;
    /* cicliamo per tutti i possibili divisori fino a quando non troviamo un divisore */
    while (primo==1 && d < n/2){
        if (n % d == 0){
            primo = 0;
        }
        d = d+1;
    }
     /* Provate a modificare il codice facendo in modo di non provare tutti i divisori pari ma solo il 2 */

    /* if (primo == 1) è equivalente a if(primo) */
    if (primo){
        printf("Il numero è primo.\n");
    }
    else{
        printf("Il numero non è primo.\n");
        /* Provate a modificare il codice per mostrare quale divisore avete trovato. */
    }

}
