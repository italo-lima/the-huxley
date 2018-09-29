#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float salario;
    
    scanf("%f", &salario);
    
    if (salario<=1000){
    salario =(salario * 0.3) + salario;
      printf("%.2f", salario);
    } else if(salario<=2000){
    salario = (salario * 0.1) + salario;
    printf("%.2f", salario);
    } else {
    printf("%.2f", salario);
    }
	return 0;
}