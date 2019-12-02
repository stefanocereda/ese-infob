function [c] = conversioni(a, b)
    if (a == 0)
        c = 0;
    else
        c = [];
        while (a > 0)
            r = mod(a,b);
            c = [r c];
            a = floor(a/b);
        end
    end
end
