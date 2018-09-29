#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int quant, totalComp=0, dias, sobra;
    
    scanf("%d", &quant);
    totalComp = quant * 35;
    
    dias = totalComp/4;
    sobra = totalComp%4;
    
    printf("%d\n", dias);
    printf("%d", sobra);
	return 0;
}