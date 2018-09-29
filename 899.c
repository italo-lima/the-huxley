#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i;
    float valor[50], maior=0;
    
    printf("Digite um numero:\n");
    scanf("%f", &valor[0]);
    maior = valor[0];
    
    for(i=1; i<50; i++){
        printf("Digite um numero:\n");
        scanf("%f", &valor[i]);
        
        if(valor[i]>maior){
            maior=valor[i];
        }
    }
   printf("Maior numero: %.2f", maior);
	return 0;
}