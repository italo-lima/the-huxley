#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.1416

int main() {
    
    float raio;
    
    scanf("%f", &raio);
    
    printf("%.2f\n", (4*PI*(pow(raio,2))));
    printf("%.2f\n", (4*PI*(pow(raio,3)))/3);
    
	return 0;
}