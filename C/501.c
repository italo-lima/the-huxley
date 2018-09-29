#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, contE=0, contC=0;
    float valor, somaE=0, somaEP=0, somaC=0, somaCP=0;
    char p[10];
    
    for(i=0; i<8; i++){
        scanf("%s", p);
        getchar();
        scanf("%f", &valor);
        getchar();
        
        if(strcasecmp(p,"exame")==0){
            if(contE>=2){
                somaEP = somaEP + valor;
            } else {
            somaE = somaE + valor;
            contE++;
            }
        } else {
            if(contC>=3){
                somaCP = somaCP + valor;
            } else {
            somaC = somaC + valor;
            contC++;
        }
        }
    }
    
    printf("%.2f", (somaEP * 0.6) + (somaCP * 0.3));
	return 0;
}