function [res] = biblioteca_inserisciTessera( m, num)
	%inserisciTessera Inserisce una nuova tessera

	% Versione matriciale
	%[r c]=size(m);
	%m(r+1,1)=r+1;
	%m(r+1,2)=num;

	% Versione con struct
	l=length(m);
	m(l+1).id=l+1;
	m(l+1).numTessera=num;
	res=m;
end
