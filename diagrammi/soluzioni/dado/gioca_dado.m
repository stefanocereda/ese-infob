function n = gioca_dado()
  n=floor((rand())*6 + 1);
end

function [freq] = gioca_n_volte_dado(n)
  freq(6)=0;
  for ii=1:n
    res=gioca_dado();
    freq(res)=freq(res)+1;
  end
end

function [p] = calcola_probabilita_dado(n, value)
  freq=gioca_n_volte_dado(n);
  vinte=freq(value);
  p=vinte/sum(freq);
end