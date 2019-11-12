#include <stdio.h>

void main(){
    int n, b;

    printf("Dimmi un numero e una base: ");
    scanf("%d%d", &n, &b);

    printf("Leggere al contrario: ");
    while (n > 0){
        printf("%d", n%b);
        n = n / b;
    }
    printf("\n");
}
