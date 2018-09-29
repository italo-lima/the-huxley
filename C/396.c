#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num[50];
    int i, lim=2, cont=0, x;
    float soma=0, valor;

    for(i=0; ; i++){
        scanf("%d", &num[i]);
        if(num[i]==999){
            break;
        } else if(num[i]>2){
                 cont++;
                x = num[i] - lim;
                valor = (float)x * 12.89;
                soma = soma + valor;
            }
        }
        printf("%.2f\n", soma);
        printf("%d", cont);
	return 0;
}
