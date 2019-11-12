#include <stdio.h>

#define N 2
#define LEN_STR 50

typedef struct{
    int eta;
    char nome[LEN_STR];
} Eta_nome;

void main(){
    Eta_nome aula[N][N];
    int i, j;

    for (i=0; i<N; i++){
        for (j=0; j<N; j++){
            scanf("%s", aula[i][j].nome);
            scanf("%d", &aula[i][j].eta);
        }
    }

    for (i=0; i<N; i++){
        if (aula[i][i].eta >= 18){
            printf("%s\n", aula[i][i].nome);
        }
    }
}
