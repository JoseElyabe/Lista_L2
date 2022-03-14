#include <stdio.h>
void tParaS (float, float, float);

 void tParaS (float H, float M, float S)  {
 
  float sCalculoH, sCalculoM, ho;
	sCalculoH = 3600 * H;
	sCalculoM = 60 * M;
	ho = sCalculoH + sCalculoM + S;
}

int main () {
	
	float H,M,S;
	
	printf("\n Digite a hora");
	scanf("%f",&H);
	
	printf("\n Digite os minutos");
	scanf("%f",&M);
	
	printf("\n Digite os segundoa");
	scanf("%f",&S);
	
	//printf("%g",tParaS(H, M, S));	
	tParaS(H, M, S);
	
	return 0;
}
