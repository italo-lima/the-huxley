#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int saque, n50, n20, n10, n5, n1; 

    scanf("%d",&saque);
    n50 = saque / 50;
    n20 = saque % 50 / 20;
    n10 = saque % 50 % 20 /10;
    n5 = saque % 50 % 20 % 10 / 5;
    n1 = saque % 50 % 20 % 10 % 5;
    
printf("Notas de 50: %d\n", n50);
printf("Notas de 20: %d\n", n20);
printf("Notas de 10: %d\n", n10);
printf("Notas de 5: %d\n", n5);
printf("Notas de 1: %d\n", n1);
	return 0;
}