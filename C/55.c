#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num[10];
    int i, cont=0;
    
    for(i=0; i<10; i++){
        scanf("%d", &num[i]);
    }
    for(i=0; i<10; i++){
        if(num[9]==num[i]){
            cont++;
        }
    }
    
    printf("O numero %d apareceu %d vezes", num[9], cont);
	return 0;
}