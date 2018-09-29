#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float baseMa, baseMe, h;
    
    scanf("%f", &baseMa);
    scanf("%f", &baseMe);
    scanf("%f", &h);
    
    float area = ((baseMa + baseMe) * h) /2;
    printf("%.1f", area);
	return 0;
}