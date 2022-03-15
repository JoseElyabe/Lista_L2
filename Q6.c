#include <stdio.h>

void peso(float);

int c;

int main () {
	
	float alt;
	
	
	printf("Basic Health");
	
	printf("\nQual e o seu genero ?");
	
	printf("\n1 - Masculino ");
	
	printf("\n2 - Feminino \n");
		scanf ("%d",&c);
		
	printf("Digite sua altura \n");
	scanf("%f",&alt);	
	peso(alt);
	
	
return 0;
	
} 

void peso (float alt) {
	float pm = 72.7, pf = 62.1, pim, pif;
	
	switch (c) {
		case 1 :  pim = (pm * alt) -58; printf("Seu peso ideial e: %g",pim); break;
		
		case 2 : pif = (pf * alt) - 44.7; printf("Seu peso ideial e: %g",pif); break;
		 
	}
	
}
