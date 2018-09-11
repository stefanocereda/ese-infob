%soci=[];
soci=struct();
azione=1;

while azione>0
    disp('1. Inserisci tessera')
    disp('2. Stampa archivio')
    disp('3. Cerca tessera')
    disp('0. Esci')
    
    azione=input('Inserisci scelta: ');
    
    switch(azione)
        case 1
            num_tessera=input('Inserisci nuovo numero di tessera: ');
            soci=inserisciTessera(soci,num_tessera);
        case 2
            %disp(soci);
            l=length(soci);
            for x=1:l
               disp(soci(x)); 
            end
        case 3
            num_tessera=input('Inserisci numero di tessera da cercare: ');
            socio=cercaTessera(soci,num_tessera);
            %if(socio>0)
            %   disp(['Trovato socio ' num2str(socio)]); 
            %end
            disp(soci(socio));
        case 0
            disp('Ciao!');
        otherwise
            disp('Errore');
    end
end