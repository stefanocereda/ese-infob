//Punto 1
Nave nuovaNave;
int i;
/* acquisisce nome nuova nave e le assegna stato fuoriPorto */
printf("Inserire il nome della nave: ");
scanf("%s", nuovaNave.nome);
nuovaNave.stNave = fuoriPorto;

/* verifica se nel porto c’è un pontile per la nave */
i = 0;
while (i < portoNA.nPontili && portoNA.pontili[i].stPontile != libero)
	i++;
if (i < portoNA.nPontili) {
	nuovaNave.nPontileAssegnato = portoNA.pontili[i].numero;
	portoNA.pontili[i].stPontile = occupato;
	portoNa.pontili[i].naveAttraccata = nuovaNave;
	if(portoNA.bloccato == vero)  {
		nuovaNave.stNave = attesaIn;
		portoNA.codaNavi[portoNA.nNaviInCoda] = nuovaNave;
		portoNA.nNaviInCoda++;
	}
	else{
		portoNA.bloccato = vero;
		nuovaNave.stNave = manovra;
	}

/* Oppure
boolean trovato = falso;
for (i=0; i<portoNA.nPontili && trovato == falso; i++){
	if (portoNA.nPontili[i].stPontile == libero)
		portoNA.pontili[i].stPontile = occupato;
		nuovaNave.nPontileAssegnato = portoNA.pontili[i].numero;
		portoNa.pontili[i].naveAttraccata = nuovaNave;
		trovato = vero;
}

if (trovato == false)
	printf("Errore, impossibile trovare un pontile libero\n);
else
	if (portoNA.bloccato == vero){
		nuovaNave.stNave = attesaIn;
		portoNA.codaNavi[portoNA.nNaviInCoda] = nuovaNave;
		portoNA.nNaviInCoda++;
	}
	else{
		nuovaNave.stNave = manovra;
		portoNa.bloccato = vero;
	}
*/



//Punto 2
Nave naveInManovra;
int i, j;
if(portoNA.bloccato == falso && portoNA.nNaviInCoda > 0){
	i=0;
	/* Durante l'esercitazione ho spostato la prima nave in coda, mentre il testo chiede di spostare la prima
	   nave in coda che sia in attesa di entrare.
	   codaNavi viene definita come coda di navi in attesa di entrare, quindi la prima nave in attesa di entrare sarà sicuramente la prima.
	   Ad ogni modo, nella soluzione del TdE trovate questo ciclo che serve a controllare esplicitamente la condizione indicata
	*/
	while (i<portoNA.nNaviInCoda && portoNA.codaNavi[i].stNave!=attesaIn)
		i++;
	if(i<portoNA.nNaviInCoda){
		portoNA.bloccato = vero;
		naveInManovra = portoNA.codaNavi[i];
		/* Spostiamo dalla i-esima nave in poi */
		for(j = i+1; j < portoNA.nNaviInCoda; j++)
			portoNA.codaNavi[j-1] = portoNA.codaNavi[j];
		portoNA.nNaviInCoda = portoNA.nNaviInCoda--;
		naveInManovra.stNave = manovra;
	}
}
