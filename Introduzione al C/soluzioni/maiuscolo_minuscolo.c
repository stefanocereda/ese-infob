#include <stdio.h>

void main(){
	char c;

	printf("%d %d %d\n", 'a', 'b', 'Z');

	scanf("%c", &c);
	while (c != '0'){
		if ((c >= 'a') && (c <= 'z')){
			printf("%c", c + 'A' - 'a');
		}
		else if ((c >= 'A') && (c <= 'Z')){
			printf("%c", c);
		}
		scanf("%c", &c);
	}
	printf("\n");
}
