#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num, qtd;
    float valor=0;
    
    scanf("%d%d", &num, &qtd);
    
    if(num==1){
        valor = 5.3 * qtd;
        if(qtd>=15 || valor>=40){
            valor = valor - (valor*0.15);
        }
    } else if(num==2){
        valor = 6.0 * qtd;
        if(qtd>=15 || valor>=40){
            valor = valor - (valor*0.15);
        } 
    } else if(num==3){
        valor = 3.2 * qtd;
        if(qtd>=15 || valor>=40){
            valor = valor - (valor*0.15);
        } 
    } else if(num==4){
        valor = 2.5 * qtd;
        if(qtd>=15 || valor>=40){
            valor = valor - (valor*0.15);
        } 
    }
    
    printf("R$ %.2f", valor);
	return 0;
}