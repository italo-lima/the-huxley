#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int qtd, i, soma=0;
    
    scanf("%d", &qtd);
    int numeros[qtd];
    
    for(i=0; i<qtd; i++){
        scanf("%d", &numeros[i]);
        soma = soma + numeros[i];
    }
    printf("%d", soma);
	return 0;
}