function ris = vettoreTriplo(a, b)
  if size(a,2) ~= 1 || size (b,2) ~= 1 || length(a) ~= length(b)
    ris = -1;
  elseif a(1) <= 3*b(1)
    ris = 0;
  elseif length(a) == 1 && a(1) > 3*b(1)
    ris = 1;
  else
    ris = vettoreTriplo(a(2:end), b(2:end));
  end
end
