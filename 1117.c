#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char opc;
    int ano, i=0, maiorA=0;
    float vel, maiorV=0, soma=0;
    
    while(i>=0){
        scanf("%c", &opc);
        if((opc=='n') || (opc=='N')){
            break;
        } else if((opc=='n') || (opc=='N') && (i==0)){
            break;
        } else if((opc=='s') || (opc=='S')){
            scanf("%d", &ano);
            scanf("%f", &vel);
            if(ano>maiorA){
            maiorA = ano;
            }
            if(vel>maiorV){
            maiorV = vel;
            }
            soma = soma + vel;
        i++;
        }
    }
    
        if(i>0){
    printf("%.2f\n", maiorV);
    printf("%d\n", maiorA);
    printf("%.2f", soma/i);
        } else {
             printf("zero");
        }
	return 0;
}