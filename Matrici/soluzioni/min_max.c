#include <stdio.h>

#define N 3
#define M 2

typedef int t_matrice[N][M];

void main(){
	t_matrice mat;
	int i,j;
	int min, max;

	/* Inizializzo la matrice */
	for (i=0; i<N; i++){
		for (j=0; j<M; j++){
			scanf("%d", &mat[i][j]);
		}
	}

	printf("Ecco la matrice che hai inserito:\n");
	for (i=0; i<N; i++){
		for (j=0; j<M; j++){
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}

	/* Cerco min e max. Potrei usare min = max = 0 come inizializzazione? */
	min = mat[0][0];
	max = min;
	for (i=0; i<N; i++){
		for (j=0; j<M; j++){
			if (mat[i][j] < min)
				min = mat[i][j];
			if (mat[i][j] > max)
				max = mat[i][j];
		}
	}
	printf("Il minimo vale %d, il massimo vale %d\n", min, max);

	printf("\nEcco i minimi per ogni riga:\n");
	for (i=0; i<N; i++){
		min = max = mat[i][0];
		for (j=0; j<M; j++){
			if (mat[i][j] < min)
				min = mat[i][j];
		}
		printf("%d\n", min);
	}

	printf("\nEcco i minimi per ogni colonna:\n");
	for (j=0; j<M; j++){
		min = max = mat[0][j];
		for (i=0; i<N; i++){
			if (mat[i][j] < min)
				min = mat[i][j];
		}
		printf("%d\t", min);
	}
	printf("\n");
}
