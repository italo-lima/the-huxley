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
        num[i] = num[i]*2;
        printf("%d\n", num[i]);
    }
	return 0;
}