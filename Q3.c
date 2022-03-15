#include <stdio.h>

float divisao(int, int);


int main () {
	
	int a, b;
	
	printf("Digite um numero");
	scanf("%d",&a);
	
	printf("Digite o segundo numero");
	scanf("%d",&b);
	
	divisao(a, b);

	printf("%g",divisao(a,b));
	return 0;
}


float divisao (int a, int b) {
	
	if (a % b == 0) {
		    
	return 0;
	
	} else if  (a % b != 0 & a < b){
	do {
				
	b = --b;
	 
	return b;
	
	}while (a % b != 0);
	
} else {
	
	do {
		
	b = ++b;
					
return b;
			
} while (a % b != 0 );

	}
		
}	
