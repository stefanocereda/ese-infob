#include <stdio.h>

#define N 10

void main(){
    char caratteri[N];
    char c;
    int n_inseriti, j;

    /* Chiediamo all'utente di inserire i caratteri desiderati, verranno terminati dal carattere 0 o dal limite
     * dell'array. Teniamo traccia del numero di caratteri inseriti tramite la variabile n_inseriti
     */
    n_inseriti = 0;
    scanf(" %c", &c);
    while(n_inseriti < N && c != '0'){
        caratteri[n_inseriti] = c;
        n_inseriti++;
        scanf(" %c", &c);
    }

    /* A questo punto n_inseriti mi indica quanti elementi validi considerare nell'array.
     * Uso la variabile j come contatore e n_inseriti come limite dell'array
     */
    j = 0;
    while(j < n_inseriti){
        if ((caratteri[j] >= 'a') && (caratteri[j] <= 'z'))
            caratteri[j] += 'A' - 'a';
        j++;
    }

    j = 0;
    while(j < n_inseriti){
        if (caratteri[j] == '.' ||
                caratteri[j] == ',' || 
                caratteri[j] == ':' || 
                caratteri[j] == ';' || 
                caratteri[j] == '?')
            caratteri[j] = ' ';
        j++;
    }

    j = 0;
    while(j < n_inseriti){
        printf("%c", caratteri[j]);
        j++;
    }
    printf("\n");
}
