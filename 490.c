#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int quant[3], i;
    float valorA, soma=0;
    float valor[3];

    scanf("%f",&valorA);

    for(i=0; i<3; i++){
        scanf("%d\n", &quant[i]);
        scanf("%f", &valor[i]);
        soma += (quant[i] * valor[i]);
        }
        soma += valorA;
        printf("%.2f\n", soma);
    printf("%.2f", soma/21);
	return 0;
}
