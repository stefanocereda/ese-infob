% attenzione che caffe non ha l'accento. L'apostrofo indica la trasposta
caffe = [5 5 5 5 5;
         1 1 0 1 0;
         5 5 4 6 5;
         0 0 0 0 0;
         1 0 0 0 0;
         4 3 5 3 4;
         0 0 0 0 0;
         0 0 0 0 0]

% ogni persona paga 25 centesimi per ogni caffè consumato
pagare = sum(caffe') * 0.25

% chi ha bevuto un caffe paga anche metà del noleggio
bevitori = any(caffe'); % in alternativa: bevitori = sum(caffe') >= 1;
noleggio =  5/sum(bevitori);
pagare(bevitori) = pagare(bevitori) + cifra % in alternativa: pagare = pagare + noleggio*bevitori

% chi ha bevuto più della media paga l'altra metà del noleggio
media_caffe = mean(sum(caffe'));
forti_bevitori = sum(caffe') > media_caffe;
noleggio = 5 / sum(forti_bevitori);
pagare(forti_bevitori) = pagare(forti_bevitori) + noleggio % Oppure pagare = pagare + noleggio * forti_bevitori
