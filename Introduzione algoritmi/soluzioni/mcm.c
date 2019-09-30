/*
Scrivere un programma che, ricevuti in ingresso due numeri a e b, ne calcoli e visualizzi il minimo comune multiplo.
Si assuma che a e b siano sempre positivi.
Si ricorda che il minimo comune multiplo è definito come il più piccolo intero positivo multiplo sia di a che di b.
*/

#include <stdio.h>

void main(){
    int a,b;
    int mulA, mulB;

    printf("Inserisci due numeri interi: ");
    scanf("%d%d", &a, &b);

    /* Generiamo le liste dei multipli di a e b e fermiamoci al primo multiplo comune.
       Esempio con 4 e 6:
       4    8   12  16  ...
       6    12  18  24  ...
       12 è il primo numero ad apparire in entrambe le liste.

       Possiamo generare le due liste in modo alternato, considerando ad ogni passaggio quella inferiore e fermandoci quando troviamo un numero uguale:
       4    8   8   12
       6    6   12  12
    */

    mulA = a;
    mulB = b;
    while (mulA != mulB){
        if (mulA < mulB){
            mulA = mulA + a;
        }
        else{
            mulB = mulB + b;
        }
    }

    printf("Il minimo comune multiplo di %d e %d vale %d.\n", a, b, mulA);
}
