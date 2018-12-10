function [z]=mistero1(x,y)
    if x<y
        z=0;
    else
        if mod(x,y)==0
            z=x+mistero1(x-y,y);
        else
            z=mistero1(x-1,y);
        end
    end 