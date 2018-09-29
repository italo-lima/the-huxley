#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, qtd, cont=0;
    float valor, soma=0;
    
    for(i=0; i<6; i++){
        scanf("%f", &valor);
        scanf("%d", &qtd);
        
        while(qtd>1){
            soma = soma + valor;
            qtd--;
            cont++;
        }
    }
    
    printf("%d\n", cont);
    
    if(soma>= 800){
        printf("SIM");
    } else {
        printf("NAO");
    }
	return 0;
}