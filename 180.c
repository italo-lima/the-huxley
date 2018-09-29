#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int capacidade, leituras, total=0, i, j=0;
    
    scanf("%d %d", &leituras, &capacidade);
    
    int E[leituras], S[leituras];
    
    for(i=0; i<leituras; i++){
        if(i==0){
        scanf("%d %d", &S[i], &E[i]);
        total = E[i];
        } else {
            scanf("%d %d", &S[i], &E[i]);
            total = (total - S[i]) + E[i];
            if(total > capacidade){
                j = 1;
            }
        }
    }
    if(j==0){
        printf("N");
    } else {
        printf("S");
    }
	return 0;
}