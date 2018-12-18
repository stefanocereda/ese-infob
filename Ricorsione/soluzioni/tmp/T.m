function [val] = T(r,c)
if c == 1
    val = 1;
elseif c == r
    val = 1;
else
    val = T(r-1, c-1) + T(r-1, c);
end
end
