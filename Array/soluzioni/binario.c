#include <stdio.h>

#define N 10
#define MAX_NUM 1024

void main(){
    int num;
    int bin[N];
    int i;

    /* Chiedo all'utente di inserire un numero da convertire */
    printf("Inserisci un numero minore di %d: ", MAX_NUM);
    scanf("%d", &num);

    /* Se il numero è troppo elevato continuo a richiederlo */
    while(num >= MAX_NUM){
        printf("Ho detto minore di %d! Riprova: ", MAX_NUM);
        scanf("%d", &num);
    }


    /* Usiamo l'algoritmo delle divisioni ripetute.
     * i controlla il bit che stiamo considerando
     */
    i = 0;
    while (i >= 0){
        bin[i] = num % 2;
        num /= 2;
        i++;
    }
    /* Al termine del while, i sarà uguale al numero di bit utilizzati.
     * A questo punto dobbiamo stampare l'array bin e dobbiamo stamparlo in senso contrario.
     * Se abbiamo inserito (i) bit, dunque dovremo partire dalla posizione (i-1) e proseguire fino a zero.
     */

    i = i-1;
    while(i>=0){
        printf("%d", bin[i]);
        i--;
    }
    printf("\n");
}

