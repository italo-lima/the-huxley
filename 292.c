#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double PI = 3.14159;
    double a,b,c;
    
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    
    printf("TRIANGULO: %.3lf\n",(a*c)/2);
    printf("CIRCULO: %.3lf\n",(c*c)* PI);
    printf("TRAPEZIO: %.3lf\n",(a+b)*c/2);
    printf("QUADRADO: %.3lf\n",(b*b));
    printf("RETANGULO: %.3lf",(a * b));
	return 0;
}