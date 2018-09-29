#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double valor, soma=0;
    int i;
    
    for(i=0; i<100; i++){
        printf("Digite um numero:\n");
        scanf("%lf", &valor);
        
        soma = soma + valor;
    }
    
    double media = soma / 100;
    printf("Media dos numeros: %.15lf", media);
    
	return 0;
}