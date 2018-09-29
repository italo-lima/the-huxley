#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char nome[20];
    float salario, vendas;
    
    gets(nome);
    scanf("%f", &salario);
    scanf("%f", &vendas);
    
    salario = salario + (vendas * 0.15);
    printf("TOTAL = R$ %.2f", salario);
	return 0;
}