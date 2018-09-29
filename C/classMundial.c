#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int pont[6], i, soma=0;

    for(i=0; i<6; i++){
        scanf("%d", &pont[i]);
    }

    for (i=0; i<6; i++) {
    printf("Digitado: %d\n", pont[i] );
    }

    for(i=0; i<6; i++){
        soma += pont[i];
    }
    printf("%d", soma);
    if(soma>=100){
        printf("Classificado");
    } else {
        printf("Eliminado");
    }
	return 0;
}
