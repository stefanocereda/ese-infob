#include <stdio.h>

void main(){
	char op;
	double n1, n2;

	printf("Inserisci un operatore (+, -, *, /): ");
	scanf(" %c", &op);
	printf("Inserisci due operandi: ");
	scanf("%lf%lf", &n1, &n2);

	switch(op){
		case '+':
			printf("%.1lf + %.1lf = %.1lf\n", n1, n2, n1+n2);
			break;
		case '-':
			printf("%.1lf - %.1lf = %.1lf\n", n1, n2, n1-n2);
			break;
		case '*':
			printf("%.1lf * %.1lf = %.1lf\n", n1, n2, n1*n2);
			break;
		case '/':
			printf("%.1lf / %.1lf = %.1lf\n", n1, n2, n1/n2);
			break;
		default:
			printf("Operazione non supportata\n");
	}
}
