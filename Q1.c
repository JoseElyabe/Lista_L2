#include <stdio.h>

//Cabeçalho da função 
void sNumeros(float);

int main () {
       
    float n;
    printf ("Digite um número\n");
    scanf("%f",&n);
    
    //função sendo chamada
    sNumeros(n);
    
return 0;
};

// Corpo da função
void sNumeros(float n) {
    //Para resolver esse problema usaremos a formula da soma de Gauss que é "Sn = ((a1 + an) * n) /n "
    
   float t; // t é o valor total da soma dos números
   
   float  i = 1;  // i é o número inicial, ou seja o menor número.
   
    t = ((i + n)*n)/2 ;
    printf("%g",t);
};
