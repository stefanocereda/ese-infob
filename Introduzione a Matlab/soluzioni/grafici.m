% Grafico equazione di secondo grado
% 13/11/2018 Stefano Cereda

a=input('Inserisci a: ');
b=input('Inserisci b: ');
c=input('Inserisci c: ');

% Creiamo un vettore di x sul dominio che ci interessa e con passo abbastanza piccolo per avere una buona risoluzione
x = -10:0.5:+10;
% e calcoliamo la y corrispondente per ciascun valore delle x. Attenzione al punto in x.^2: quello che vogliamo calcolare è il quadrato di
% ciascun elemento del vettore, NON il quadrato del vettore!
y = a*x.^2 + b*x + c;


plot(x,y);
hold on
xlabel('X');
ylabel('f(X)');
title('Grafico parabola');

% Aggiungiamo una linea orizzontale in y=0 creando un vettore di zeri lungo quanto x
y0 = 0*x;
% plottandp una seconda riga matlab modificherà il colore per distinguerla da quella precedente
plot(x,y0);
hold off
