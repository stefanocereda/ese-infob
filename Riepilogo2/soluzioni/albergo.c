// Punto 1
#define NSTANZE 500
typedef Stanza Albergo[500];
Albergo smartHotel;

// Punto 2 - calcolo media
int i, j;
float media;

for (i=0; i<NSTANZE; i++){
	media = 0;
	for (j=0; j < smartHotel[i].nSensori; j++)
		media += smartHotel[i].datiSensori[j];
	media /= smartHotel[i].nSensori // oppure j

	if ((media >= 18) && (media <= 21))
		smartHotel[i].attuatore = acceso;
	else
		smartHotel[i].attuatore = spento;

// Punto 3 - copia fra array senza buchi
Albergo stanzeAccese; // oppure Stanza stanzeAccese[NSTANZE]
j = 0;
for (i=0; i<NSTANZE; i++){
	if (smartHotel[i].attuatore == acceso){
		stanzeAccese[j] = smartHotel[i];
		j++;
	}
}

// Punto 4 - stringhe
#define MAX_LOCALI 5
#define STR_LEN 30

typedef char Stringa[STR_LEN+1];
typedef struct {
	Stanza locali[MAX_LOCALI];
	int nLocali;
	Stringa cognome;
} Appartamento;
