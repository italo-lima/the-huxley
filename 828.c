#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float salario, valorHrs;
    
    scanf("%f", &valorHrs);
    scanf("%f", &salario);
    
    printf("Informe quanto ganha por hora:\n");
    printf("Informe a quantidade mensal de trabalho:\n");
    printf("Resultado: %.1f", (valorHrs * salario));
	return 0;
}