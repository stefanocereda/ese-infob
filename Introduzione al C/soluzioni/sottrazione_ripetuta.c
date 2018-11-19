/* Si scriva un programma che legga da tastiera un numero intero \emph{n}, lo riduca ad un valore compreso fra 0 e 127
 * \emph{mediante sottrazione ripetuta} del valore 128, lo interpreti come carattere ASCII e lo stampi sul video. */
#include <stdio.h>

int main(){
    int n = -1;
    
    while (n < 0){
        printf("Inserisci n positivo: ");
        scanf("%d", &n);
    }

    while (n > 127)
        n -= 128;

    printf("%c\n", n);
}
