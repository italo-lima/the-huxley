#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int qtd, cedula, valor;
    float valorT, valorP;
    
    scanf("%d\n%d", &qtd, &cedula);
    
    if(cedula==2){
        valorT = qtd * 3.25;
        valorP = qtd * 4;
        valor = valorP - valorT;
        valor = valor / 3.25;
        printf("%d", valor);
    } else {
        valorT = qtd * 3.25;
        valorP = qtd * cedula;
        valor = valorP - valorT;
        valor = valor / 3.25;
        printf("%d", valor);
    }
	return 0;
}