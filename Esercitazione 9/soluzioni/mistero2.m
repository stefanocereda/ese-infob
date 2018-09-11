function [z] = mistero2(x)
	if x>= 1
		z=mod(x,2) + 10*mistero2(floor(x/2))
	else
		z=0;
	end
end
