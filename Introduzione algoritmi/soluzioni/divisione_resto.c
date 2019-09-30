#include <stdio.h>

/* 	Scrivere un programma che, ricevuti in ingresso due numeri a e b, stampi il risultato della divisione a/b ed il relativo resto.
	Se l'operazione non è possibile, il programma termina senza stampare alcun messaggio.
	Utilizzare l'operatore modulo % per calcolare il resto della divisione.
*/

void main(){
    int a,b;

    printf("Inserisci due numeri: ");
    scanf("%d", &a);
    scanf("%d", &b);

    if (b != 0){
        /* Il simbolo / ritorna la parte intera della divisione (quando usato fra interi)
         * % ritorna il resto */
        printf("Div e mod sono: %d %d\n", a/b, a%b);
    }
}
