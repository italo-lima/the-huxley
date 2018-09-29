#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int quant;
    float precoS = 0.36086 + 0.48625;
    
    scanf("%d", &quant);
    float total = quant * precoS;
    printf("%.2f", total);
	return 0;
}