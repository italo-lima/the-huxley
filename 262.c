#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int qtd, i, j, cont[3]={0,0,0};
    
    scanf("%d", &qtd);
    
    float notas[qtd], soma=0;
    
    for(i=0; i<qtd; i++){
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
        cont[0]++;
    }
    
    float media = soma / cont[0];
    float mediaA = media + (media*0.1);
    float mediaB = media - (media*0.1);
    
    for(j=0; j<qtd; j++){
        if(notas[j]>=mediaA){
            cont[1]++;
        } else if(notas[j]<=mediaB){
            cont[2]++;
        }
    }
    printf("%.2f\n", media);
    printf("%d\n%d", cont[1], cont[2]);
	return 0;
}