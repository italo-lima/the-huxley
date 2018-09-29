#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double altura;
    
    printf("Informe sua altura:\n");
    scanf("%lf", &altura);
    
    double r = (72.7 * altura) - 58;
    printf("Peso ideal: %.14lf", r);
	return 0;
}