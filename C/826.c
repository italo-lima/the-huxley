#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double num;
	
	scanf("%lf", &num);
	printf("Insira um valor em metros:\nResultado: %.1lf", num * 100);
	return 0;
}