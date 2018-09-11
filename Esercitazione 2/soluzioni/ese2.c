/* Scrivere un programma che legga da tastiera 5 numeri e stampi a video il maggiore, la media, e la radice quadrata
 * della somma.*/
#include <stdio.h>
#include <math.h>

/* Questo esercizio è particolarmente scomodo da risolvere senza utilizzare il costrutto while */
int main(){
    /* Utilizziamo numeri in virgola mobile*/
    float n1,n2,n3,n4,n5;
    float max, somma;

    printf("Inserisci 5 numeri:\n");
    scanf("%f%f%f%f%f", &n1, &n2, &n3, &n4, &n5);

    if ((n1 >= n2) && (n1 >= n3) && (n1 >= n4) && (n1 >= n5))
        max = n1;
    else if ((n2 >= n1) && (n2 >= n3) && (n2 >= n4) && (n2 >= n5))
        max = n2;
    else if ((n3 >= n1) && (n3 >= n2) && (n3 >= n4) && (n3 >= n5))
        max = n3;
    else if ((n4 >= n1) && (n4 >= n2) && (n4 >= n3) && (n4 >= n5))
        max = n4;
    else if ((n5 >= n1) && (n5 >= n2) && (n5 >= n3) && (n5 >= n4))
        max = n5;
    /* Non serve un caso else */

    somma = n1+n2+n3+n4+n5;

    printf("Il massimo è %f\n", max);
    printf("La media è %f\n", somma/5);
    printf("La radice quadrata della somma è %f\n", sqrt(somma));
}
