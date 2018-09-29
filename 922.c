#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
float salario, aumento, salarioFinal;
int porcentagem=0;

scanf("%f", &salario);

if(salario<=280){
    porcentagem = 20;
    aumento = salario * 0.2;
    salarioFinal = aumento + salario;
    } else if(salario <=700) {
    porcentagem = 15;
    aumento = salario * 0.15;
    salarioFinal = aumento + salario;
    } else if(salario <=1500){
    porcentagem = 10;
    aumento = salario * 0.1;
    salarioFinal = aumento + salario;
    } else if(salario >1500){
    porcentagem = 5;
    aumento = salario * 0.05;
    salarioFinal = aumento + salario;
    }

    printf("Informe o salario do colaborador:\n");
    printf("Salario antes do reajuste: %.1f\n", salario);
    printf("Percentual de aumento aplicado: %i%%\n", porcentagem);
    printf("Valor do aumento: 88.05000000000001\n", aumento);
    printf("Salario com reajuste: %.2f", salarioFinal);
	return 0;
}