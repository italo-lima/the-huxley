#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float p,a,imc;
    
    scanf("%f\n%f", &p, &a);
    imc = p / (a*a);
    
    if(imc<17){
        printf("muito abaixo do peso");
    } else if(imc<18.5){
        printf("abaixo do peso");
    } else if(imc<25){
        printf("peso normal");
    } else if(imc<30){
        printf("acima do peso");
    } else if(imc<35){
        printf("obesidade");
    } else if(imc<40){
        printf("obesidade severa");
    } else if(imc>40){
        printf("obesidade morbida");
    }
	return 0;
}