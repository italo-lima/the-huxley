#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i;
    float notas[5];
    float menor, maior=0;

    scanf("%f", &notas[0]);
    menor = maior = notas[0];
    for(i=1; i<5; i++){
        scanf("%f", &notas[i]);
        if(notas[i]<menor)
            menor = notas[i];
            if(notas[i]>maior)
            maior = notas[i];
    }
    float total = notas[0] + notas[1] + notas[2] + notas[3] +notas[4] - menor - maior;
    printf("%.1f", total);
	return 0;
}
