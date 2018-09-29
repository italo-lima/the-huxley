#include <stdio.h>
#include <stdlib.h>

int main() {
    float valores[7], soma=0;
    int i, cont=0, j;
    
    for(i=0; i<7; i++){
        scanf("%f", &valores[i]);
        soma = soma + valores[i];
    }
    for(j=6; j>=0; j--){
        if(valores[j] > valores[j-1]){
            cont++;
        }
    }
    printf("R$ %.2f\n", soma);
    printf("%d", cont);
	return 0;
}