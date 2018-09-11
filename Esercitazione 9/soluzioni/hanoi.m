function [] = hanoi(n, da, a, per)
  if n>1
    hanoi(n-1, da, per, a);
  end
  
  fprintf('Sposta un disco dal piolo %d al piolo %d\n', da, a);
  
  if n>1
    hanoi(n-1, per, a, da);
  end
end