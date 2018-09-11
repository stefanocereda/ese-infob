function [val] = Tartaglia(r,c)
  if c == 1
    val = 1;
  elseif c == r
    val = 1;
  else
    val = Tartaglia(r-1, c-1) + Tartaglia(r-1, c);
  end
end
