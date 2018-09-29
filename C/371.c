#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float valor;
    
    scanf("%f", &valor);
    printf("%.2f\n", valor * 0.6);
    printf("%.2f\n", valor * 0.3);
    printf("%.2f", valor * 0.1);
	return 0;
}