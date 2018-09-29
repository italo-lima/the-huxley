#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int qtd, num, i, x, cont=0;
    
    scanf("%d%d", &qtd, &num);
    
    for(i=0; i<qtd; i++){
        scanf("%d", &x);
        if(x==num){
            cont++;
        }
    }
    
    printf("%d", cont);
	return 0;
}