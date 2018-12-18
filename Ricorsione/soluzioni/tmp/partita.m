function [ris] = partita(N, truccata)
    ris = zeros(1, 37);
    for ii = 1:N
        val = gioca(truccata);
        ris(val+1) = ris(val+1) + 1;
    end
end