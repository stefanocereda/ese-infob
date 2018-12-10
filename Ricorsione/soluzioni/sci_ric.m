function [num,exp] = sci_ric(n,c)
  %caso base: il numero è minore di 10
  if n < 10
    num = n;
    exp = c;
    
  else
    % ricorsione: divido n ed incremento c
    n = n/10;
    c = c+1;
    [num, exp] = sci_ric(n, c);
  end
end
