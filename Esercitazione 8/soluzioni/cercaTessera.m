function [res] = cercaTessera(m,num)
%cercaTessera cerca tessera

%indice=find(m(:,2)==num);
%res=m(indice,1);

indice=find([m.numTessera]==num);
res=m(indice).id+1;
end

