#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, qtd;
    
    scanf("%d", &qtd);
    
    int num[qtd];
    
    for(i=0; i<qtd; i++){
        scanf("%d", &num[i]);
    }
    
    for(i=qtd-1; i>=0; i--){
        if(i>0){
            printf("%d ", num[i]);
        } else if(i==0){
            printf("%d\n", num[i]);
        }
    }
	return 0;
}