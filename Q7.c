#include<stdio.h>
#include<math.h>

void mA(int);

int nq = 1, vS;
const int vt = 6;

int numeroS[vt];
int main () {

    for(nq ; nq <= 6; nq ++) {

        printf("Digite um numero \n");
        scanf("%d",&numeroS[vS]);
        
        vS = ++vS;
        printf("%d",nq);
    }

    mA(numeroS[vS]);
    
    return 0;
}

void mA() {

    float mediaA;
    mediaA = (numeroS[0] + numeroS[1] + numeroS[2] + numeroS[3] + numeroS[4] + numeroS[5]) /nq;
    printf("A media aritimetica dos numeros digitados é %f", mediaA);

}
