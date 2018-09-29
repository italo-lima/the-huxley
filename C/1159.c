#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int valor, resto, quant=0;
    
    scanf("%i", &valor);
    
    quant = valor / 3;
    resto = valor % 3;
    
    printf("%i\n", quant);
    printf("%i", resto);
	return 0;
}