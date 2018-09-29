#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int tam, i, posicao, menor;
    
    scanf("%d", &tam);
    int num[tam];

    scanf("%d", &num[0]);
    menor = num[0];
    
    for(i=1; i<tam; i++){
        scanf("%d", &num[i]);
        if(num[i]<menor){
            menor = num[i];
            posicao = i;
        }
    }
    
    printf("Menor valor: %d\nPosicao: %d", menor, posicao);
    
    
    
	return 0;
}