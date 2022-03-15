#include<stdio.h>
#include<math.h>
int main()
{

float raio (float);

float v, ra;

printf ("Digite o raio de uma esfera");
scanf("%f",&ra);

raio(ra);

printf("%f",raio(ra));
return 0;
}

float raio (float ra) {

float v, r;
r = pow(ra,3);
v = 4.0/3.0 * r;

return v;
}
