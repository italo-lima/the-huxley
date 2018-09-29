#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, quantidade, soma=0;
    float valorFinal;

    for(i=0; ; i++){
        scanf("%d", &quantidade);
        if(quantidade%2==0){
        soma += quantidade;
        } else {
            break;
        }
    }
  
    int resto = 12 - (soma % 12);
    float valor = ((soma + resto)/12) * 7.89;
  
    printf("%.2f\n", valor);
    printf("%d", resto);
	return 0;
}
