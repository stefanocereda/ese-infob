 a = [1 2 3; 4 5 6; 7 8 9]
 b = [9 8 7; 6 5 4; 3 2 1]
 
 a(3,1) %7
 a(8) %6
 a(end) %9
 mod(a,b) %matrice 3x3 con i resti delle divioni elemento per elemento
 [r c] = size(mod(a,b)) % r=3 c=3
