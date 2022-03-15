#include<stdio.h>


void vefify (int);

int main() {   
int n;

    printf("Vericar se o numero é positivo\n");
    printf("Digite um numero");
    
    scanf("%d",&n);
    
    verify(n);
    
    return 0;
}

void verify (int n) {
 
if (n > 0) {

printf ("O número é positivo ");

} else {
 printf ("O número não épositivo");
}

}
