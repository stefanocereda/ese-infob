function [ris, err] = sqrt1(z,n)
  if n == 0
    ris = 1;
    err = inf;
  else
    ris = (sqrt1(z, n-1) + z/sqrt1(z, n-1)) / 2;
    err = abs(ris - sqrt1(z, n-1));
  end
end
