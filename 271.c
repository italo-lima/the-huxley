#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14159

int main() {
    double raio;
    
    scanf("%lf", &raio);
    
    double area = PI * (pow(raio/100,2));
    printf("Area = %.4lf", area);
    
	return 0;
}