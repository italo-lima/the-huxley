#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num1, num2;
    
    scanf("%d%d", &num1, &num2);
    printf("Digite um numero:\nDigite outro numero:\n");
    printf("Soma: %.1f", (float)num1+(float)num2);
	return 0;
}