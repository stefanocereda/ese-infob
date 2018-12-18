function [n] = gioca(truccata)
if truccata == false
    n = floor(rand() * 37);
else
    r = rand();
    if r < 0.02
        n = 0;
    else
        n = rand();
    end
    n = floor(n * 37);
end