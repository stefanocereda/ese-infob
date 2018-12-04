function num = istogramma_conta(values, min, max)
    num = sum(values >= min & values < max);
end
