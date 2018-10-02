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
