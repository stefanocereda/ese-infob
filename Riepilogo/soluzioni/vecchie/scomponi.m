function [b, e] = scomponi(n)
  b = [];
  e = [];
  while n > 1
    top = max(2, ceil(n/2));
    for next = [2:top]
      if isprime(next) && mod(n,next) == 0
        if any(b == next)
          idx = find(b == next);
          e(idx) = e(idx)+1;
          n = n / next;
        else
          b = [b next];
          e = [e 1];
          n = n/next;
        end
      end
    end
  end
end