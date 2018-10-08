#include <stdio.h>

/* Scrivere un programma che, dopo aver ricevuto dall'utente due numeri interi ed un operatore matematico,
 * stampi il risultato dell'operazione. Le operazioni da supportare sono: addizione, sottrazione, divisione,
 * moltiplicazione e resto della divisione. Se l'utente inserisce un'operazione non supportata stampare un errore. */

/* Dovremo utilizzare una variabile per controllare
* eventuali errori. Per rappresentare una condizione di errore ci
* bastano tre valori (2 bit) (nessun errore, divisore=0, operatore
* sconosciuto).*/
typedef enum {ok, divisoreNullo, operatoreSconosciuto} controllo;
int main(){
    /* Dichiariamo le variabili per i due operandi, l'operatore ed il
     * risultato*/
    int x,y,ris;
    char op;

    /* Ad esercitazione abbiamo usato un int per lo stesso scopo*/
    controllo errore = ok;

    /* Leggiamo l'operatore e gli operandi */
    printf("Inserisci l'operatore: ");
    scanf("%c", &op);
    printf("Inserisci il primo numero: ");
    scanf("%d", &x);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &y);
    /* Cosa succede se leggo un carattere (l'operatore) dopo i caratteri?
     * Perché? */

    /* Eseguiamo l'operazione */
    if (op == '+')
        ris = x+y;
    else if (op == '-')
        ris = x-y;
    else if (op == '*')
        ris = x*y;
    else if (op == '/')
        /* Devo controllare che y sia diverso da zero*/
        if (y != 0)
            ris = x/y;
        else
            errore = divisoreNullo;
    else if (op == '%')
        if (y != 0)
            ris = x%y;
        else
            errore = divisoreNullo;
    else
        /*Operatore sconosciuto: usiamo un diverso valore di errore*/
        errore = operatoreSconosciuto;

    // stampiamo il risultato
    if (!errore){
        printf("%d%c%d = %d\n", x, op, y, ris);
    }else if (errore == divisoreNullo)
        printf("Errore: il divisore deve essere diverso da 0.\n");
    else
        printf("Errore: operazione non supportata.\n");
}
