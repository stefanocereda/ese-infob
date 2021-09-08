function [res] = biblioteca_cercaTessera(m,num)
	%cercaTessera cerca tessera

	% Matriciale
	%indice=find(m(:,2)==num);
	% Struct
	indice=find([m.numTessera]==num);

	res=m(indice, 1);
end
