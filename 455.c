#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float peso, lim=20;
    
    scanf("%f", &peso);
    
    if(peso<=20){
        printf("%.2f", peso*0);
    } else if(peso<=25){
        peso = peso - lim;
        printf("%.2f", peso*12.50);
    } else if(peso<=30){
        peso = peso - lim;
        printf("%.2f", peso*32.75);
    } else {
        peso = peso - lim;
        printf("PESO LIMITE EXCEDIDO");
    }
	return 0;
}