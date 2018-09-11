function res =  isAlpha(str)
  res = all(str >= 'A'  & str <= 'Z');
  
function strOut = removeSpaces(strIn)
  strOut = strIn(strIn ~= ' ');
  
function res = isDigit(str)
  res = all(str >= '0'  & str <= '9');
  
function res = checkIBAN(str)
  str = removeSpaces(str);
  res = isAlpha(str([1 , 2 , 5])) & ...
    isDigit(str([3 , 4 , 6 : end])) & ...
    (length(str) == 27) ;
