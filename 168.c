#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float produto[2][4], preco[1][4], somaP=0, somaK=0, somaE=0;
    int i, j;
    
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            scanf("%f", &produto[i][j]);
        }
    }
     
    for(i=0; i<1; i++){
        for(j=0; j<4; j++){
            scanf("%f", &preco[i][j]);
        }
    } 
    
    for(i=0; i<3; i++){
        if(i==0){
        for(j=0; j<4; j++){
            somaP = somaP + (produto[0][j] * preco[0][j]);
            }
            } else if(i==1){
            for(j=0; j<4; j++){
            somaE = somaE + (produto[1][j] * preco[0][j]);
            } 
            } else if(i==2){
             for(j=0; j<4; j++){
            somaK = somaK+ (produto[2][j] * preco[0][j]);
            }
        }
    }
    printf("%.2f\n%.2f\n%.2f", somaP, somaE, somaK);
	return 0;
}