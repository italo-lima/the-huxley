#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int quantDias, quantCasas, resultado,ticketDia = 108000;

scanf("%i", &quantDias);
scanf("%i", &quantCasas);
resultado = (quantDias * ticketDia) / quantCasas;

printf("%i", resultado);

	return 0;
}