#include <stdio.h>
#include <string.h>

/*
 * Si vuole gestire l’anagrafe della motorizzazione e dei proprietari di
auto. Un veicolo è identificato da:
• Targa
• Modello
• Proprietario (si suppone che ogni auto abbia un unico
proprietario)
I proprietari di auto sono identificati dai campi:
• Cognome
• Nome
• Un insieme di indirizzi di recapito (max 3).
Un recapito è composto da: via, numero civico e CAP. L’anagrafe
contiene al max N veicoli.
*/

/* Cominciamo dal definire le struct (partendo dall'ultima, recapito)
 * Per farlo ci servono alcune define */

#define N 100 // numero veicoli che inseriremo nell'anagrafe, abbassatelo a 2 per testare il codice
#define MAX_STRLEN 256 // ragionevole lunghezza massima di nome, cognome, via e modello
#define MAX_RECAPITI 3 // massimo numero di recapiti associati ad un proprietario
#define LEN_CAP 6 // Rappresento il cap come una stringa di 5 caratteri + terminatore
#define LEN_TARGA 10 // Rappresento la targa come una stringa di 9 caratteri + terminatore

typedef char Stringa[MAX_STRLEN];
typedef char Cap[LEN_CAP];
typedef char Targa[LEN_TARGA];
typedef enum{false, true} bool;

typedef struct{
    Stringa via;
    int n_civ;
    Cap cap;
    bool valido; //indica se questo recapito è valido. Ogni proprietario avrà infatti un array di 3 recapiti, ma non tutti saranno validi
} Recapito;
/* In alternativa al campo booleano valido potete aggiungere un campo int validi in proprietario che assumerà i valori 1, 2 o 3. */
/* Anzi, come esercizio provate a modificare il codice in questo modo */

typedef struct{
    Stringa cognome;
    Stringa nome;
    Recapito recapiti[MAX_RECAPITI];
} Proprietario;

typedef struct{
    Targa targa;
    Stringa modello;
    Proprietario proprietario;
} Veicolo;


/*
Scrivere il programma C che chiede all’utente di inserire i dati degli
N veicoli da memorizzare nell’anagrafe. Per ogni veicolo il
programma deve acquisire anche le informazioni relative al
proprietario, inclusi i suoi recapiti. In una prima versione del
programma si inseriscano esattamente tre recapiti per proprietario,
in una seconda versione si consenta all’utente di inserire un numero
di recapiti minore o uguale a tre.
Finita la fase di inserimento il programma stampa il contenuto
della struttura nel formato:
VEICOLO Targa XXXXX
PROPRIETARIO Cognome XXXXXXXXX
RECAPITI CAP XXXXXXXXX ... XXXXXXXXX
*/



int main(){
    Veicolo anagrafe[N];
    int i, j;
    bool continua;
    char risposta;

    for (i=0; i < N; i++){
        /* Veicolo */
        printf("Inserisci targa: ");
        scanf("%s", anagrafe[i].targa);
        
        /* La scanf non vuole \n */
        /* La %s non vuole il & */
        /* Potete accedere ai campi delle struct con un punto. Leggete al contrario sostituendo i punti con "del" e [i] con "i-esimo"
         * Sapendo che l'anagrafe contiene veicoli possiamo dire che la scanf sta salvando una stringa nella targa dell'i-esimo veicolo */

        printf("Inserisci modello: ");
        scanf("%s", anagrafe[i].modello);

        /* Proprietario */
        printf("Cognome: ");
        scanf("%s", anagrafe[i].proprietario.cognome);
        /* Cognome del proprietario dell'i-esimo veicolo */

        printf("Nome: ");
        scanf("%s", anagrafe[i].proprietario.nome);

        /* Recapiti. Continuo a chiedere finchè ne inserisco 3 o decido di terminare */
        j = 0;
        continua = true;
        while(continua==true && j < MAX_RECAPITI){
            printf("Recapito %d\n", j+1);

            printf("Via: ");
            scanf("%s", anagrafe[i].proprietario.recapiti[j].via);
            /* Via del j-esimo recapito del proprietario dell'i-esimo veicolo */

            printf("Numero civico: ");
            scanf("%d", &anagrafe[i].proprietario.recapiti[j].n_civ);

            printf("Cap: ");
            scanf("%s", anagrafe[i].proprietario.recapiti[j].cap);

            /* Segno questo recapito come valido */
            anagrafe[i].proprietario.recapiti[j].valido = true;
            j++;
            
            /* Continuo a chiedere una risposta finchè ne ottengo una valida */
            risposta = 'a';
            while(risposta != 's' && risposta != 'n'){
                printf("Inserire un altro recapito? [s/n]");
                scanf(" %c", &risposta);
            }
            if (risposta == 'n')
                continua = false;
        }

        /* Sono uscito dal while o perché ho inserito 3 recapiti o perché ho scelto di terminare,
         * nel secondo caso devo invalidare i recapiti rimanenti */
        while (j < MAX_RECAPITI){
            anagrafe[i].proprietario.recapiti[j].valido = false;
            j++;
        }

    }


    /* Stampiamo l'anagrafe */
    for (i=0; i<N; i++){
        printf("VEICOLO\tTarga\t%s\n", anagrafe[i].targa);
        printf("PROPRIETARIO\tCognome\t%s\n", anagrafe[i].proprietario.cognome);

        printf("RECAPITI\tCAP\t");
        for (j = 0; j < MAX_RECAPITI && anagrafe[i].proprietario.recapiti[j].valido == true; j++){
            printf("%s\t", anagrafe[i].proprietario.recapiti[j].cap);
        }
        printf("\n");
    }
}
