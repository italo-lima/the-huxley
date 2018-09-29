#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float peso, altura, valor;
    int vf;

    scanf("%f\n%f", &peso, &altura);
    valor =(peso /pow(altura,2)) * 100;
    valor = valor / 100;
    printf("%.2f", valor);
	return 0;
}
