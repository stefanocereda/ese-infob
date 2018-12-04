function [res] = biblioteca_inserisciTessera( m, num)
%inserisciTessera Inserisce una nuova tessera

%[r c]=size(m);
l=length(m);
%m(r+1,1)=r+1;
m(l+1).id=l+1;
%m(r+1,2)=num;
m(l+1).numTessera=num;
res=m;
end

