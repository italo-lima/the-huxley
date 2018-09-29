#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char cidade[10];
    int qtd, quartos, i;
    float valor_total, valor_uni;
    
    scanf("%d", &qtd);
    scanf("%s", cidade);
    scanf("%d", &quartos);
    
    for(i=0; i<strlen(cidade); i++){
        cidade[i] = toupper(cidade[i]);
    }
    
    if(strcmp(cidade,"PIPA") == 0){
        if(quartos == 2){
            valor_total = (qtd * 75) + 600;
            valor_uni = valor_total / qtd;
        } else {
             valor_total = (qtd * 75) + 900;
            valor_uni = valor_total / qtd;
        }
    } else {
        if(quartos == 3){
            valor_total = (qtd * 60) + 950;
            valor_uni = valor_total / qtd;
        } else {
            valor_total = (qtd * 60) + 1120;
            valor_uni = valor_total / qtd;
        }
    }
    printf("%.2f\n", valor_total);
    printf("%.2f", valor_uni);
	return 0;
}