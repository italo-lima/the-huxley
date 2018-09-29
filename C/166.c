#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int valor, unidade;
    
    scanf("%i", &valor);
    
    if(valor > 0){
        unidade = (valor % 10);
        printf("%i", unidade);
    } else {
         unidade = (valor % 10);
         printf("%i", unidade);
    }
	return 0;
}