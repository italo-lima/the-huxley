#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double peso, altura;
    
    scanf("%lf\n%lf", &peso, &altura);
    double result = peso /pow(altura,2);
    
        printf("%.2lf", result);

	return 0;
}