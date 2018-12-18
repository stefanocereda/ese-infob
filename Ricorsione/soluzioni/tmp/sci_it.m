function [num, exp] = sci_it(n)
exp = 0;
num = n;
while(num >= 10)
    num = num/10;
    exp = exp +1;
end
end
