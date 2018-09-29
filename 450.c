#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char item[10], des[8];
    int i, j;
    float valor;
    
    scanf("%s", item);
    scanf("%s", des);
    
    for(i=0; i<strlen(item); i++){
        item[i] = toupper(item[i]);
    }
        for(j=0; j<strlen(des); j++){
        des[j] = toupper(des[j]);
    }
    
    if(strcmp(item,"TERNO")==0){
        if(strcmp(des,"SIMPLES") == 0){
            valor = 120.40 - (120.40 * 0.07);
        } else if(strcmp(des,"COMPLETO") == 0){
            valor = 150.35 - (150.35 * 0.07);
    } else {
        valor = 180.70 - (180.70 * 0.07);
    }
    } else {
         if(strcmp(des,"GRAVATA") == 0){
            valor = 30.00;
    } else if(strcmp(des,"SAPATO") == 0){
            valor = 80.00;
    } else {
            valor = 15.00;
    }
    }
    printf("%.2f", valor);
    return 0;
}