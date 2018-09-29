#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num[5], i;
    
    printf("Digite um numero inteiro:\n");
    printf("Digite um numero inteiro:\n");
    printf("Digite um numero inteiro:\n");
    printf("Digite um numero inteiro:\n");
    printf("Digite um numero inteiro:\n");
    
    for(i=0; i<5; i++){
        scanf("%d", &num[i]);
        printf("Numero %d: %d\n", i+1, num[i]);
    }
	return 0;
}