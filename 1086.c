#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int dias, km;
    
    scanf("%d\n", &dias);
    scanf("%d", &km);
    
    double valor = (dias * 30) + (km * 0.01);
    valor = valor - (valor * 0.1);
    
    printf("%.2lf", valor);
    
	return 0;
}