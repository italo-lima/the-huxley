#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int leituras, capacidade, i, total, max=0;
    
    scanf("%d%d", &leituras, &capacidade);
    
    int E[leituras], S[leituras];
    
    for(i=0; i<leituras; i++){
        if(i==0){
            scanf("%d %d", &S[i], &E[i]);
            total = E[i];
        } else {
            scanf("%d %d", &S[i], &E[i]);
            total = (total - S[i]) + E[i];
            if(total>capacidade){
                max = 1;
            }
        }
    }
    if(max==0){
        printf("Viva a conscientizacao.");
    } else {
        printf("Selvagens sao dificeis de ensinar.");
    }
	return 0;
}