clear
mammifero.tipo='Elefante';
mammifero.alimentazione='Erbivoro';
mammifero.peso=2500;

mammifero.esemplari(1)= struct('codice', 3, 'anno', 1985, 'cuccioli', 3);
mammifero.esemplari(2)= struct('codice', 5, 'anno', 1989, 'cuccioli', 0);
mammifero.esemplari(3)= struct('codice', 8, 'anno', 1982, 'cuccioli', 0);

selezione=[mammifero.esemplari.anno]<1990 & [mammifero.esemplari.cuccioli]==0;
archivio=mammifero.esemplari(selezione);

l=length(archivio)
for x=1:l
    disp(archivio(x))
end