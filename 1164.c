#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long int valor;
  scanf("%ld", &valor);

  (valor <= 10)? printf("Arthur") : (valor <= 30)? printf("Luiz") : (valor <= 100)? printf("Pedro") : printf("Nenhum");

	return 0;
}