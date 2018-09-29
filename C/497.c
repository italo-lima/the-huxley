#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, indice;
    float num[5], soma=0, maior=0;
    
    for(i=0; i<5; i++){
        scanf("%f", &num[i]);
        soma = soma + num[i];
        if(num[i]>maior){
            maior = num[i];
            indice = i;
        }
    }
    float media = soma / 5.0;
    
    
    if(indice==0 || indice==3){
        printf("%.2f\n", media);
        printf("NOVELA");
    } else if(indice==2){
        printf("%.2f\n", media);
        printf("FUTEBOL");
    } else {
        printf("%.2f\n", media);
        printf("FILME");
    }
	return 0;
}