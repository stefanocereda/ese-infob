function ris = permuta(v, p)

if length(v) == 0
    disp(p);
    
else
    for k = 1:length(v)
        permuta(v([1:k-1 k+1:end]), [p v(k)]);
    end
end
end
