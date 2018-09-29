#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float massa, altura;
    
    scanf("%f\n%f", &massa, &altura);
    float IMC = massa / (altura * altura);
    
    if(IMC<18.5){
        printf("%.2f MAGREZA", IMC);
    } else if((IMC >=18.5) && (IMC<25)){
        printf("%.2f SAUDAVEL", IMC);
    } else if((IMC>=25) && (IMC<30)){
        printf("%.2f SOBREPESO", IMC);
    } else if(IMC>=30){
        printf("%.2f OBESIDADE", IMC);
    }
	return 0;
}