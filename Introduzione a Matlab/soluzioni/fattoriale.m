%Calcolo fattoriale

n=input('Inserisci n: ');
factorial(n)

ris = 1;

while n > 1
    ris = ris * n;
    n=n-1;
end

ris