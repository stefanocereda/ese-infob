function r = iscricca(v, m)
	n = length(v);
	oe = ones(n) - eye(n);
	for ii = 1:n
		if v(ii) == 0
			m(ii, :) = oe(ii, :);
		end
	end

	% oppure
	% idx = find(v==0)
	% uni = ones(length(idx), n);
	% m(idx, :) = uni;

	m = logical(m);
	if all(all(m) == v) % oppure (all(m==v)==v)
		r = 1;
	else
		r = 0;



% punto 2
% load data.mat
% v=input('Vettore v: ');
% if iscricca(m, v)
% 	disp('si');
% else
% 	disp('no');
