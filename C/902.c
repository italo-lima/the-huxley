#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int base, expoente;
    
    scanf("%d", &base);
    scanf("%d", &expoente);
    int r = pow(base,expoente);
    
        printf("Informe a base:\n");
        printf("Informe o expoente:\n");
        printf("Resultado: %d", r); 
	return 0;
}