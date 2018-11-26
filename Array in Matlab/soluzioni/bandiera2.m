bandiera = zeros(200,300,3);
bandiera(:, 1:100, 2) = 146/255;
bandiera(:, 1:100, 3) = 70/255;

bandiera(:, 101:200, 1) = 241/255;
bandiera(:, 101:200, 2) = 242/255;
bandiera(:, 101:200, 3) = 241/255;

bandiera(:, 201:300, 1) = 206/255;
bandiera(:, 201:300, 2) = 43/255;
bandiera(:, 201:300, 3) = 55/255;
imagesc(bandiera);

