#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, j, qtd;
    
    scanf("%d", &qtd);
    
    for(i=1; i<=qtd; i++){
        for(j=1; j<=i; j++){
            printf("%d", i);
        }
        printf("\n");
    }
	return 0;
}