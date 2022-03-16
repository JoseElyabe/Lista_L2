#include<stdio.h>
#include<math.h>

void mA(int);

const int vt = 6;
int vS = 0;
float nq = 0;

int numeroS[vt];
int main () {

    while(nq < 6) {
        
        nq = ++nq;
        printf("Digite um numero \n");
        scanf("%d",&numeroS[vS]);
        
        vS = ++vS;
        printf("\n%g",nq);
    }

    mA(numeroS[vS]);
    
    
    return 0;
}
void mA() {

    float mediaA;
    mediaA =(numeroS[0] + numeroS[1] + numeroS[2] + numeroS[3] + numeroS[4] + numeroS[5]) /nq;
    printf("A media aritimetica dos numeros digitados é %g", mediaA);
}
