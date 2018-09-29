#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j;
    float matriz[12][12], soma;
    int num;
    char letra;
    
    scanf("%d", &num);
    getchar();
    scanf("%c", &letra);
    getchar();
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%f", &matriz[i][j]);
        }
    }
    
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
           if(i==num){
               soma = soma + matriz[i][j];
           }
        }
    }
    
    if(letra=='m' || letra=='M'){
        printf("%.1f", soma/12.0);
    } else if(letra=='s' || letra=='S'){
        printf("%.1f", soma);
    }
	return 0;
}