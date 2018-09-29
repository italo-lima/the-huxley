#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2, num3;
    
    scanf("%f\n%f\n%f", &num1, &num2, &num3);
    
    if(num1>num2 && num1>num3){
        printf("Digite um numero:\nDigite outro numero:\nDigite outro numero:\n");
        printf("Maior numero: %.1f", num1);
    } else if(num2>num3 & num2>num1){
        printf("Digite um numero:\nDigite outro numero:\nDigite outro numero:\n");
        printf("Maior numero: %.1f", num2);
    } else {
        printf("Digite um numero:\nDigite outro numero:\nDigite outro numero:\n");
        printf("Maior numero: %.1f", num3);
    }
	return 0;
}