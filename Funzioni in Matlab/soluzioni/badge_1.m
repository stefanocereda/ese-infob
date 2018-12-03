function okUscita = verificaUscita(registro, ID, data)
% verificaUscita: controlla che un certo dipendente abbia lavorato almeno 7
% ore e 30 al momento dell'uscita. Prende in ingresso il registro e l'ID
% del dipendente da verificare. Restituisce true se il dipendente può
% uscire, false in caso contrario.
indexDipendente = ([registro.ID] == ID) & ([registro.data] == data);
okUscita = registro(indexDipendente).oraUscita - registro(indexDipendente).oraIngresso > 450;
 
