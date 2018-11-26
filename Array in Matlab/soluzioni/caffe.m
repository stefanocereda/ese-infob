% attenzione che caffe non ha l'accento. L'apostrofo indica la trasposta
caffe = [ 2 2 3 3 2;
               1 1 0 1 2;
               5 5 4 6 5;
               0 0 0 0 0]
               
% ogni persona paga
pagare = sum(caffe') * 0.25

% chi ha bevuto un caffe
bevitori = sum(caffe') > 1
cifra =  5/sum(bevitori);
pagare = pagare + cifra*bevitori

% chi ha bevuto più della media
[p g] = size(caffe);
media = sum(sum(caffe)) / (p*g);
forti_bevitori = sum(caffe') > media
cifra = 5/size(forti_bevitori)(2) 
% modo diverso per fare la stessa operazione del punto precedente
pagare(forti_bevitori) = pagare(forti_bevitori) + cifra
