#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num, hrs;
    float vh;
    
    scanf("%d\n%d", &num, &hrs);
    scanf("%f", &vh);
    
    printf("NUMBER = %d\n", num);
    printf("SALARY = R$ %.2f", (hrs * vh));
	return 0;
}