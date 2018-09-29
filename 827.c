#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float valor, resultado;
    
    scanf("%f", &valor);
    resultado = valor*valor;
    printf("Informe a medida de um dos lados do quadrado:\n");
    printf("Resultado: %.1f\n", resultado);
    printf("Dobro: %.1f", resultado*2);
	return 0;
}