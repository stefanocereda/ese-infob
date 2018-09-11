#include <stdio.h>
#include <math.h>

#define N 5

typedef enum{false, true} bool;

int main(){
    int tartaglia[N][N];
    int i,j;
    int somma;
    bool giusta;
   
    /* Leggiamo la porzione triangolare inferiore di una matrice NxN*/
    for (i=0; i<N; i++){
        for (j=0; j<=i; j++){
            printf("Inserisci elemento in posizione %d %d: ", i, j);
            scanf("%d", &tartaglia[i][j]);
        }
    }
    
    /* E stampiamola */
    for (i=0; i <N; i++){
        for (j=0; j <= i; j++){
            printf("%d\t", tartaglia[i][j]);
        }
        printf("\n");
    }
    
    
    /* Controlliamo se la somma di ogni riga è corretta */
    giusta = true;
    for (i=0; i < N; i++){
        somma=0;
        /* sommo solo fino alla diagonale (inclusa) */
        for (j=0; j <= i; j++){
            somma += tartaglia[i][j];
        }
        
        /* Se la somma è corretta */
        if (somma == pow(2, i)){
            /* Stampa la riga con dei '+' fra i numeri */
            for (j = 0; j <= i; j++){
                /* L'ultimo numero non ha il '+' */
                if (j == i){
                    printf("%d", tartaglia[i][j]);
                }
                else{
                    printf("%d + ", tartaglia[i][j]);
                }
            }

            /* Diciamo che la somma è coretta*/
            /* Il risultato sbagliato era dato dalla mancanza del cast ad int */
            printf("=2^%d=%d\n", i, (int) pow(2,i));
        }

        else{
            printf("La riga %d è sbagliata\n", i);
            giusta = false;
        }
    }

    if (giusta == false){
        printf("La matrice è sbagliata\n");
    }
    else{
        printf("La matrice è giusta\n");
    }
        
}
