#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int i=0, cont=0, soma=0, valor;
    
    while(i>=0){
        scanf("%d", &valor);
        if(valor<0){
            break;
        }
        soma = soma + valor;
        cont++;
    }
    float media = (float)soma / (float)cont;
    printf("%.2f", media);
	return 0;
}