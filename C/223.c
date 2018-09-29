#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, valor2l, valor1l;
    
    scanf("%i", &a);
    
    valor2l = 2 * a;
    valor1l = valor2l * 2;
    
    printf("%i", valor1l);
	return 0;
}