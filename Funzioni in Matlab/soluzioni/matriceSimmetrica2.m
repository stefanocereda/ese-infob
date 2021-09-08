function [res] = matriceSimmetrica2(m)
    res = all(all(m == m'));
end
