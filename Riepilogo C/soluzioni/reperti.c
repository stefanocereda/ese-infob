/* All'esame è meglio rispondere ai singoli punti */
#include <stdio.h>

/* punto 1 */
#define N_REPERTI 1000

typedef enum {mTerracotta, mMarmo, mMetallo} TipoManufatto;

typedef struct{
	float latitudine;
	float longitudine;
	float profondita;
	float peso;
	TipoManufatto t;
} Reperto;
Reperto insiemeReperti[N_REPERTI];

void main(){
	/* punto 2 */
	int i;
	for (i=0; i<N_REPERTI; i++){
		printf("Peso reperto n. %d: %f\n", i, insiemeReperti[i].peso);
	}


	/* Condizione punto 3 */
	insiemeReperti[i].latitudine <= latitudineI +soglia &&
		insiemeReperti[i].latitudine >= latitudineI -soglia &&
		insiemeReperti[i].longitudine <= longitudineI +soglia &&
		insiemeReperti[i].longitudine >= longitudineI -soglia;


	/* punto 4 */
	float pMax, latitudineI, longitudineI, soglia;
	printf("Inserisci portata massima: ");
	scanf("%f", &pMax);
	printf("Inserisci latitudine e longitudine iniziali: ");
	scanf("%f%f", &latitudineI, &longitudineI);
	printf("Inserisci la soglia che delimita l'area di ricerca: ");
	scanf("%f", &soglia);

	/* punto 5 */
	Reperto caricoVeicolo[N_REPERTI];
	int indiceCarico;
	float caricoCorrente;

	indiceCarico=0;
	caricoCorrente=0;

	/* Controlliamo tutti i reperti */
	for (i =0; i < N_REPERTI; i++){
		/* È all'interno dell'area di ricerca? */
		if (insiemeReperti[i].latitudine <= latitudineI + soglia &&
				insiemeReperti[i].latitudine >= latitudineI - soglia &&
				insiemeReperti[i].longitudine <= longitudineI + soglia &&
				insiemeReperti[i].longitudine >= longitudineI - soglia ) {

			/* Possiamo caricarlo ? */
			if (insiemeReperti[i].peso + caricoCorrente <= pMax){
				caricoCorrente += insiemeReperti[i].peso;
				caricoVeicolo[indiceCarico] = insiemeReperti[i];
				indiceCarico++;
			}
		}
	}


}
