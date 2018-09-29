#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int quant;
    float valorMulta;
    
    scanf("%i", &quant);
    valorMulta = quant * 0.75;
    printf("%.2f", valorMulta);
	return 0;
}