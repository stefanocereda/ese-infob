function n = calcola(x)
if (floor(x/10) == 0)
    n = 1;
else
    n = 1 + calcola(floor(x/10));
end 
