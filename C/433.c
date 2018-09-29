#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float IPVA, taxa, desconto;
    
    scanf("%f\n%f", &IPVA, &taxa);
    desconto = IPVA * 0.05;
    printf("%.2f", (IPVA-desconto) + taxa);
	return 0;
}