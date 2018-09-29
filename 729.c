#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int qtd, qtdP, i, j, cont=0;
    
    scanf("%d", &qtd);
    
    char gabarito[qtd], respostas[qtd]; 
    scanf("%s", gabarito);
    
    scanf("%d", &qtdP);
    for(i=0; i<qtdP; i++){
        scanf("%s", respostas);
        for(j=0; j<qtd; j++){
        if(gabarito[j]==respostas[j]){
            cont++;
        }
        }
        printf("%d\n", cont);
        cont=0;
    }
	return 0;
}