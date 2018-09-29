#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int km;
    double litros;
    
    scanf("%d", &km);
    scanf("%lf", &litros);
    
    printf("%.3lf km/l", (km/litros));
	return 0;
}