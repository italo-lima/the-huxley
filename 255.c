#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, j, qtd;
    
    scanf("%d", &qtd);
    
    int num[qtd], dobro[qtd];
    
    for(i=0; i<qtd; i++){
        scanf("%d", &num[i]);
        dobro[i] = num[i]*2;
    }
    
    for(j=qtd-1; j>=0; j--){
        printf("%d\n", dobro[j]);
    }
	return 0;
}