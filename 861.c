#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a,b;
    
    scanf("%f\n%f", &a, &b);
    
    if(a>b){
        printf("Digite um numero:\nDigite outro numero:\nMaior numero: %.1f", a);
    } else {
        printf("Digite um numero:\nDigite outro numero:\nMaior numero: %.1f", b);
    }
	return 0;
}