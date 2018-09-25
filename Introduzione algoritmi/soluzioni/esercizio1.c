#include <stdio.h>

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
