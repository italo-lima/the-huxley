#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int qtd, i;
    scanf("%d", &qtd);
    
    int id[qtd], idMaior, idMenor;
    float peso[qtd], maior=0, menor=99999999;
    
    for(i=0; i<qtd; i++){
        scanf("%d", &id[i]);
        scanf("%f", &peso[i]);
        
        if(peso[i]>maior){
            maior = peso[i];
            idMaior = id[i];
        }
        if(peso[i]<menor){
            menor = peso[i];
            idMenor = id[i];
        }
    }
    printf("Gordo: id: %d peso: %.2fKg\n", idMaior, maior);
    printf("Magro: id: %d peso: %.2fKg", idMenor, menor);
	return 0;
}