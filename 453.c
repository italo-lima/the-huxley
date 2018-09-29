#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char sabor[10];
    int qtd, i;
    float valor;
    
    scanf("%s", sabor);
    scanf("%d", &qtd);
    
    for(i=0; i<strlen(sabor); i++){
        sabor[i] = toupper(sabor[i]);
    }
    
    if((strcmp(sabor, "MORANGO") == 0) || (strcmp(sabor, "CEREJA") == 0)){
        valor = qtd * 4.50;
    } else if((strcmp(sabor,"DAMASCO") == 0) || (strcmp(sabor, "SIRIGUELA") == 0)){
        valor = qtd * 3.80;
    } else {
        valor = qtd * 2.75;
    }
    printf("%.2f\n", valor);
    if(qtd>2){
        printf("COM CALDA");
    } else {
        printf("SEM CALDA");
    }
	return 0;
}