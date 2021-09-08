#include <stdio.h>
#include <string.h>

#define MAX_LEN_STR 256
#define N 5

typedef char Stringa[MAX_LEN_STR];
typedef Stringa Frase[N];

void main(){
	Frase f;
	int i, ultimo;

	for (i=0; i<N; i++){
		scanf("%s", f[i]);
	}

	for (i=0; i<N; i++){
		ultimo = strlen(f[i]) - 1;
		if (f[i][ultimo] >= 'a' && f[i][ultimo] <= 'z'){
			f[i][ultimo] += 'A' - 'a';
		}
	}

	for (i=0; i<N; i++){
		printf("%s ", f[i]);
	}
	printf("\n");
}
