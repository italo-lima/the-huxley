
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float salario, aumento;

    scanf("%f", &salario);

    if(salario>=500){
        aumento = salario * 0.1;
        salario = salario + aumento;
    }  else if((salario>= 300) && (salario <500)){
        aumento = salario * 0.07;
        salario = salario + aumento;
    } else if(salario < 300){
        aumento = salario * 0.05;
        salario = salario + aumento;
    }

    printf("%.2f", salario);

	return 0;
}
