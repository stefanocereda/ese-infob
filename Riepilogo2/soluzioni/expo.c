// Punto 1
Padiglione expo[MAX_PAD];
Visitatore primo;
int i;
int n_pad=0;

n_pad=1;
strcpy(expo[0].nome, "Italia")
expo[0].ident = italia;
expo[0].ore_visita = 3;
expo[0].minuti_visita = 55;

printf("Inserisci nome e cognome del primo visitatore\n");
scanf("%s ", primo.nome);
scanf("%s ", primo.cognome);

for (i=0; i<MAX_PREF; i++){
	printf("Inserisci il %d padiglione preferito\n", i+1);
	printf("1-Italia, 2-Giappone, 3-Nord Corea, 4-Emirati Arabi, 5-Francia, 6-Cile\n");
	scanf("%d", &primo.preferiti);
}
printf("Inserisci prezzo biglietto\n");
scanf("%f", &primo.prezzo);

expo[0].len_coda = 1;
expo[0].coda[0] = primo;

// Punto 2
Visitatore visitatori_felici[MAX_VIS];
int i, j, k;
int felice;
int n_felici=0;
double p_tot=0;
for (i=0; i<n_pad; i++){
	for (j=0; j<expo[i].len_coda; j++){
		felice = 0;
		for (k=0; k<MAX_PREF && felice == 0; k++){
			if (expo[i].coda[j].preferiti[k] == expo[i].ident){
				felice = 1;
				visitatori_felici[n_felici] = expo[i].coda[j];
				n_felici++;
				p_tot += expo[i].coda[j].prezzo;
			}
		}
	}
}




// Punto 3
# define MAX_CLIENTI 50
typedef struct{
	Stringa nome;
	float costo_coperto;
	float prezzo_medio;
	int n_coperti;
	int n_clienti;
	Visitatore clienti[MAX_CLIENTI];
}Ristorante;

typedef struct{
	...
	Ristorante rist;
} Padiglione;
