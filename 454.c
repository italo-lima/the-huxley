#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char produto[7];
    char sabor[10];
    int qtd, i, j;
    float valor;
    
    scanf("%s", produto);
    scanf("%s", sabor);
    scanf("%d", &qtd);
    
    for(i=0; i<strlen(produto); i++){
        produto[i] = toupper(produto[i]);
    }
    for(j=0; j<strlen(sabor); j++){
        sabor[j] = toupper(sabor[j]);
    }
    
    if(strcmp(produto,"PIZZA") == 0){
        if(strcmp(sabor,"CALABRESA")==0 || strcmp(sabor,"MARGUERITA")==0){
            valor = (qtd * 2) + (qtd * 20.60);
        } else {
            valor = (qtd * 2) + (qtd * 30.90);
        }
    } else {
        if(strcmp(sabor,"QUEIJO")==0){
            valor = (qtd * 2) + (qtd * 18.00);
    } else {
            valor = (qtd * 2) + (qtd * 23.00);
    }
    }
    printf("%.2f", valor);
    
	return 0;
}