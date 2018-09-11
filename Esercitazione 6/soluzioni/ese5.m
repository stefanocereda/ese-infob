a = [1 3 5 9 15];

N = input('Quanti numeri vuoi inserire? ');

for i = [1:N]
    val = input('Inserisci numero: ');
    
    % questo while è identico a quello in C, alla fine val contine la posizione in cui inserire val
    j = 1;
    while (j <= size(a,2) && a(j) <= val)
        j = j+1;
    end

    % a è uguale ad un array così composto [ [elementi di a precedenti alla posizione j] val [elementi di a succeddivi all posizione j]]
    a = [a(1:j-1) val a(j:end)];

    disp(a);
end
        
