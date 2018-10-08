#include <stdio.h>


void main(){
    int x, y;
    int ris;
    char op;
    int errore = 0; /* 0 = nessun errore, 1=operatore sconosciuto , 2=divisore nullo*/



    printf("Che operazione vuoi fare?\n");
    scanf("%c", &op);
    printf("Inserisci due numeri interi: ");
    scanf("%d%d", &x, &y);

    if (op == '+'){
        ris = x + y;
    }
    else if (op == '-'){
        ris = x - y;
    }
    else if (op == '*')
        ris = x * y;
    else if (op == '/')
        if (y != 0)
            ris = x / y;
        else
            errore = 2;
    else if (op == '%')
        if (y != 0)
            ris = x % y;
        else
            errore = 2;
    else {
        printf("Non conosco questo operatore.\n");
        errore = 1;
    }

    if (errore == 0){
        printf("%d%c%d=%d\n", x, op, y, ris);
    }
    else if (errore == 2){
        printf("Il divisore è nullo\n");
    }
}
