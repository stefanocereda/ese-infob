%Rotazione matrice 90° senso antiorario
N=4;
A=[1 2 3 4;2 3 4 5;6 7 8 9;0 0 0 0];

for x = [1:N] % non specificando lo step si usa il default di 1
   y=1; 
   while(y<=N)
      B(N+1-y,x)=A(x,y); %scambio gli indici (x->y e y->x) e "inverto" il conteggio su y
      y=y+1; 
   end
end

disp(A)
disp(B)

disp(rot90(A))