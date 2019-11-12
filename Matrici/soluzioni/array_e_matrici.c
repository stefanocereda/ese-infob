/* Si scriva un programma che riceva in input un numero
dim < MAX V (MAX V = 100) e chieda poi dim interi in modo
da popolare un vettore v .
Il programma richiede all’utente altri due numeri, r e c
rappresentanti le dimensioni di una matrice m. Il programma deve
usare i primi r ∗ c valori di v per riempire la matrice m.
• Se r ∗ c > dim il programma termina scrivendo un messaggio
di errore.
• Se r ∗ c < dim il programma riempie m e stampa i valori di v
che sono stati esclusi dalla matrice.
• Se r ∗ c = dim il programma stampa un messaggio di successo.
Nei casi in cui la matrice viene popolata si ricerchi all’interno di
essa il massimo e minimo e se ne stampino i valori.
*/

#include <stdio.h>

#define MAX_V 100

typedef enum{false, true} bool;

void main(){
    /* Non sapendo quali saranno le effettive dimensioni di v ed m possiamo solo definire quelle massime */
    int v[MAX_V];
    int m[MAX_V][MAX_V];

    /* Qui salveremo le dimensioni vere (chieste all'utente) */
    int dim,r,c;

    int i,j;
    int min, max;

    /* Continuo a chiedere la dimensione finchè ne ottengo una valida */
    dim = -1;
    while (dim < 0 || dim > MAX_V){
        printf("Inserisci dim fra 0 e %d: ", MAX_V);
        scanf("%d", &dim);
        /* La scanf non vuole \n*/
        /* Il %d vuole & (l'unica eccezione è %s) */
    }

    /* Acquisisco il vettore (array) v*/
    for (i=0; i < dim; i++){
        printf("Inserisci l'elemento in posizione %d: ", i);
        scanf("%d", &v[i]);
    }

    /* Modificatelo per continuare a chiedere r e c finchè vi arrivano entrambi minori di MAX_V */
    /* Notare che la modifica non vi garantisce di essere in grado di popolare la matrice */
    printf("Inserisci r e c: ");
    scanf("%d%d", &r, &c);

    if (r*c <= dim){
        /* Posso popolare la matrice*/

        /* Per ogni riga */
        for (i = 0; i < r; i++){
            /* Per ogni colonna */
            for (j = 0; j < c; j++){
                    /* Copio nella posizione (i,j) della matrice il corrispondente elemento nell'array */
                    /* Ogni riga della matrice corrisponde ad un blocco dell'array*/
                    /* i*c mi da la posizione dell'inizio del blocco*/
                    /* j mi da la posizione all'interno del blocco */
                    m[i][j] = v[i*c + j];
            }
        }

        /* Metto i uguale alla posizione dell'ultimo elemento inserito */
        i = (c-1)*c + (r-1); /* credo sia (i-1)*c + (j-1) */
        if (i < dim){
            printf("Sono avanzati i seguenti valori: ");
            while (i < dim){
                printf("%d ", v[i]);
                i++;
            }
            printf("\n");
        }
        else{
            printf("Non è avanzato nessun valore\n");
        }

        /* Stampiamo la matrice e cerchiamo min e max */
        /* L'algoritmo di ricerca di massimi e minimi in una matrice o in un array funziona sempre allo stesso modo.
         * Creo due variabili max e min e le pongo uguali al primo elemento, poi faccio passare tutta la struttura dati
         * e mantengo aggiornate le variabili max e min.  */
        min = m[0][0];
        max = m[0][0];
        for (i=0; i < r; i++){
            for (j=0; j < c; j++){
                /* Stampo */
                printf("%d\t", m[i][j]);

                /* Aggiorno max */
                if (m[i][j] > max){
                    max = m[i][j];
                }

                /* Aggiorno min */
                if (m[i][j] < min){
                    min = m[i][j];
                }

            }
            printf("\n");
        }

        printf("Il massimo vale %d ed il minimo vale %d\n", max, min);
    }
    else{
        printf("I valori inseriti non sono sufficienti.\n");
    }
}


