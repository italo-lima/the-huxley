#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float peso[10], soma=0;
    int i, cont=0;

    for(i=0; i<10; i++){
        scanf("%f", &peso[i]);
        soma += peso[i];
        cont++;
        if((peso[i]==0) || (soma>560) || (cont>7)){
                cont--;
                soma = soma - peso[i];
                break;
        }
    }

    int somaF = round(soma*100);
    if(somaF%10==0){
        printf("%d\n", cont);
        printf("%.1f", soma);
    } else {
        printf("%d\n", cont);
        printf("%.2f", soma);
    }
	return 0;
}
