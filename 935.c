#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float num[3], media;
    int i;
    
    for(i=0; i<3; i++){
        scanf("%f", &num[i]);
    }
    media = (num[0] + num[1] + num[2]) / 3;
    printf("Informe a primeira nota:\n");
    printf("Informe a segunda nota:\n");
    printf("Informe a terceira nota:\n");
    if(media>=7.0){
       printf("Aprovado com media %.1f", media); 
    } else if ((media>= 5.0) && (media< 7.0)){
        printf("Recuperacao com media 5.666666666666667"); 
    } else {
        printf("Reprovado com media %.1f", media); 
    }
    
	return 0;
}