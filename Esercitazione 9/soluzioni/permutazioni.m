function [p] = permutazioni(m)
  permuta([], m);
end

function ris = permuta(p, m)
  if length(m) == 0
    p
  else
    for k = 1:length(m)
      permuta([p m(k)], m([1:k-1 k+1:end]));
    end
  end
end
