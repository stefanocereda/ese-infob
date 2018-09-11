Q=[1 2 3; 4 5 6; 7 8 9];
[r c]=size(Q);
val=input('Inserisci valore: ');

%creo un vettore colonna contentente r copie di val
temp=val.*ones(r,1);

% il risultato finale si ottiene accostando la matrice a questo vettore colonna
T=[temp Q];
disp(T)
