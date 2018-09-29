#include <stdio.h>
#include <stdlib.h>

int main() {
    int i=0, soma=0, qtd, cont=0;
    
    while(soma<=18){
        scanf("%d", &qtd);
        soma = soma + qtd;
        if(soma<=18){
        cont++;
        } }
    
    printf("%d", cont);
	return 0;
}