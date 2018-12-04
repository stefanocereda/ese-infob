function [res] = matriceSimmetrica(m)
    [r c] = size(m);
    res = true;
    if r ~=c
        res = false;
    else
        for ii = [1:r]
            for jj = [1:c]
                if (m(ii,jj) ~= m(jj, ii))
                    res = false;
                end
            end
        end
    end
end