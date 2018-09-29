#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int qtd,i;
    float acrescimo=0;
    
    scanf("%d", &qtd);
    float valorTotal = (float)qtd * 19.90;
    
    for(i=1; i<=qtd; i++){
    if(i%15==0){
        acrescimo = acrescimo + (valorTotal * 0.08);
    } }
    
    float salario = (valorTotal * 0.5) + acrescimo;
    printf("%.2f\n%.2f\n%.2f", valorTotal, acrescimo, salario);
	return 0;
}