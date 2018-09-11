function [tempB] = converti_temperature(tempA)
  if strcmp(tempA.scala, 'celsius') == 1
    tempB.scala = 'fahrenheit';
    tempB.valore = tempA.valore * 9/5 + 32;
  else
    tempB.scala = 'celsius';
    tempB.valore = (tempA.valore-32) * 5/9;
  end
end
    