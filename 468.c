#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float valoresO[5], valoresD[5], desconto;
    int i, j,cont=0;

    for(i=0; i<5; i++){
        scanf("%f", &valoresO[i]);
        scanf("%f", &valoresD[i]);
    }

    for(j=0; j<5; j++){
        desconto = valoresO[j] - (valoresO[j] * 0.2);
        if(desconto>=valoresD[j]){
        cont++;
    }
    }
    printf("%d", cont);
	return 0;
}
