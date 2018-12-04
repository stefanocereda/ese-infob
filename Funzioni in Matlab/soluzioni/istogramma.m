function frequenze = istogramma(values, bins)
    range = max(values) - min(values);
    step = range/bins;
    minimo = min(values);
    frequenze = [];
    while(minimo < max(values))
        massimo = minimo + step;
        v = istogramma_conta(values, minimo, massimo);
        frequenze = [frequenze v];
        minimo = massimo;
    end
end
