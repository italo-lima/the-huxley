#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    float c1, c2, h;
    
    scanf("%f\n%f", &c1, &c2);
    
    h = pow(c1,2) + pow(c2,2);
    h = sqrt(h);
    
    printf("%.2f", h);
    
	return 0;
}