/* Vediamo alcune funzioni definite in string.h */
#include <stdio.h>
#include <string.h>

/* Una stringa è un array di caratteri, dobbiamo quindi definirla propriamente*/
#define MAX_LEN 10
typedef char str[MAX_LEN];

int main(){
    /* Definiamo due stringhe ed un carattere che useremo per gli esempi */
    str str1, str2;
    char c;
    /* e un intero che useremo per esempi */
    int n;

    /* Chiediamo i dati all'utente */
    printf("Inserisci una stringa:\n");
    scanf("%s", str1); /* Attenzione: con le stringhe non serve il & */

    printf("Inserisci un'altra stringa:\n");
    scanf("%s", str2);

    printf("Inserisci un carattere:\n");
    scanf(" %c", &c); /* Notare lo spazio prima di % */


    /* Ripetiamole */
    printf("\nHai inserito '%s' '%s' e '%c'\n\n", str1, str2, c);


    /* STRLEN ci da la lunghezza di una stringa */
    printf("'%s' è lunga %d caratteri\n'%s' è lunga %d caratteri\n\n", str1, strlen(str1), str2, strlen(str2));


    /* STRCMP consente di confrontare stringhe */
    n = strcmp(str1, str2);
    if (n < 0){
        printf("'%s' precede lessicograficamente '%s'\n\n", str1, str2);
    }
    else if (n > 0){
        printf("'%s' precede lessicograficamente '%s'\n\n", str2, str1);
    }
    else{
        printf("'%s' è uguale a '%s'\n\n", str2, str1);
    }


    /* STRCHR cerca un carattere in una stringa */
    printf("Cercando %c in '%s' ottengo la seguente sottostringa: '%s'\n\n", c, str1, strchr(str1, c));


    /* STRSTR cerca una stringa in una stringa */
    printf("Cercando '%s' in '%s' ottengo la seguente sottostringa: '%s'\n\n", str1, str2, strstr(str2, str1));


    /* STRCAT concatena due stringhe, salvando il risultato nella prima */
    printf("La concatenazione di '%s' e '%s' è ", str1, str2);
    printf("'%s'\n", strcat(str1, str2));
    printf("La concatenazione ci ha fatto perdere la prima stringa, che ora vale '%s'\n", str1);
    printf("La seconda vale '%s'\n\n", str2);


    /* STRCPY copia una stringa in un'altra*/
    printf("\nstr1 vale '%s' e str2 vale '%s'\n", str1, str2);
    printf("Copio str1 in str2\n");
    strcpy(str2, str1);
    printf("str1 vale '%s' e str2 vale '%s'\n", str1, str2);

}
