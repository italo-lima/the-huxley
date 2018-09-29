#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float salario;
    int hrs;
    
    scanf("%f", &salario);
    scanf("%d", &hrs);
    
    float acrescimo = (salario * 0.05) * hrs;
    printf("%.2f", salario + acrescimo);
	return 0;
}