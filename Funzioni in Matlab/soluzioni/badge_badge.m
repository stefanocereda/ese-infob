function [registro] = badge_badge(dipendente, registro, data, ora)
	% badge: aggiorna il registro dei dipendenti; se il dipendente sta entrando
	% aggiungo i suoi dati, la data e l'ora al registro; se il dipendente sta
	% uscendo, aggiungo al registro l'ora di uscita e verifico se può uscire.
	% La funzione prende in ingresso il registro, il dipendente, la data e
	% l'ora e restituisce il registro aggiornato.
	indiceUtente =([registro.ID] == dipendente.ID) & ([registro.data] == data);
	if (~any(indiceUtente))
		registro(end+1).ID = dipendente.ID;
		registro(end).nome = dipendente.nome;
		registro(end).cognome = dipendente.cognome;
		registro(end).data = data;
		registro(end).oraIngresso = ora;
	else
		registro(indiceUtente).oraUscita = ora;
		okUscita = verificaUscita(registro, dipendente.ID, data);
		if (okUscita)
			disp('Arrivederci!');
		else
			disp('Errore uscita!');
		end
	end
end
