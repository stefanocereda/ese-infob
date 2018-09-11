%Grafico equazione di secondo grado
a=input('Inserisci a: ');
b=input('Inserisci b: ');
c=input('Inserisci c: ');

x = -10:0.5:+10;
y = a*x.^2 + b*x + c;
plot(x,y);
hold on
xlabel('X');
ylabel('f(X)');
title('Grafico parabola');

y0 = 0*x;
plot(x,y0);
hold off
