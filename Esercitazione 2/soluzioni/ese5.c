#include <stdio.h>

int main(){
    int n, i = 0; //n sarà il numero inserito, i il numero di numeri inseriti fino ad ora
    float media, somma = 0;

    printf("Inserisci il prossimo numero: ");
    scanf("%d", &n);

    while (n >= 0){
        somma += n; // equivalente a somma = somma + n
        i++; // equivalente ad i += 1
        
        // Aggiorno e scrivo la media
        media = somma / i;
        printf("La media è: %.2f", media);

        // Chiedo il prossimo numero
        printf("\nInserisci il prossimo numero: ");
        scanf("%d", &n);
    }
}

