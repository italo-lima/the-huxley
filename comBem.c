#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int valor;
    float acres;

    scanf("%d", &valor);
    acres = valor * 0.1;

    printf("%.2f", (float)(valor+acres));
	return 0;
}
