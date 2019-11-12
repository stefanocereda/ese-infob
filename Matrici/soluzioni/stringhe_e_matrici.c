/* Si definisca la struttura dati composta da una matrice di stringhe
(NxN).
Si scriva quindi il codice che permette ad un utente di riempire la
matrice con parole. Alla fine della fase di inserimento si deve
stampare la lunghezza media delle parole ed il numero totale di
caratteri presenti nella matrice.
Si costruisca un vettore contenente le parole presenti nella
diagonale della matrice e se ne stampi il contenuto.
Si chiede di inserire una parola da ricercare fra il contenuto della
matrice. Il risultato della ricerca restituisce gli indici
([riga,colonna]) della prima occorrenza della parola (se essa esiste)
oppure il valore -1.
*/

#include <stdio.h>
#include <string.h>

#define MAX_LEN_STR 256
#define N 2

typedef char Stringa[MAX_LEN_STR];
typedef Stringa Matrice[N][N];
typedef enum {false, true} bool;

void main(){
    Matrice m;
    int i, j;
    int lunghezza_tot = 0;
    Stringa diagonale[N];
    Stringa ricerca;
    bool trovato;

    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            printf("Inserisci parola: ");
            scanf("%s", m[i][j]);

            lunghezza_tot += strlen(m[i][j]);
        }
    }

    printf("la lunghezza media è %f, i caratteri inseriti sono %d\n", (float) lunghezza_tot/(N*N), lunghezza_tot);

    for (i=0; i < N; i++){
        strcpy(diagonale[i], m[i][i]);
    }
    for (i=0; i < N; i++){
        printf("%s\n", diagonale[i]);
    }

    printf("Inserisci parola da cercare: ");
    scanf("%s", ricerca);

    trovato = false;
    for (i=0; i < N && !trovato; i++){
        for (j=0; j < N && !trovato; j++){
            if (strcmp(m[i][j], ricerca) == 0){
                trovato = true;
            }
        }
    }

    if (trovato){
        printf("Parola trovata in posizione (%d,%d)\n", i-1, j-1);
    }
    else{
        printf("-1\n");
    }
}

