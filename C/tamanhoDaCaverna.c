#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int tamanho (int b, int a){
    return ((b * b) * a);
}

int main() {
    int b, a, x;
    scanf("%i %i", &b, &a);

    x = tamanho(b,a);
    printf("%i", x);

	return 0;
}
