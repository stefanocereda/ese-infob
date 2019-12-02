#!/bin/sh

cat header.tex > stampa.tex

for file in "$@"; do
	{
		basename "$file" | sed 's/_/ /g'
		echo "\lstinputlisting[style=matlab]{$file}"
		echo
	} >> stampa.tex
done

echo '\end{document}' >> stampa.tex

xelatex stampa.tex
zathura stampa.pdf
