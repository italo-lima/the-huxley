#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i;
    int num[10];

    for (i=0; ; i++){
    scanf("%d", &num[i]);

    if(num[i]>9999 || num[i]<1000){
            break;
    } else {
        int inteiro = num[i] /100;
        float valor = (float)num[i] / 100;
        valor = (valor - inteiro) * 100;
        int x = valor + inteiro;
        if(pow(x, 2) == num[i]){
            printf("propriedade do 3025!");
        } else {
            printf("numero comum");
        }
    }
    printf("\n");
    }

	return 0;
}
