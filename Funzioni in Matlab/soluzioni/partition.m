function [m, T] = partition(V)	  
% La funzione PARTITION calcola, a partire da un array V, un numero m	
% (pari al valore che V assume nella sua posizione centrale) e un nuovo	
% array T ottenuto da V muovendo a sinistra di m gli elementi di V minori 	
% di m, e muovendo a destra di m gli elementi di V maggiori di m.	
% Nel caso in cui V abbia lunghezza pari, m e' la media dei due valori	
% nelle posizioni centrali.	
%	
% Parametri di input	
% V: vettore di valori numerici	
%
% Parametri di output	
% m: elemento in posizione centrale di V  
% T: vettore ottenuto applicando a V la trasformazione descritta sopra

    lung = length(V);
    if lung == 0
        T = V;
        m = 0;
    else
        if mod(lung, 2) == 0
            m = mean([V(lung/2), V(lung/2+1)]);
        else
            m = V(ceil(lung/2));
        end
        T = [V(V < m) V(V == m) V(V > m)];
    end
end
