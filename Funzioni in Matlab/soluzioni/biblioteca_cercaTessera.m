function [res] = biblioteca_cercaTessera(m,num)
	%cercaTessera cerca tessera

	%indice=find(m(:,2)==num);
	indice=find([m.numTessera]==num);
	res=m(indice, 1);
end

