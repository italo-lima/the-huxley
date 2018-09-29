#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float valor, resultado;
    int garantia;
    
    scanf("%f", &valor);
    scanf("%d", &garantia);
    
    if(garantia==0){
        resultado = valor;
        printf("%.2f", resultado);
    }
    else if(garantia==1){
        resultado = valor * 0.03;
        resultado = resultado + valor;
        printf("%.2f", resultado);
    } else if(garantia==2){
        resultado = valor * 0.05;
        resultado = resultado + valor;
        printf("%.2f", resultado);
    }
	return 0;
}