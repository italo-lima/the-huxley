#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int consumo, cont=7, valor;
    
    scanf("%d", &consumo);
    
    if(consumo<=10){
        printf("%d", cont);
    } else if ((consumo>10) && (consumo<=30)){
        valor = consumo - 10;
        printf("%d", (cont+valor));
    } else if((consumo>30) && (consumo<=100)){
        cont = 27;
        valor = consumo - 30;
        valor *= 2;
        printf("%d", (cont+valor));
    } else if(consumo>100){
        cont = 167;
        valor = consumo - 100;
        valor *= 5;
        printf("%d", (cont+valor));
    }
	return 0;
}