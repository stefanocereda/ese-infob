operaio(1) = struct('paga', 5, 'ore', 40, 'pezzi', 1000);
operaio(2) = struct('paga', 5.5, 'ore', 43, 'pezzi', 1100);
operaio(3) = struct('paga', 6.5, 'ore', 37, 'pezzi', 1000);
operaio(4) = struct('paga', 5, 'ore', 50, 'pezzi', 1200);
operaio(5) = struct('paga', 6.25, 'ore', 45, 'pezzi', 1100);

%ogni operaio guadagna paga * ore
% attenzione alle parentesi quadre e al punto
guadagni = [operaio.paga] .* [operaio.ore]

salario_totale = sum(guadagni)

pezzi_prodotti = sum([operaio.pezzi])

costo_medio_pezzo = pezzi_prodotti / salario_totale

ore_totali = sum([operaio.ore]);
ore_medie_pezzo = pezzi_prodotti / ore_totali

efficienze = [operaio.pezzi] ./ guadagni;
[val, idx] = max(efficienze);
idx