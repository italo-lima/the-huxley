#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int quant, total;
    
    scanf("%d", &quant);
    total = quant/3;
    total = quant - total;
    
    printf("%.2f", total * 2.20);
	return 0;
}