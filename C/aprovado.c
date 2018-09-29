#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i;
    float notas[3], media;

    for(i=0; i <=2; i++){
        scanf("%f\n", &notas[i]);
    }
    printf("[0] = %f\n", notas[0]);
    printf("[1] = %f\n", notas[1]);
    printf("[2] = %f\n", notas[2]);
    media = (notas[0] + notas[1] + notas[2]) / 3;

    if(media >= 7){
        printf("aprovado");
    } else if(media < 3){
        printf("reprovado");
    } else if( 3 <= media < 7){
        printf("prova final");
    }
	return 0;
}
