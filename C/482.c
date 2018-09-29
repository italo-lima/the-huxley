#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, quant, cont=0, media, soma=0;
    
    for(i=0; i<7; i++){
        scanf("%d", &quant);
        soma = soma + quant;
        if(quant>=100){
            cont++;
        }
    }
    media = soma / 7;
    printf("%d\n%d", cont, media);
	return 0;
}