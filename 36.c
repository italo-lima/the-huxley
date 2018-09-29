#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int maior=0, x1, x2, i, cont=0;
    
    scanf("%d%d", &x1, &x2);
    if(x1>=x2){
        printf("sem multiplos menores que %d", x2);
    } else {
    for(i=x1; i<=x2; i++){
        if(i%x1==0){
            maior = i;
            cont++;
        }
    }
    }
    if(cont>0)
    printf("%d", maior);
	return 0;
}