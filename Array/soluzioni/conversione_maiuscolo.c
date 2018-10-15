#include <stdio.h>

#define N 10

void main(){
    char caratteri[N];
    char c;
    int i;

    i=0;
    c='a';
    while(i<N && c != '0'){
        scanf(" %c", &c);
        caratteri[i] = c;
        i++;
    }

    i=0;
    while(i<N && caratteri[i] != '0'){
        if (caratteri[i] >= 'a' && caratteri[i] <= 'z')
            caratteri[i] += 'A' - 'a';
        i++;
    }

    i=0;
    while(i<N && caratteri[i] != '0'){
        if (caratteri[i] == '.' ||
                caratteri[i] == ',' || 
                caratteri[i] == ':' || 
                caratteri[i] == ';' || 
                caratteri[i] == '?')
            caratteri[i] = ' ';
        i++;
    }

    i=0;
    while(i<N && caratteri[i] != '0'){
        printf("%c", caratteri[i]);
        i++;
    }
    printf("\n");
}


