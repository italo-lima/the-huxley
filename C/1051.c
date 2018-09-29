#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14

int main() {
    double raio;
    
    scanf("%lf", &raio);
    double volume = 4 * PI * (pow(raio,3)) /3;
    printf("%.2lf", volume);
	return 0;
}