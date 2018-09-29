#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int qtd, i, soma=0;
    
    scanf("%d", &qtd);
    
    int num[qtd];
    
    for(i=0; i<qtd; i++){
        scanf("%d", &num[i]);
        if(num[i]%2 == 0){
            num[i] = +1;
        } else {
            num[i]= -1;
        }
        soma = soma + num[i];
    }
    printf("%d", soma);
	return 0;
}