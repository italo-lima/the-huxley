#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, soma=0, qtd;
    
    for(i=0; i<7; i++){
        scanf("%d", &qtd);
        soma = soma + qtd;
    }
    
    soma = soma * 4;
    
    int resto = (soma % 30);
    int resultado = (resto + soma) / 30;
    
    printf("%d\n", soma);
    printf("%d", resultado);
	return 0;
}