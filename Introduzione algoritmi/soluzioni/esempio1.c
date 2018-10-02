/* Praticamente ogni programma inizierà con una include */
#include <stdio.h>

/* Il nostro codice sarà dentro il blocco definito da void main()*/
/* Il vostro compilatore potrebbe richiedere int main(), generando un warning con void main.*/
void main(){
    /* Dichiaro due variabili intere a,b senza inizializzarle*/
    int a,b;
    /* Modalità equivalenti:
     * int a;
     * int b;
     *
     * int a; int b; (brutta) */

    /*Errore di sintassi:
     * int a,b 
     * manca il punto e virgola */

    /* Leggo i due interi*/
    scanf("%d", &a);
    scanf("%d", &b);

    /* Errore di sintassi: singolo apice. Il compilatore vi darà semplicemente un warning invece di un errore, attenzione!
     * scanf('%d', &a);
     * Il singolo apice serve per i singoli caratteri, il doppio apice per le stringhe. */

    /* Modalità equivalenti:
     * scanf("%d%d", &a, &b); (meglio evitarla, darà problemi con i caratteri*/

    /* Errore logico:
     * scanf("%d", a);
     * manca il & */

    /* Possiamo ora controllare quale numero è minore*/
    /* La condizione dell'if va fra parentesi tonde*/
    if (a < b){
        /* Il corpo dell'if va indentato anche se in C non sarebbe necessario*/
        /* Inoltre lo racchiudiamo fra parentesi graffe (non necessario per istruzioni singole)*/

        /*Stampiamo i valori nell'ordine corretto*/
        printf("%d %d\n", a, b);
    }
    else{
        /*Nel corpo dell'else mettiamo il codice da eseguire quando la condizione fra parentesi tonde è falsa*/
        printf("%d %d\n", b, a);

        /* Possiamo essere più espliciti
        * printf("Ecco i numeri in ordine: %d è il piu piccolo e %d è il più grande\n", b, a); */
    }
}
