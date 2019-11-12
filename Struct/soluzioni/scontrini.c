#include <stdio.h>
#include <string.h>

#define LEN_ID 10

#define NUM_SCONTRINI 3

typedef char IdCliente [LEN_ID+1];

typedef struct{
	IdCliente id;
	int totale;
 	int punti;
} Scontrino;

typedef Scontrino Archivio [NUM_SCONTRINI];

typedef enum{false,true} bool;

void main(){
	Archivio archivio;
	Scontrino tmp;
	IdCliente idCerca;
	int tot, i;
	bool scambio;

	/* foo init */
	for (i = 0; i < NUM_SCONTRINI; i++){
		scanf("%s", archivio[i].id);
		scanf("%d%d", &archivio[i].totale, &archivio[i].punti);
	}

	printf("Inserisci id cliente: ");
	scanf("%s", idCerca);

	tot = 0;
	for (i = 0; i < NUM_SCONTRINI; i++){
		if (strcmp(idCerca, archivio[i].id) == 0){
			tot += archivio[i].punti;
			tot += archivio[i].totale / 10;
		}
	}
	printf("L'utente %s ha totalizzato %d punti.\n", idCerca, tot);


	/* MODIFICARE QUESTA PARTE PER NON USARE TUTTI GLI i OGNI VOLTA */
	scambio = true;
	while (scambio){
		scambio = false;
		for (i = 0; i < NUM_SCONTRINI-1; i++){
            /* Ordiniamo SECONDO il totale, ma ordiniamo gli scontrini.
             * Quindi controllo il totale: */
			if (archivio[i].totale < archivio[i+1].totale){
                    /* E scambio L'INTERA STRUTTUTA, non solo il totale */
			       tmp = archivio[i];
			       archivio[i] = archivio[i+1];
			       archivio[i+1] = tmp;
			       scambio = true;
			}
		}
	}

	for (i=0; i < NUM_SCONTRINI; i++){
		printf("%s\t%d\t%d\n", archivio[i].id, archivio[i].totale, archivio[i].punti);
	}
}
