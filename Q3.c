#include <stdio.h>

int divisao(int, int);


int main () {
	
	int a, b;
	
	printf("Digite um numero");
	scanf("%d",&a);
	
	printf("Digite o segundo numero");
	scanf("%d",&b);
	
	divisao(a, b);

	printf("%d",divisao(a,b));
	return 0;
}


int divisao (int a, int b) {
	
	if (a % b == 0) {
		    
	return 0;
	
	} else {
		
		while (a % b != 0) {
			
			b++ ;
		
		return b;	
		}
	}
	
}
