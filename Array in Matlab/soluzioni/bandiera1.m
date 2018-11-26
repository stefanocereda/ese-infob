bandiera = zeros(200,300,3);

bandiera(:, 1:100, 2) = 1;
bandiera(:, 101:200, :) = 1;
bandiera(:, 201:300, 1) = 1;

imagesc(bandiera);

