#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n100, n50, n20, n10, n5, n2, n1, valor, r100, r50, r20, r10, r5, r2, r1;
    
    scanf("%d", &valor);
    
    n100 = valor / 100;
    r100 = valor % 100;
    
    n50 = r100 / 50;
    r50 = r100 % 50;
    
    n20 = r50 / 20;
    r20 = r50 % 20;
    
    n10 = r20 / 10;
    r10 = r20 % 10;
    
    n5 = r10 / 5;
    r5 = r10 % 5;
    
    n2 = r5 / 2;
    r2 = r5 % 2;
    
    n1 = r2 / 1;
    r1 = r2 % 1;
    
    printf("%i\n", valor);
    printf("%i nota(s) de R$ 100,00\n", n100);
    printf("%i nota(s) de R$ 50,00\n", n50);
    printf("%i nota(s) de R$ 20,00\n", n20);
    printf("%i nota(s) de R$ 10,00\n", n10);
    printf("%i nota(s) de R$ 5,00\n", n5);
    printf("%i nota(s) de R$ 2,00\n", n2);
    printf("%i nota(s) de R$ 1,00", n1);

	return 0;
}