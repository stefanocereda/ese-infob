function [ris] = partita(N, truccata)
  ris = zeros(1, 37);
  for ii = 1:N
    val = gioca(truccata);
    % val va da 0 a 36, gli indici di ris da 1 a 37
    ris(val+1) = ris(val+1)+1;
  end
end