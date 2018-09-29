#include <stdio.h>

int main() {
    int qtdH;
    double salario;
    
    scanf("%lf", &salario);
    scanf("%d", &qtdH);
    double valorH = salario / 44;
    double salarioF = salario + valorH * (double)qtdH  * 1.1;
    
       return printf("%.2lf", salarioF);
    
	return 0;
}