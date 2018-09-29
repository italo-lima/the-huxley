#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int quant, limite=42;
	
	scanf("%i", &quant);
	printf("%.2f", (limite - quant) * 1.75);
	
	return 0;
}