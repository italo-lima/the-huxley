#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int quantA, quantC, quantP, precoA, precoC, precoP;
    float valor;

scanf("%i\n", &quantA);
scanf("%i\n", &quantC);
scanf("%i\n", &quantP);
scanf("%i\n", &precoA);
scanf("%i\n", &precoC);
scanf("%i", &precoP);

valor = ((quantA * precoA) + (quantC * precoC) + (quantP * precoP));
    printf("Valor: R$%.2f", valor);

	return 0;
}