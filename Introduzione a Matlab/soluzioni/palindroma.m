% N è il numero di cifre richieste
N=4;
% x è il numero della prossima cifra da inserire
x=1;

% a è l'array
while(x<=N)
    a(x)=input('Inserisci un intero: ');
    x=x+1;
end

% Palindrome è una flag che segnala se la sequenza è palindroma. Diamo per scontato che lo sia, finchè troviamo una prova del contrario o esauriamo la sequenza
palindrome=1;

x=1;
while(x<=N && palindrome == 1)
    if(a(x)~=a(N-x+1))
        % In windows la tilde ~ è scomoda da inserire. Avete quattro opzioni:
        %   1. Se avete il tastierino numerico è Alt+126
        %   2. Se non lo avete potete:
        %       2.1 Da pannello di controllo attivate il layout inglese (potete poi cambiare fra i layout con l'icona in basso a destra o usando win+spazio) e una volta in inglese usare shift+backslash (sotto esc)
        %       2.2 Cercare tilde in google (o in mappa caratteri) e fare copia incolla
        %       2.3 Scrivere != (come in C) e lasciare che matlab vi segnali l'errore per poi sfruttare la sua correzione
        % (Notate come l'indentazione segua l'if sulla presenza del tastierino numerico. È semplice da leggere, fatelo anche voi)
       palindrome=0;
    end
    x=x+1;
end

disp(a)
if(palindrome==1)
    disp('È palindroma');
else
    disp('Non è palindroma');
end


% In alternativa possiamo ruotare due volte il vettore e controllare che sia uguale alla versione originale
b = rot90(rot90(a));
if (b == a)
    disp ('si');
else
    disp('no');
end
