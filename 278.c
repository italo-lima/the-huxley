#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num1, num2, num3, num4;
    
    scanf("%d\n%d\n%d\n%d\n", &num1,&num2,&num3,&num4);
    
    int resultado1 = num1 * num2;
    int resultado2 = num3 * num4;
    
    printf("DIFERENCA = %d", (resultado1 - resultado2));
	return 0;
}