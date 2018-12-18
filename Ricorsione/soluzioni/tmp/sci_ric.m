function [num, exp] = sci_ric(n, e)
if n < 10
    num = n;
    exp = e;
else

    [num, exp] = sci_ric(n/10, e+1)
end
end