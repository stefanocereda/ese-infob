StazioneMI.banchine = [
    struct('numero', 1, 'stato', 'libera'),
    struct('numero', 2, 'stato', 'libera')
  ];

StazioneMI.codaTreni = [
    struct('nome', 'FR2092'),
    struct('nome', 'IR097'),
    struct('nome', 'FA2673')
    ];
StazioneMI.bloccata = false;

[treniInCoda, foo] = size(StazioneMI.codaTreni);
if ~StazioneMI.bloccata && treniInCoda >= 1
    StazioneMI.bloccata = true;
    StazioneMI.codaTreni(1).stato = 'inIngresso';
    StazioneMI.codaTreni = StazioneMI.codaTreni(2:end);
end

    