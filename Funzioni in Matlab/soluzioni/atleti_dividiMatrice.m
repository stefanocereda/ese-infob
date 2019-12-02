function [atletiOver, atletiUnder] = atleti_dividiMatrice(atletiTot, velocitaM, soglia)

	% Riceve in input la matrice atletiTot, il vettore velocitaM e uno scalare soglia.
	% Fornisce in output due matrici: atletiOver e atletiUnder
	% -­ atletiOver include le righe di atletiTot corrispondenti agli elementi di velocitaM
	% con valore maggiore o uguale di soglia
	% -­ titoliUnder include le righe di atletiTot corrispondenti agli elementi di velocitaM
	% con valore minore di soglia.

	atletiOver = atletiTot(velocitaM >= soglia, :);;
	atletiUnder = atletiTot(velocitaM < soglia, :);;
end
