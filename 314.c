#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int qtd, i, cont=0;
    float valor, r;
    
    scanf("%d", &qtd);
    
    for(i=0; i<qtd; i++){
        cont =0;
        scanf("%f", &valor);
        while(valor>=1){
            valor = valor /2;
            cont++;
        }
        printf("%d dias\n", cont);
    }
	return 0;
}