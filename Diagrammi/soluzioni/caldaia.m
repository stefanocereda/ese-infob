minima=18;
massima=28;
minuti_totali=5*60;
temp=(massima-minima).*rand(1,minuti_totali)+minima;

soglia=input('Inserire la soglia: ');
costoAlMinuto=input('Inserire il costo del gas al minuto: ');

% versione "sbagliata"
% minutiAccesa=[];
% L=1;
% for K=1:minuti_totali
%    if(temp(K)<soglia)
%       minutiAccesa(L) = K;
%       L=L+1;
%    end
% end

minutiAccesa=find(temp<soglia);


if(length(minutiAccesa)>30)
    costoTotale=length(minutiAccesa)*costoAlMinuto*0.80;
else
    costoTotale=length(minutiAccesa)*costoAlMinuto;
end

fprintf('Costo totale per %d minuti: %.2f Euro\n', length(minutiAccesa),...
    costoTotale);

x=1:minuti_totali;
plot(x,temp);
hold on
ylabel('temperature');
xlabel('tempo (m)');
title('Temperatura sala cinema');

y=ones(1,minuti_totali)*soglia;
plot(x,y,'k','LineWidth',2);

temp1=temp(minutiAccesa);
x1=x(minutiAccesa);
plot(x1,temp1,'Xr');
hold off

