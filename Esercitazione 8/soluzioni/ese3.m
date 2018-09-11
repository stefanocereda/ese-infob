pagaoraria=[5 5.5 6.5 5 6.25];
oresett=[40 43 37 50 45];
pezzi=[1000 1100 1000 1200 1100];

paghe=pagaoraria.*oresett

salariotot=sum(paghe)

pezzitot=sum(pezzi)

costopezzo=salariotot/pezzitot

orepezzo=sum(oresett)/pezzitot

efficienze=pezzi./oresett;

[efficienzamax chi]=max(efficienze)