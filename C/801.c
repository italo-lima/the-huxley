#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sit (float media){
    if(media >=3 && media < 7){
        printf("prova final");
    } else if(media < 9 && media > 3){
        printf("aprovado");
    } else if(media >= 9){
        printf("aprovado com louvor");
    } else if(media <3){
        printf("reprovado");
    }
}

int main() {
    float n1, n2, n3, n4;
    
    scanf("%f %f %f %f", &n1,&n2, &n3, &n4);
    float media = ((n1 * 1) + (n2 * 2) + (n3 * 3) + (n4 * 4)) / 10;
    sit(media);
    
	return 0;
}