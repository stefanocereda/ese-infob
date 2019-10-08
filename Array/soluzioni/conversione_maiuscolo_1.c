#include <stdio.h>

/*
   Caratteri = numeri, supponiamo di volere trasformare 'A' in 'a':
   'a' = 'A' + ('a' - 'A') (ovvio)
    dunque la formula da usare sarà:
    minuscolo = maiuscolo + ('a' - 'A')
*/
#define distanza 'a' - 'A'

void main(){
    char c;

    printf("minuscolo = maiuscolo + %d\n", distanza);

    scanf(" %c", &c);
    while (c != '0'){
        if (c >= 'A' && c <= 'Z'){
            c = c + distanza;
        }
        printf("%c\n", c);

        scanf(" %c", &c);
    }
}
