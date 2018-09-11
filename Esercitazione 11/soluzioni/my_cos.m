function [val_max, x_max] = my_cos(a,b,p)
  x = [a:p:b];
  y = cos(x.^2);
  
  plot(x,y);
  
  [val_max, idx_max] = max(y);
  x_max = x(idx_max);
end