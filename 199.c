#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calculo(int tempo, int vel){
    int resultado = tempo * vel;
    
    return resultado;
}

int main() {
    int qtd, v,t, soma=0, i;
    
    scanf("%d", &qtd);
    
    for(i=0; i<qtd; i++){
        scanf("%d%d", &t,&v);
        int resultado = calculo(t,v);
        soma = soma + resultado;
    }
    printf("%d", soma);
	return 0;
}