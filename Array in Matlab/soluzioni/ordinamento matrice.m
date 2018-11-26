A=magic(5)

A = A(1:end-1, :)

sort(A)

%dim
sort(A,1)
sort(A,2)

%direction
sort(A,1,'ascending')
sort(A,1,'descending')

%vettore
v = sort(a(:))

reshape(v, size(a))