#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char tipo[7], tr[2];
    int hTV, i, soma=0;
    
    for(i=0; i<7; i++){
        scanf("%s", tipo);
        getchar();
    
        if(strcasecmp(tipo,"r�dio")==0){
            scanf("%s", tr);
            getchar();
            
            if(strcasecmp(tr,"am")==0){
                soma = soma + 300;
            } else {
                soma = soma + 500;
            }
            
        } else if(strcasecmp(tipo,"revista")==0){
            soma = soma + 750;
            
        } else if(strcasecmp(tipo,"outdoor")==0){
            soma = soma +1500;

        } else if(strcasecmp(tipo,"tv")==0){
            scanf("%d", &hTV);
            if(hTV<=20){
                soma = soma + 1200;
            } else {
                soma = soma + 2000;
            }
        }
    }
    
    float somaF = (float)soma;
    printf("%.2f", somaF);
	return 0;
}