function[ris] = mistero3(n)
	if n<1
		ris = -1;
	elseif n>=1 & n<=4 %*
		ris = n; %*
	else
		ris = mistero3(n-2)*mistero3(n-4);
	end