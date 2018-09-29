#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, num, valor, valor1;
    
    scanf("%d", &num);
    
    for(i=1; i<=num; i++){
        valor = pow(i,2);
        valor1 = valor * i;
        printf("%d %d %d\n", i, valor, valor1);
        printf("%d %d %d\n", i, valor+1, valor1+1);
    }
	return 0;
}