#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, qtd, soma=0, i;
    
    scanf("%d", &qtd);
    
    for(i=0; i<qtd; i++){
        scanf("%d", &n);
        soma+= n;
    }
    printf("%d", soma);
	return 0;
}