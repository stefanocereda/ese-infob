function [ris] = sqrt2(z,err)
  n = 0;
  e = inf;
  ris = 1;
  
  while e > err
    n = n+1;
    [ris, e] = sqrt1(z,n);
  end
end
