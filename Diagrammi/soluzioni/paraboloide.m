x = -5:0.01:5;
y = x;
[xx yy] = meshgrid(x,y);

zz=xx.^2 - yy.^2; 

mesh(xx,yy,zz);
title('Paraboloide iperbolico')
xlabel('Asse x')
ylabel('Asse y')
zlabel('Asse z')