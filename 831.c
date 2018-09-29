#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double c, f;
    
    scanf("%lf", &f);
    
    c = (5 * (f-32) /9);
    printf("Digite uma temperatura na escala Fahrenheit:\nTemperatura em Celsius: %.1f", c);
	return 0;
}