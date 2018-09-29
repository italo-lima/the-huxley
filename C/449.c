#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char comida[10], bebida[12];
    float valor;
    
    scanf("%s", comida);
    scanf("%s", bebida);
    
    if(strcasecmp(comida,"lasanha")==0){
        if(strcasecmp(bebida,"suco")==0){
            valor = 10.50;
        } else {
            valor = 11.00;
        }
    } else {
        if(strcasecmp(bebida,"suco")==0){
            valor = 13.50;
        } else {
            valor = 14.00;
        }
    }
    printf("%.2f",valor);
	return 0;
}