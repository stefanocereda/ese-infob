function [C,D] = matrici(A,B)
  srA = sum(A')';
  srB = sum(B')';
  scA = sum(A);
  scB = sum(B);
  
  C(srA <= srB, :) = A(srA <= srB, :);
  C(srA > srB,:) = B(srA > srB, :);
  
  D(:, scA >= scB) = A(:, scA >= scB);
  D(:, scA < scB) = B(:, scA < scB);