#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int i=0;
    float qtd, somaC=0, somaD=0;
    char nome[5];

    while(i<6){
        scanf("%f", &qtd);
        scanf("%s", nome);
        getchar();
        if((strcmp(nome,"Clara")==0)){
            somaC = somaC + qtd;
        } else {
            somaD = somaD + qtd;
        }
        i++;
         }
    if(somaC>somaD){
        printf("DIANA\n%.2f", somaC - (somaC + somaD) /2);
    } else if(somaD>somaC){
        printf("CLARA\n%.2f", somaD - (somaC + somaD) /2);
    } else if(somaC==somaD){
        printf("MORADORAS QUITES");
    }
	return 0;
}
