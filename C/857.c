#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;
    float numF;
    
    scanf("%d", &num);
    numF = num;
    printf("Digite um numero:\nO numero informado foi: %.1f", numF);
	return 0;
}